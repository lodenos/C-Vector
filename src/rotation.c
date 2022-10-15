#include <math.h>
// Local
#include "vector.h"

Vector2F32 vector2f32_rotation(Vector2F32* vector, float theta) {
  return (Vector2F32){
    (vector->x * cosf(theta)) - (vector->y * sinf(theta)),
    (vector->x * sinf(theta)) + (vector->y * cosf(theta))
  };
}

Vector2F64 vector2f64_rotation(Vector2F64* vector, double theta) {
  return (Vector2F64){
    (vector->x * cos(theta)) - (vector->y * sin(theta)),
    (vector->x * sin(theta)) + (vector->y * cos(theta))
  };
}

Vector3F32 vector3f32_rotation_x(Vector3F32* vector, float theta) {
  return (Vector3F32){
    vector->x,
    (vector->y * cosf(theta)) - (vector->z * sinf(theta)),
    (vector->y * sinf(theta)) + (vector->z * cosf(theta))
  };
}

Vector3F32 vector3f32_rotation_y(Vector3F32* vector, float theta) {
  return (Vector3F32){
    (vector->x * cosf(theta)) + (vector->z * sinf(theta)),
    vector->y,
    (vector->x * -sinf(theta)) + (vector->z * cosf(theta))
  };
}

Vector3F32 vector3f32_rotation_z(Vector3F32* vector, float theta) {
  return (Vector3F32){
    (vector->x * cosf(theta)) - (vector->y * sinf(theta)),
    (vector->x * sinf(theta)) + (vector->y * cosf(theta)),
    vector->z
  };
}

Vector3F64 vector3f64_rotation_x(Vector3F64* vector, double theta) {
  return (Vector3F64){
    vector->x,
    (vector->y * cosf(theta)) - (vector->z * sinf(theta)),
    (vector->y * sinf(theta)) + (vector->z * cosf(theta))
  };
}

Vector3F64 vector3f64_rotation_y(Vector3F64* vector, double theta) {
  return (Vector3F64){
    (vector->x * cosf(theta)) + (vector->z * sinf(theta)),
    vector->y,
    (vector->x * -sinf(theta)) + (vector->z * cosf(theta))
  };
}

Vector3F64 vector3f64_rotation_z(Vector3F64* vector, double theta) {
  return (Vector3F64){
    (vector->x * cosf(theta)) - (vector->y * sinf(theta)),
    (vector->x * sinf(theta)) + (vector->y * cosf(theta)),
    vector->z
  };
}
