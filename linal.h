// linal is a C librairy used for linear algebra in 2 dimentions

#ifndef LINAL_H
#define LINAL_H

typedef float vector[2];
typedef float matrix[2][2];

void add_vectors(vector vecA, vector vecB, vector * out);
void scalar_multiply(float scalar, vector vecA, vector * out);
void apply_transform(matrix * matA, vector vecA, vector * out);

#define NULL_VECTOR {0.0, 0.0}
#define NULL_MATRIX {{0.0, 0.0}, {0.0, 0.0}}

#endif
