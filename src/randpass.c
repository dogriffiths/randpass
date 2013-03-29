/* @(#)randpass.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <time.h>
#include <sys/fcntl.h>
#include "randpass.h"
#include "../config.h"

#ifdef __APPLE__
  #define DEVRANDOM "/dev/random"
#endif
#ifdef __linux
  #define DEVRANDOM "/dev/urandom"
#endif

void usage()
{
  fprintf(stderr, "Usage:\n\trandpass [-avh]\n");
}

#ifndef DEVRANDOM
void print_seq(int char_length, int (*char_maker)(int))
{
  int i, r;
  srand(time(NULL));
  for (i = 0; i < char_length; i++) {
    r = rand() % 256;
    printf("%c", char_maker(r));
  }
  printf("\n");
}
#else
void print_seq(int char_length, int (*char_maker)(int))
{
  int random_fd = open(DEVRANDOM, O_RDONLY);
  int i, r;
  srand(time(NULL));
  for (i = 0; i < char_length; i++) {
    if (read(random_fd, &r, sizeof r) != -1)
      printf("%c", char_maker(r));
    else {
      fprintf(stderr, "Unable to read from %s\n", DEVRANDOM);
      exit(1);
    }
  }
  printf("\n");
  close(random_fd);
}
#endif

int main(int argc, char *argv[])
{
  int c;
  int char_length = 32;
  int (*char_maker)(int) = numbersCharsAndSymbols;
  
  while ( (c = getopt(argc, argv, "avhn:")) != -1) {
    switch (c) {
    case 'a':
      char_maker = numbersAndChars;
      break;
    case 'v':
#ifdef DEVRANDOM
      fprintf(stderr, "%s using %s\n", PACKAGE_STRING, DEVRANDOM);
#else
      fprintf(stderr, "%s\n", PACKAGE_STRING);
#endif
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
  
  print_seq(char_length, char_maker);
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
