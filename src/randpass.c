/* @(#)randpass.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <getopt.h>
#include <time.h>
#include "randpass.h"
#include "../config.h"

void usage()
{
  fprintf(stderr, "Usage:\n\trandpass [-avh]\n");
}

int main(int argc, char *argv[])
{
  int c;
  int (*char_maker)(int);
  int random_fd = open("/dev/random", O_RDONLY);
  int i;
  int char_length = 32;
  char_maker = numbersCharsAndSymbols;
  
  while ( (c = getopt(argc, argv, "avhn:")) != -1) {
    switch (c) {
    case 'a':
      char_maker = numbersAndChars;
      break;
    case 'v':
      fprintf(stderr, "%s\n", PACKAGE_STRING);
      exit(0);
    case 'h':
      usage();
      exit(0);
    case 'n':
      char_length = atoi(optarg);
      if (char_length < 1) {
        fprintf(stderr, "Must produce at least one character\n");
        exit(1);
      }
      break;
    default:
      fprintf(stderr, "%s\nUnknown option: %c\n", PACKAGE_STRING, c);
      usage();
      exit(1);
    }
  }
  
  for (i = 0; i < char_length; i++) {
    int r;
    read(random_fd, &r, sizeof r);
    printf("%c", char_maker(r));
  }
  printf("\n");
  close(random_fd);
  return 0;
}

int numbersAndChars(int x)
{
  int y = (abs(x) % 62) + 48;
  if (y > 90) {
    y += 7;
  } else if ((y > 57) && (y < 65)) {
    y += 7;
  }
  return y;
}

int numbersCharsAndSymbols(int x)
{
  return (abs(x) % 93) + 33;
}
