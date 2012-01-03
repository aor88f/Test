/*
 * Hello.c
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Hello!\n");
  printf("Hello2!\n");

  printf(GetSqr(8));

  return 0;
}

int GetSqr(int x)
{
    return x * x;
}

int Zero()
{
    return 0;
}

