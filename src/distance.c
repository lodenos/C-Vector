#include <math.h>
// Local
#include "vector.h"

float vector2f32_distance(Vector2F32* vectorA, Vector2F32* vectorB) {
  register float dx = vectorA->x - vectorB->x;
  register float dy = vectorA->y - vectorB->y;
  return sqrtf((dx * dx) + (dy * dy));
}

double vector2f64_distance(Vector2F64* vectorA, Vector2F64* vectorB) {
  register double dx = vectorA->x - vectorB->x;
  register double dy = vectorA->y - vectorB->y;
  return sqrt((dx * dx) + (dy * dy));
}

float vector3f32_distance(Vector3F32* vectorA, Vector3F32* vectorB) {
  register float dx = vectorA->x - vectorB->x;
  register float dy = vectorA->y - vectorB->y;
  register float dz = vectorA->z - vectorB->z;
  return sqrtf((dx * dx) + (dy * dy) + (dz * dz));
}

double vector3f64_distance(Vector3F64* vectorA, Vector3F64* vectorB) {
  register double dx = vectorA->x - vectorB->x;
  register double dy = vectorA->y - vectorB->y;
  register double dz = vectorA->z - vectorB->z;
  return sqrt((dx * dx) + (dy * dy) + (dz * dz));
}

float vector4f32_distance(Vector4F32* vectorA, Vector4F32* vectorB) {
  register float dx = vectorA->x - vectorB->x;
  register float dy = vectorA->y - vectorB->y;
  register float dz = vectorA->z - vectorB->z;
  register float dw = vectorA->w - vectorB->w;
  return sqrtf((dx * dx) + (dy * dy) + (dz * dz) + (dw * dw));
}

double vector4f64_distance(Vector4F64* vectorA, Vector4F64* vectorB) {
  register double dx = vectorA->x - vectorB->x;
  register double dy = vectorA->y - vectorB->y;
  register double dz = vectorA->z - vectorB->z;
  register double dw = vectorA->w - vectorB->w;
  return sqrt((dx * dx) + (dy * dy) + (dz * dz) + (dw * dw));
}
