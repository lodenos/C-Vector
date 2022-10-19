#include "vector.h"

Vector2F32 vector2f32_invert(Vector2F32* vector) {
  return (Vector2F32) {
    1.f / vector->x,
    1.f / vector->y
  };
}

Vector2F64 vector2f64_invert(Vector2F64* vector) {
  return (Vector2F64) {
    1.f / vector->x,
    1.f / vector->y
  };
}

Vector3F32 vector3f32_invert(Vector3F32* vector) {
  return (Vector3F32) {
    1.f / vector->x,
    1.f / vector->y,
    1.f / vector->z
  };
}

Vector3F64 vector3f64_invert(Vector3F64* vector) {
  return (Vector3F64) {
    1.f / vector->x,
    1.f / vector->y,
    1.f / vector->z
  };
}

Vector4F32 vector4f32_invert(Vector4F32* vector) {
  return (Vector4F32) {
    1.f / vector->x,
    1.f / vector->y,
    1.f / vector->z,
    1.f / vector->w
  };
}

Vector4F64 vector4f64_invert(Vector4F64* vector) {
  return (Vector4F64) {
    1.f / vector->x,
    1.f / vector->y,
    1.f / vector->z,
    1.f / vector->w
  };
}
