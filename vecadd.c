#include "veclib.h"
//Function to add two vectors
vector add(vector vec1, vector vec2){
	vector vec_sum;
	int i;
	for( i=0;i<DIM;i++)
		vec_sum.x[i]=vec1.x[i]+vec2.x[i];
	return vec_sum;
}