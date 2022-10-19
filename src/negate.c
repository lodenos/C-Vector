#include "vector.h"

Vector2F32 vector2f32_negate(Vector2F32* vector) {
  return (Vector2F32) {
    -vector->x,
    -vector->y
  };
}

Vector2F64 vector2f64_negate(Vector2F64* vector) {
  return (Vector2F64) {
    -vector->x,
    -vector->y
  };
}

Vector3F32 vector3f32_negate(Vector3F32* vector) {
  return (Vector3F32) {
    -vector->x,
    -vector->y,
    -vector->z
  };
}

Vector3F64 vector3f64_negate(Vector3F64* vector) {
  return (Vector3F64) {
    -vector->x,
    -vector->y,
    -vector->z
  };
}

Vector4F32 vector4f32_negate(Vector4F32* vector) {
  return (Vector4F32) {
    -vector->x,
    -vector->y,
    -vector->z,
    -vector->w
  };
}

Vector4F64 vector4f64_negate(Vector4F64* vector) {
  return (Vector4F64) {
    -vector->x,
    -vector->y,
    -vector->z,
    -vector->w
  };
}
