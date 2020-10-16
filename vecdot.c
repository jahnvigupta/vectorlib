/* Custom Library Imports */
#include "veclib.h"

/* Function for dot product of two vectors. */
float dotprod(vector vec1, vector vec2) {
	float ans=0;
	for(int i=0;i<4;i++) {
		ans+=vec1.x[i]*vec2.x[i];
	}
	return ans;
}
