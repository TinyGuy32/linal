# linal
A c librairy for linear algebra in 2d, it implements several linear algebra opperations.
I recommend having a good understanding of linear algebra, vectors and linear transformations.

## linal types

### vectors
```c
typedef float vector[2];
```
A linal ```vector``` is a ```float``` array of length 2

### matrix
```c
typedef float matrix[2][2];
```
A linal ```matrix``` is a 2x2 ```float``` array, the identity matrix would look like this:
```c
{{1.0, 0.0}, // <- i
 {0.0, 1.0}} // <- j
```
heres a 90 degree rotation:
```c
{{0.0, 1.0},
 {-1.0, 0.0}}
```

## linal functions

### add_vectors
```c
void add_vectors(vector vecA, vector vecB, vector * out);
```
adds vectors ```vecA``` and ```vecB``` and saves the result into ```out```

### scalar_multiply
```c
void scalar_multiply(float scalar, vector vecA, vector * out);
```
multiplies ```scalar``` by ```vecA``` and then stores it in ```out```

### apply_transform
```c
void apply_transform(matrix * matA, vector vecA, vector * out);
```
applys the linear transform stored in the matrix ```matA``` to the vector ```vecA``` and saves the result to ```out```

## how to compile a project that uses linal
To use linal in your programm you will need to import ```linal.h``` and link ```linal.o```

### how that might look
if we have a directory that looks like this:
```
main.c
linal.o
linal.h
```
and main.c looks like this
```c
#include <stdio.h>
#include "linal.h"

int main() {
  vector v = {3.0, 1.1};
  vector w = {-0.1, 0.0};
  vector out;

  add_vectors(v, w, &out);

  printf("%f, %f\n", out[0], out[1]);
}
```
to compile you might do something like this: ```gcc main.c linal.o```.

