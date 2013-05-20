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
  If you use this code please credit me moataz.elmasry2@gmail.com

 * tsearch_binarytree.h
 *
 *  Created on: May 14, 2013
 *      Author: elmasry
 */

#ifndef __TSEARCH2_H_
#define __TSEARCH2_H_

#include <stdlib.h>
#include <stdio.h>

struct node;

void destroy_tree (struct node *leaf);

void insert (long key, struct node **leaf);

struct node *search (int key, struct node *leaf);

void printTree (struct node *leaf);

void tree2Array (struct node *leaf, long *outArray, int *currentIndex);

void removeDuplicates (long *input, int sizeInput, long **output, int *sizeOutput);

#endif
