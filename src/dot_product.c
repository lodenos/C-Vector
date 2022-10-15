#include "vector.h"

float vector2f32_dot_product(Vector2F32* vectorA, Vector2F32* vectorB) {
  return (vectorA->x * vectorB->x) + (vectorA->y * vectorB->y);
}

double vector2f64_dot_product(Vector2F64* vectorA, Vector2F64* vectorB) {
  return (vectorA->x * vectorB->x) + (vectorA->y * vectorB->y);
}

float vector3f32_dot_product(Vector3F32* vectorA, Vector3F32* vectorB) {
  return (vectorA->x * vectorB->x) + (vectorA->y * vectorB->y) +
    (vectorA->z * vectorB->z);
}

double vector3f64_dot_product(Vector3F64* vectorA, Vector3F64* vectorB) {
  return (vectorA->x * vectorB->x) + (vectorA->y * vectorB->y) +
    (vectorA->z * vectorB->z);
}

float vector4f32_dot_product(Vector4F32* vectorA, Vector4F32* vectorB) {
  return (vectorA->x * vectorB->x) + (vectorA->y * vectorB->y) +
    (vectorA->z * vectorB->z) + (vectorA->w * vectorB->w);
}

double vector4f64_dot_product(Vector4F64* vectorA, Vector4F64* vectorB) {
  return (vectorA->x * vectorB->x) + (vectorA->y * vectorB->y) +
    (vectorA->z * vectorB->z) + (vectorA->w * vectorB->w);
}
