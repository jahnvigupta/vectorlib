#include "veclib.h"
//Function to add two vectors
vector  eleProd(vector vec1, vector vec2){
	vector vec_prod;
	int i;
	for( i=0;i<DIM;i++)
		vec_prod.x[i]=vec1.x[i]*vec2.x[i];
	return vec_prod;
}
