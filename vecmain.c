#include "veclib.h"

//Function to print the vector
void print(vector vec) {
	int i;
	printf("[");
	for (i=0;i<DIM;i++)
		printf("%f ",vec.x[i]);
	printf("]");
}

int main() {
	vector vec1, vec2;
	printf("Enter the elements of first vector: \n");
	for(int i=0;i<DIM;i++)
		scanf("%f",&vec1.x[i]);
	printf("Enter the elements of second vector: \n");
	for(int i=0;i<DIM;i++)
		scanf("%f",&vec2.x[i]);	
	vector vec_sum = add(vec1,vec2);
	printf("Sum of vectors: \n");
	print(vec_sum);
	vector vec_proc = eleProd(vec1,vec2);
	printf("\nElement wise product of vectors: \n");
	print(vec_proc);
	printf("\n");
}

