/* @(#)randpass.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <time.h>
#include "randpass.h"

int main(int argc, char *argv[])
{
  int c;
  int (*char_maker)(int);
  int random_fd = open("/dev/random", O_RDONLY);
  int i;
  char_maker = numbersCharsAndSymbols;
  
  while ( (c = getopt(argc, argv, "a")) != -1) {
    int this_option_optind = optind ? optind : 1;
    switch (c) {
    case 'a':
      char_maker = numbersAndChars;
      break;
    default:
      printf ("Unknown option: %c\nUsage:\n\trandpass [-c]\n", c);
    }
  }
  
  for (i = 0; i < 32; i++) {
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
