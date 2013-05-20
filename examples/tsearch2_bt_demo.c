/*
 * tsearch2_demo.c
 *
 *  Created on: May 16, 2013
 *      Author: elmasry
 */

#include "tsearch_binarytree.h"


int main (int argc, char **argv)
{
  long input[] = { 4, 5, 32, 1, 4, 11, 99, 5, 5, 1, 12 };
  long *output;
  int inputSize = 11;
  int outputSize;
  removeDuplicates (input, inputSize, &output, &outputSize);
  printf ("outputsize=%d\n", outputSize);
  int i;
  for (i = 0; i < outputSize; i++)
  {
    printf ("%lu, ", output[i]);
  }
  printf ("\n");
  free(output);
}
