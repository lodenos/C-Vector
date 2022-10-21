#include "vector.h"

bool vector2f32_bounding_box_inside(Vector2F32* vector, Vector2F32* start,
    Vector2F32* end) { 
  if (((vector->x >= start->x) && (vector->x <= end->x)) &&
      ((vector->y >= start->y) && (vector->y <= end->y)))
    return true;
  return false;
}

bool vector2f64_bounding_box_inside(Vector2F64* vector, Vector2F64* start,
    Vector2F64* end) {
  if (((vector->x >= start->x) && (vector->x <= end->x)) &&
      ((vector->y >= start->y) && (vector->y <= end->y)))
    return true;
  return false;
}
