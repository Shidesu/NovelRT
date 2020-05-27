// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root for more information.

#ifndef NOVELRT_MATHS_GEOVECTOR2F_H
#define NOVELRT_MATHS_GEOVECTOR2F_H

#ifdef __cplusplus
extern "C" {
#endif
  typedef void GeoVector2F_t;

  GeoVector2F_t* GeoVector2F_create(float x, float y);
  GeoVector2F_t* GeoVector2F_uniform(float value);
  GeoVector2F_t* GeoVector2F_zero();
  GeoVector2F_t* GeoVector2F_one();
  float GeoVector2F_getX(GeoVector2F_t* gv);
  void GeoVector2F_setX(GeoVector2F_t* gv, float value);
  float GeoVector2F_getY(GeoVector2F_t* gv);
  void GeoVector2F_setY(GeoVector2F_t* gv, float value);
  void GeoVector2F_rotateToAngleAroundPoint(GeoVector2F_t* vector, float angleRotationValue, GeoVector2F_t* point) noexcept;
  bool GeoVector2F_epsilonEquals(GeoVector2F_t* vector, GeoVector2F_t* other, GeoVector2F_t* epsilonValue) noexcept;
  GeoVector2F_t* GeoVector2F_getNormalised(GeoVector2F_t* gv);
  float GeoVector2F_getLength(GeoVector2F_t* gv);
  float GeoVector2F_getMagnitude(GeoVector2F_t* gv);
  bool GeoVector2F_equal(const GeoVector2F_t* first, const GeoVector2F_t* other);
  bool GeoVector2F_notEqual(const GeoVector2F_t* first, const GeoVector2F_t* other);
  bool GeoVector2F_lessThan(const GeoVector2F_t* first, const GeoVector2F_t* other);
  bool GeoVector2F_lessThanOrEqualTo(const GeoVector2F_t* first, const GeoVector2F_t* other);
  bool GeoVector2F_greaterThan(const GeoVector2F_t* first, const GeoVector2F_t* other);
  bool GeoVector2F_greaterThanOrEqualTo(const GeoVector2F_t* first, const GeoVector2F_t* other);
  GeoVector2F_t* GeoVector2F_addVector(GeoVector2F_t* first, const GeoVector2F_t* other);
  GeoVector2F_t* GeoVector2F_subtractVector(GeoVector2F_t* first, const GeoVector2F_t* other);
  GeoVector2F_t* GeoVector2F_multiplyVector(GeoVector2F_t* first, const GeoVector2F_t* other);
  GeoVector2F_t* GeoVector2F_divideVector(GeoVector2F_t* first, const GeoVector2F_t* other);
  GeoVector2F_t* GeoVector2F_addFloat(GeoVector2F_t* vector, float value);
  GeoVector2F_t* GeoVector2F_subtractFloat(GeoVector2F_t* vector, float value);
  GeoVector2F_t* GeoVector2F_multiplyFloat(GeoVector2F_t* vector, float value);
  GeoVector2F_t* GeoVector2F_divideFloat(GeoVector2F_t* vector, float value);
  GeoVector2F_t* GeoVector2F_addIntoVector(GeoVector2F_t* first, const GeoVector2F_t* other);
  GeoVector2F_t* GeoVector2F_subtractFromVector(GeoVector2F_t* first, const GeoVector2F_t* other);
  GeoVector2F_t* GeoVector2F_multiplyIntoVector(GeoVector2F_t* first, const GeoVector2F_t* other);
  GeoVector2F_t* GeoVector2F_divideIntoVector(GeoVector2F_t* first, const GeoVector2F_t* other);
  GeoVector2F_t* GeoVector2F_addFloatIntoVector(GeoVector2F_t* vector, float value);
  GeoVector2F_t* GeoVector2F_subFloatFromVector(GeoVector2F_t* vector, float value);
  GeoVector2F_t* GeoVector2F_multiplyFloatIntoVector(GeoVector2F_t* vector, float value);
  GeoVector2F_t* GeoVector2F_divideFloatIntoVector(GeoVector2F_t* vector, float value);
  GeoVector2F_t* GeoVector2F_multiplyFloatInverse(float lhs, GeoVector2F_t* rhs);

#ifdef __cplusplus
}
#endif

#endif //NOVELRT_MATHS_GEOVECTOR2F_H