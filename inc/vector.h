#ifndef VECTOR_H
#define VECTOR_H

typedef struct Vector2F32 Vector2F32;
typedef struct Vector2F64 Vector2F64;
typedef struct Vector3F32 Vector3F32;
typedef struct Vector3F64 Vector3F64;
typedef struct Vector4F32 Vector4F32;
typedef struct Vector4F64 Vector4F64;

struct Vector2F32 {
  float x;
  float y;
};

struct Vector2F64 {
  double x;
  double y;
};

struct Vector3F32 {
  float x;
  float y;
  float z;
};

struct Vector3F64 {
  double x;
  double y;
  double z;
};

struct Vector4F32 {
  float x;
  float y;
  float z;
  float w;
};

struct Vector4F64 {
  double x;
  double y;
  double z;
  double w;
};

// Add Operator
Vector2F32 vector2f32_add(Vector2F32* vectorA, Vector2F32* vectorB);
Vector2F64 vector2f64_add(Vector2F64* vectorA, Vector2F64* vectorB);
Vector3F32 vector3f32_add(Vector3F32* vectorA, Vector3F32* vectorB);
Vector3F64 vector3f64_add(Vector3F64* vectorA, Vector3F64* vectorB);
Vector4F32 vector4f32_add(Vector4F32* vectorA, Vector4F32* vectorB);
Vector4F64 vector4f64_add(Vector4F64* vectorA, Vector4F64* vectorB);
// Cross Product Operator
// ...
// Distance
float vector2f32_distance(Vector2F32* vectorA, Vector2F32* vectorB);
double vector2f64_distance(Vector2F64* vectorA, Vector2F64* vectorB);
float vector3f32_distance(Vector3F32* vectorA, Vector3F32* vectorB);
double vector3f64_distance(Vector3F64* vectorA, Vector3F64* vectorB);
float vector4f32_distance(Vector4F32* vectorA, Vector4F32* vectorB);
double vector4f64_distance(Vector4F64* vectorA, Vector4F64* vectorB);
// Divide Operator
Vector2F32 vector2f32_divide(Vector2F32* vectorA, Vector2F32* vectorB);
Vector2F64 vector2f64_divide(Vector2F64* vectorA, Vector2F64* vectorB);
Vector3F32 vector3f32_divide(Vector3F32* vectorA, Vector3F32* vectorB);
Vector3F64 vector3f64_divide(Vector3F64* vectorA, Vector3F64* vectorB);
Vector4F32 vector4f32_divide(Vector4F32* vectorA, Vector4F32* vectorB);
Vector4F64 vector4f64_divide(Vector4F64* vectorA, Vector4F64* vectorB);
// Dot Product
float vector2f32_dot_product(Vector2F32* vectorA, Vector2F32* vectorB);
double vector2f64_dot_product(Vector2F64* vectorA, Vector2F64* vectorB);
float vector3f32_dot_product(Vector3F32* vectorA, Vector3F32* vectorB);
double vector3f64_dot_product(Vector3F64* vectorA, Vector3F64* vectorB);
float vector4f32_dot_product(Vector4F32* vectorA, Vector4F32* vectorB);
double vector4f64_dot_product(Vector4F64* vectorA, Vector4F64* vectorB);
// Invert
Vector2F32 vector2f32_invert(Vector2F32* vector);
Vector2F64 vector2f64_invert(Vector2F64* vector);
Vector3F32 vector3f32_invert(Vector3F32* vector);
Vector3F64 vector3f64_invert(Vector3F64* vector);
Vector4F32 vector4f32_invert(Vector4F32* vector);
Vector4F64 vector4f64_invert(Vector4F64* vector);
// Multiply Operator
Vector2F32 vector2F32_multiply(Vector2F32* vectorA, Vector2F32* vectorB);
Vector2F64 vector2F64_multiply(Vector2F64* vectorA, Vector2F64* vectorB);
Vector3F32 vector3F32_multiply(Vector3F32* vectorA, Vector3F32* vectorB);
Vector3F64 vector3F64_multiply(Vector3F64* vectorA, Vector3F64* vectorB);
Vector4F32 vector4F32_multiply(Vector4F32* vectorA, Vector4F32* vectorB);
Vector4F64 vector4F64_multiply(Vector4F64* vectorA, Vector4F64* vectorB);
// Negate
Vector2F32 vector2f32_negate(Vector2F32* vector);
Vector2F64 vector2f64_negate(Vector2F64* vector);
Vector3F32 vector3f32_negate(Vector3F32* vector);
Vector3F64 vector3f64_negate(Vector3F64* vector);
Vector4F32 vector4f32_negate(Vector4F32* vector);
Vector4F64 vector4f64_negate(Vector4F64* vector);
// Normalize
Vector2F32 vector2f32_normalize(Vector2F32* vector);
Vector2F64 vector2f64_normalize(Vector2F64* vector);
Vector3F32 vector3f32_normalize(Vector3F32* vector);
Vector3F64 vector3f64_normalize(Vector3F64* vector);
Vector4F32 vector4f32_normalize(Vector4F32* vector);
Vector4F64 vector4f64_normalize(Vector4F64* vector);
// Rotation
Vector2F32 vector2f32_rotation(Vector2F32* vector, float theta);
Vector2F64 vector2f64_rotation(Vector2F64* vector, double theta);
Vector3F32 vector3f32_rotation_x(Vector3F32* vector, float theta);
Vector3F32 vector3f32_rotation_y(Vector3F32* vector, float theta);
Vector3F32 vector3f32_rotation_z(Vector3F32* vector, float theta);
Vector3F64 vector3f64_rotation_x(Vector3F64* vector, double theta);
Vector3F64 vector3f64_rotation_y(Vector3F64* vector, double theta);
Vector3F64 vector3f64_rotation_z(Vector3F64* vector, double theta);
// Scale 'Multiply By Value'
Vector2F32 vector2f32_scale(Vector2F32* vector, float scale);
Vector2F64 vector2f64_scale(Vector2F64* vector, double scale);
Vector3F32 vector3f32_scale(Vector3F32* vector, float scale);
Vector3F64 vector3f64_scale(Vector3F64* vector, double scale);
Vector4F32 vector4f32_scale(Vector4F32* vector, float scale);
Vector4F64 vector4f64_scale(Vector4F64* vector, double scale);
// Subtract Operator
Vector2F32 vector2f32_subtract(Vector2F32* vectorA, Vector2F32* vectorB);
Vector2F64 vector2f64_subtract(Vector2F64* vectorA, Vector2F64* vectorB);
Vector3F32 vector3f32_subtract(Vector3F32* vectorA, Vector3F32* vectorB);
Vector3F64 vector3f64_subtract(Vector3F64* vectorA, Vector3F64* vectorB);
Vector4F32 vector4f32_subtract(Vector4F32* vectorA, Vector4F32* vectorB);
Vector4F64 vector4f64_subtract(Vector4F64* vectorA, Vector4F64* vectorB);

#endif
