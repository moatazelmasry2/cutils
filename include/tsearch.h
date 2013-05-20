/*
 * This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * tsearch.h
 *
 *  This is the Ansi C implementation of linux tsearch. It removes duplicates from a large set of long integers
 *  It uses merge sort and has a runtime of O(nlogn)
 *
 *  Created on: May 3, 2013
 *      Author: elmasry
 *  If you use this code, please credit me moataz.elmasry2@gmail.com
 */

#ifndef TSEARCH_H_
#define TSEARCH_H_

void __coCopyArray (long *input, long *out, int size);

void __coPrintArray (long *array, int size);
/**
 *
 */
void __coGetUnduplicatedElements (const long *A, const int sizeA, long *B, int *sizeB);

long minl (long a, long b);
/**
 *
 */
void __coBottomupMerge (long *A, int iLeft, int iRight, int iEnd, long *B);

/**
 * sorts an array using merge sort algorithm
 */
void coBottomupSort (long *inputArray, int sizeInput, long *outArray);

/*
 * Removes duplicate from a long integer array. It uses merge sort and runs in O(nlogn)
 */
void coRemoveDuplicates (long *inputArray, int size, long *outputArray, int *outSize);

#endif /* TSEARCH_H_ */
