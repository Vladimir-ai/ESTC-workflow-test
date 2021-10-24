#include <stdio.h>
#include "vector3d.h"

void main()
{
    vector_3d_t fst_vector, sec_vector, res_vector;

    printf("Enter first vector coordinates: ");
    while (!scanf("%f %f %f", &fst_vector.x, &fst_vector.y, &fst_vector.z))
    {
        printf("Incorrect values!\n");
    }

    printf("Enter first vector coordinates: ");
    while (!scanf("%f %f %f", &sec_vector.x, &sec_vector.y, &sec_vector.z))
    {
        printf("Incorrect values!\n");
    }

    /* sum */
    res_vector = vector_3d_sum(fst_vector, sec_vector);
    printf("Result of sum: [%f, %f, %f]\n", res_vector.x, res_vector.y, res_vector.z);

    /* substraction */
    res_vector = vector_3d_sub(fst_vector, sec_vector);
    printf("Result of substraction: [%f, %f, %f]\n", res_vector.x, res_vector.y, res_vector.z);


    /* cross prod */
    res_vector = vector_3d_cross_product(fst_vector, sec_vector);
    printf("Result of cross product: [%f, %f, %f]\n", res_vector.x, res_vector.y, res_vector.z);

    /* dot product */
    printf("Result of dot product: %f\n", vector_3d_dot_product(fst_vector, sec_vector));
}