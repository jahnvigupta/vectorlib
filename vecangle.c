#include "veclib.h"
#include <math.h>
#include <stdio.h>
float squareDistance(vector vec_a) {
    float distance = 0.0;
    for (int i=0;i<DIM;i++) {
        distance += (vec_a.x[i])*(vec_a.x[i]);
    }
    return distance;
}
float angle(vector vec1, vector vec2) {
   float distancea, distanceb;
   distancea =  squareDistance(vec1);
   distanceb = squareDistance(vec2);
   float dotproduct = dotprod(vec1, vec2);
   float ans = acos(dotproduct/sqrt(distancea*distanceb));
   return ans*180/3.14159;
}
