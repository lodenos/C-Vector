#include "vector.h"

Vector2F32 vector2f32_scale(Vector2F32* vector, float scale) {
  return (Vector2F32) {
    vector->x * scale,
    vector->y * scale
  };
}

Vector2F64 vector2f64_scale(Vector2F64* vector, double scale) {  
  return (Vector2F64) {
    vector->x * scale,
    vector->y * scale
  };
}

Vector3F32 vector3f32_scale(Vector3F32* vector, float scale) {
  return (Vector3F32) {
    vector->x * scale,
    vector->y * scale,
    vector->z * scale
  };
}

Vector3F64 vector3f64_scale(Vector3F64* vector, double scale) {
  return (Vector3F64) {
    vector->x * scale,
    vector->y * scale,
    vector->z * scale
  };
}

Vector4F32 vector4f32_scale(Vector4F32* vector, float scale) {
  return (Vector4F32) {
    vector->x * scale,
    vector->y * scale,
    vector->z * scale,
    vector->w * scale
  };
}

Vector4F64 vector4f64_scale(Vector4F64* vector, double scale) {
  return (Vector4F64) {
    vector->x * scale,
    vector->y * scale,
    vector->z * scale,
    vector->w * scale
  };
}
