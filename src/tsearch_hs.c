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
 * tsearch_hashset.c
 *
 *  Created on: May 17, 2013
 *      Author: elmasry
 */
#include <stdlib.h>

#include "hashset.h"

int removeDuplicatesHs (size_t *input, size_t sizeInput, size_t *output, size_t *sizeOutput)
{
  hashset_t set = hashset_create ();
  if (set != NULL )
  {
    int i;
    for (i = 0; i < sizeInput; i++)
    {
      hashset_add (set, &input[i]);
    }

    size_t num_items = hashset_num_items (set);
    *sizeOutput = num_items;
    output = calloc (num_items, sizeof(size_t));
    for (i = 0; i < num_items; i++)
    {
      output[i] = set->items[i];
    }
    hashset_destroy(set);
    return 1;
  }
  else
  {
    return 0;
  }
}

