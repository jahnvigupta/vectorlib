#ifndef _veclib_h 
#define _veclib_h

#include <stdio.h>

#define DIM 4
// vector type
typedef struct vector { float x[DIM]; } vector ;

//vector addition
vector add(vector vec1, vector vec2);
// elementwise product
vector eleProd(vector vec1, vector vec2);
// difference of two vectors
vector diff(vector vec1, vector vec2);
// dot product
float dotprod(vector vec1, vector vec2);
// angle between between two vectors
float angle(vector vec1, vector vec2);
// Norm of two vectors
float vecNorm(vector vec1, vector vec2);

#endif 
