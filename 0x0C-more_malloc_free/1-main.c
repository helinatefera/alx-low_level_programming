#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  char *concat;

  concat = string_nconcat("Best ", "School !!!", 6);
  printf("%s\n", concat);
  free(concat);
  return (0);
}11;rgb:0000/0000/0000
