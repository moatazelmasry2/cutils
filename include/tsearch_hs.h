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
  if you use this code please credit me moataz.elmasry2@gmail.com
 * tsearch_hs.h
 *
 *  Created on: May 17, 2013
 *      Author: elmasry
 */

#ifndef TSEARCH_HS_H_
#define TSEARCH_HS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>

/*
 * Removes duplicates from an array. It uses a hashset to store the elements.
 * The runtime is O(n x cost of the hash function)
 *
 * The first two parameters are input parameters, while the last 2 are output params
 *
 * returns non zero on success and zero on failure
 */
int removeDuplicatesHs (size_t *input, size_t sizeInput, size_t *output, size_t *sizeOutput);


#ifdef __cplusplus
extern }
#endif


#endif /* TSEARCH_HS_H_ */
