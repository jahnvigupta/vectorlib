#include "veclib.h"
#include <math.h>

//Function to find norm of two vectors
float vecNorm(vector vec1, vector vec2){
    float vec_norm, vec_norm_sq = 0, temp;
	int i;
	for( i=0;i<DIM;i++){
        temp = vec1.x[i]-vec2.x[i];
        vec_norm_sq += temp*temp;
    }
	vec_norm = sqrt(vec_norm_sq);
    return vec_norm;
}
