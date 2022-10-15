#include "vector.h"

Vector2F32 vector2F32_multiply(Vector2F32* vectorA, Vector2F32* vectorB) {
  return (Vector2F32){
    vectorA->x * vectorB->x,
    vectorA->y * vectorB->y
  };
}

Vector2F64 vector2F64_multiply(Vector2F64* vectorA, Vector2F64* vectorB) {
  return (Vector2F64){
    vectorA->x * vectorB->x,
    vectorA->y * vectorB->y
  };
}

Vector3F32 vector3F32_multiply(Vector3F32* vectorA, Vector3F32* vectorB) {
  return (Vector3F32){
    vectorA->x * vectorB->x,
    vectorA->y * vectorB->y,
    vectorA->z * vectorB->z
  };
}

Vector3F64 vector3F64_multiply(Vector3F64* vectorA, Vector3F64* vectorB) {
  return (Vector3F64){
    vectorA->x * vectorB->x,
    vectorA->y * vectorB->y,
    vectorA->z * vectorB->z
  };
}

Vector4F32 vector4F32_multiply(Vector4F32* vectorA, Vector4F32* vectorB) {
  return (Vector4F32){
    vectorA->x * vectorB->x,
    vectorA->y * vectorB->y,
    vectorA->z * vectorB->z,
    vectorA->w * vectorB->w
  };
}

Vector4F64 vector4F64_multiply(Vector4F64* vectorA, Vector4F64* vectorB) {
  return (Vector4F64){
    vectorA->x * vectorB->x,
    vectorA->y * vectorB->y,
    vectorA->z * vectorB->z,
    vectorA->w * vectorB->w
  };
}
