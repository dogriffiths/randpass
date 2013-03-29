/* @(#)randpass.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <time.h>
#include "randpass.h"

int main()
{
  /*[ "$2" == "0" ] && CHAR="[:alnum:]" || CHAR="[:graph:]"
    cat /dev/urandom | (LC_CTYPE=C tr -dc "$CHAR") | head -c ${1:-32}*/
  int randomData = open("/dev/random", O_RDONLY);
  int i;
  for (i = 0; i < 32; i++) {
    int myRandomInteger;
    read(randomData, &myRandomInteger, sizeof myRandomInteger);
    printf("%c", (abs(myRandomInteger) % 93) + 33);
  }
  printf("\n");
  close(randomData);
  return 0;
}
