#include <math.h>
#include "vector.h"

Vector2F32 vector2f32_normalize(Vector2F32* vector) {
  register float x = vector->x;
  register float y = vector->y;
  register float factor = 1.f / sqrtf((x * x) + (y * y));
  return (Vector2F32) {
    x * factor,
    y * factor
  };
}

Vector2F64 vector2f64_normalize(Vector2F64* vector) {
  register double x = vector->x;
  register double y = vector->y;
  register double factor = 1.f / sqrt((x * x) + (y * y));
  return (Vector2F64) {
    x * factor,
    y * factor
  };
}

Vector3F32 vector3f32_normalize(Vector3F32* vector) {
  register float x = vector->x;
  register float y = vector->y;
  register float z = vector->z;
  register float factor = 1.f / sqrtf((x * x) + (y * y) + (z * z));
  return (Vector3F32) {
    x * factor,
    y * factor,
    z * factor
  };
}

Vector3F64 vector3f64_normalize(Vector3F64* vector) {
  register double x = vector->x;
  register double y = vector->y;
  register double z = vector->z;
  register double factor = 1.f / sqrt((x * x) + (y * y) + (z * z));
  return (Vector3F64) {
    x * factor,
    y * factor,
    z * factor
  };
}

Vector4F32 vector4f32_normalize(Vector4F32* vector) {
  register float x = vector->x;
  register float y = vector->y;
  register float z = vector->z;
  register float w = vector->w;
  register float factor = 1.f / sqrtf((x * x) + (y * y) + (z * z) + (w * w));
  return (Vector4F32) {
    x * factor,
    y * factor,
    z * factor,
    w * factor
  };
}

Vector4F64 vector4f64_normalize(Vector4F64* vector) {
  register double x = vector->x;
  register double y = vector->y;
  register double z = vector->z;
  register double w = vector->w;
  register double factor = 1.f / sqrt((x * x) + (y * y) + (z * z) + (w * w));
  return (Vector4F64) {
    x * factor,
    y * factor,
    z * factor,
    w * factor
  };
}
