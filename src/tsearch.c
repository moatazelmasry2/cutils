/*
 * tsearch.c
 *
 *  Created on: May 3, 2013
 *      Author: elmasry
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "tsearch.h"

long coMinl (long a, long b)
{
  return a < b ? a : b;
}
void __coGetUnduplicatedElements (const long *inputArray, const int sizeInput, long *outArray, int *sizeOut)
{
  outArray = (long*) malloc (sizeInput);
  *sizeOut = 0;
  int i;
  for (i = 0; i < sizeInput; i++)
  {
    if (i == 0 || inputArray[i] != inputArray[i - 1])
    {
      outArray[ (*sizeOut)++] = inputArray[i];
    }
  }
}

void __coBottomupMerge (long *A, int iLeft, int iRight, int iEnd, long *B)
{
  int i0 = iLeft;
  int i1 = iRight;

  int j;
  for (j = iLeft; j < iEnd; j++)
  {
    if (i0 < iRight && (i1 >= iEnd || A[i0] <= A[i1]))
    {
      B[j] = A[i0];
      i0++;
    }
    else
    {
      B[j] = A[i1];
      i1++;
    }
  }
}

void __coCopyArray (long *input, long *out, int size)
{
  out = (long*) malloc (size);
  int i;
  for (i = 0; i < size; i++)
  {
    out[i] = input[i];
  }
}

void __coPrintArray (long *array, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    printf ("%lu,", array[i]);
  }
  printf ("\n");
}

void coBottomupSort (long *input, int sizeInput, long *outArray)
{
  outArray = (long*) malloc (sizeInput);
  long *inputArray;
  __coCopyArray (input, inputArray, sizeInput);
  int width;
  printf ("sizeinput=%d\n", sizeInput);
  for (width = 1; width < sizeInput; width = 2 * width)
  {
    printf ("width=%d\n", width);
    int i;
    for (i = 0; i < sizeInput; i = i + 2 * width)
    {
      printf ("width innerloop i=%d\n", i);
      __coBottomupMerge (inputArray, i, coMinl (i + width, sizeInput), coMinl (i + 2 * width, sizeInput), outArray);
      __coCopyArray (outArray, inputArray, sizeInput);
      __coPrintArray (inputArray, sizeInput);
    }
  }

  int i;
  for (i = 0; i < sizeInput; i++)
  {
    outArray[i] = inputArray[i];
  }
}

void coRemoveDuplicates (long *inputArray, int size, long *outputArray, int *outSize)
{
  long *tmpOut;
  coBottomupSort (inputArray, size, tmpOut);
  int i;
  for (i = 0; i < size; i++)
  {
    printf ("%lu, ", tmpOut[i]);
  }
  printf ("\n");
  __coGetUnduplicatedElements (tmpOut, size, outputArray, outSize);
  for (i = 0; i < *outSize; i++)
  {
    printf ("%lu, ", outputArray[i]);
  }
  printf ("\n");
}

int main (int argc, char **argv)
{
  long *bla;
  bla = (long*)malloc(5);
  long a[4] = { 3, 56, 1, 6 };
  long *output;
  int outputSize;
  coRemoveDuplicates (a, 4, output, &outputSize);
}
