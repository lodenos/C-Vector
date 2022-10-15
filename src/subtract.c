#include "vector.h"

Vector2F32 vector2f32_subtract(Vector2F32* vectorA, Vector2F32* vectorB) {
  return (Vector2F32){
    vectorA->x - vectorB->x,
    vectorA->y - vectorB->y
  };
}

Vector2F64 vector2f64_subtract(Vector2F64* vectorA, Vector2F64* vectorB) {
  return (Vector2F64){
    vectorA->x - vectorB->x,
    vectorA->y - vectorB->y
  };
}

Vector3F32 vector3f32_subtract(Vector3F32* vectorA, Vector3F32* vectorB) {
  return (Vector3F32){
    vectorA->x - vectorB->x,
    vectorA->y - vectorB->y,
    vectorA->z - vectorB->z
  };
}

Vector3F64 vector3f64_subtract(Vector3F64* vectorA, Vector3F64* vectorB) {
  return (Vector3F64){
    vectorA->x - vectorB->x,
    vectorA->y - vectorB->y,
    vectorA->z - vectorB->z
  };
}

Vector4F32 vector4f32_subtract(Vector4F32* vectorA, Vector4F32* vectorB) {
  return (Vector4F32){
    vectorA->x - vectorB->x,
    vectorA->y - vectorB->y,
    vectorA->z - vectorB->z,
    vectorA->w - vectorB->w
  };
}

Vector4F64 vector4f64_subtract(Vector4F64* vectorA, Vector4F64* vectorB) {
  return (Vector4F64){
    vectorA->x - vectorB->x,
    vectorA->y - vectorB->y,
    vectorA->z - vectorB->z,
    vectorA->w - vectorB->w
  };
}
