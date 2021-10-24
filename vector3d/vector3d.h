#ifndef VECTOR_3D_H
#define VECTOR_3D_H

typedef struct vector_3d_s
{  
    float x;
    float y;
    float z;
} vector_3d_t;

/** @brief 3d vector sum
 *  @return new vector_3d_t which is fst_vector_3d + sec_vector_3d
 */
vector_3d_t vector_3d_sum(vector_3d_t fst_vector_3d, vector_3d_t sec_vector_3d);

/** @brief 3d vector substraction
 *  @param fst_vector_3d vector from which substraction perfromed 
 *  @param sec_vector_3d vector which is substracted
 *  @return new vector_3d_t which is fst_vector_3d - sec_vector_3d
 */
vector_3d_t vector_3d_sub(vector_3d_t fst_vector_3d, vector_3d_t sec_vector_3d);

/** @brief 3d dot product
 *  @return result of dot product fst_vector_3d * sec_vector_3d
 */
float vector_3d_dot_product(vector_3d_t fst_vector_3d, vector_3d_t sec_vector_3d);

/** @brief 3d cross
 *  @return result of cross product fst_vector_3d * sec_vector_3d
 */
vector_3d_t vector_3d_cross_product(vector_3d_t fst_vector_3d, vector_3d_t sec_vector_3d);

#endif /* VECTOR_3D_H */