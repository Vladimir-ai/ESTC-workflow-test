#include "vector3d.h"

vector_3d_t vector_3d_sum(vector_3d_t fst_vector_3d, vector_3d_t sec_vector_3d)
{
    vector_3d_t res;

    res.x = fst_vector_3d.x + sec_vector_3d.x;
    res.y = fst_vector_3d.y + sec_vector_3d.y;
    res.z = fst_vector_3d.z + sec_vector_3d.z;

    return res;
}

vector_3d_t vector_3d_sub(vector_3d_t fst_vector_3d, vector_3d_t sec_vector_3d)
{
    vector_3d_t res;

    res.x = fst_vector_3d.x - sec_vector_3d.x;
    res.y = fst_vector_3d.y - sec_vector_3d.y;
    res.z = fst_vector_3d.z - sec_vector_3d.z;

    return res;
}

float vector_3d_dot_product(vector_3d_t fst_vector_3d, vector_3d_t sec_vector_3d)
{
    return fst_vector_3d.x * sec_vector_3d.x + 
        fst_vector_3d.y * sec_vector_3d.y +
        fst_vector_3d.z + sec_vector_3d.z;
}

vector_3d_t vector_3d_cross_product(vector_3d_t fst_vector_3d, vector_3d_t sec_vector_3d)
{
    vector_3d_t res;

    res.x = fst_vector_3d.y * sec_vector_3d.z - fst_vector_3d.z * sec_vector_3d.y;
    res.y = -fst_vector_3d.x * sec_vector_3d.z - fst_vector_3d.z * sec_vector_3d.x; 
    res.z = fst_vector_3d.x * sec_vector_3d.y - fst_vector_3d.y * sec_vector_3d.x;
    return res;
}
