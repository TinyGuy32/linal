#include "linal.h"
#include <stdio.h>

#define vec_cmp(a, b) (a[0] == b[0])&(a[1] == b[1])

void print_vector(vector * v) {
	printf("%f, %f\n", (*v)[0], (*v)[1]);
}


void add_vectors(vector vecA, vector vecB, vector * out) {
  for(int i = 0; i < 2; i++) {
    (*out)[i] = vecA[i]+vecB[i];
  }
}

void scalar_multiply(float scalar, vector vecA, vector * out) {
  for(int i = 0; i < 2; i++) {
    (*out)[i] = vecA[i]*scalar;
  }
}

void apply_transform(matrix * matA, vector vecA, vector * out) {
  vector x;
  vector y;
  scalar_multiply(vecA[0], (*matA)[0], &x);
  scalar_multiply(vecA[1], (*matA)[1], &y);
  add_vectors(x, y, out);
}
