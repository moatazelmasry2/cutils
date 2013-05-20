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
 *
 * rsearch2.c
 *
 *  Created on: May 14, 2013
 *      Author: elmasry
 */

#include <malloc.h>
#include <stdio.h>

#include "tsearch_binarytree.h"


struct node
{
  long key_value;
  struct node *left;
  struct node *right;
};

struct node *root = 0;

void destroy_tree (struct node *leaf)
{
  if (leaf != 0)
  {
    destroy_tree (leaf->left);
    destroy_tree (leaf->right);
    free (leaf);
    leaf = 0;
  }
}

void insert (long key, struct node **leaf)
{
  if (*leaf == 0)
  {
    *leaf = (struct node*) malloc (sizeof(struct node));
    (*leaf)->key_value = key;
    /* initialize the children to null */
    (*leaf)->left = 0;
    (*leaf)->right = 0;
  }
  else if (key < (*leaf)->key_value)
  {
    insert (key, & (*leaf)->left);
  }
  else if (key > (*leaf)->key_value)
  {
    insert (key, & (*leaf)->right);
  }
}

struct node *search (int key, struct node *leaf)
{
  if (leaf != 0)
  {
    if (key == leaf->key_value)
    {
      return leaf;
    }
    else if (key < leaf->key_value)
    {
      return search (key, leaf->left);
    }
    else
    {
      return search (key, leaf->right);
    }
  }
  else
    return 0;
}

void printTree (struct node *leaf)
{
  if (leaf != 0)
  {
    printf ("%lu, ", leaf->key_value);
    printTree (leaf->left);
    printTree (leaf->right);
  }
}

void tree2Array (struct node *leaf, long *outArray, int *currentIndex)
{

  if (leaf != 0)
  {
    tree2Array (leaf->left, outArray, currentIndex);
    outArray[*currentIndex] = leaf->key_value;
    (*currentIndex)++;
    tree2Array (leaf->right, outArray, currentIndex);
  }
}

void removeDuplicates (long *input, int sizeInput, long **output, int *sizeOutput)
{
  int i;
  for (i = 0; i < sizeInput; i++)
  {
    insert (input[i], &root);
  }

  *sizeOutput = 0;
  *output = (long*) malloc (sizeInput * sizeof(long));
  tree2Array (root, *output, sizeOutput);
  destroy_tree (root);
}
