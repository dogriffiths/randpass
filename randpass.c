/* @(#)randpass.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <time.h>
#include "randpass.h"

int numbersAndChars(int x)
{
  // 48-57 65-90 and 97-122
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

int main(int argc, char *argv[])
{
  int c;
  int (*charMaker)(int);
  int randomData = open("/dev/random", O_RDONLY);
  int i;
  charMaker = numbersCharsAndSymbols;
  
  while ( (c = getopt(argc, argv, "c")) != -1) {
    int this_option_optind = optind ? optind : 1;
    switch (c) {
    case 'c':
      charMaker = numbersAndChars;
      break;
    default:
      printf ("Unknown option: %c\nUsage:\n\trandpass [-c]\n", c);
    }
  }
  
  for (i = 0; i < 32; i++) {
    int myRandomInteger;
    read(randomData, &myRandomInteger, sizeof myRandomInteger);
    printf("%c", charMaker(myRandomInteger));
  }
  printf("\n");
  close(randomData);
  return 0;
}
