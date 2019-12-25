// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root for more information.

#ifndef NOVELRT_GRAPHICS_CAMERAVIEWCHANGEDEVENTARGS_H
#define NOVELRT_GRAPHICS_CAMERAVIEWCHANGEDEVENTARGS_H
#ifndef NOVELRT_H
#error Please do not include this directly. Use the centralised header (NovelRT.h) instead!
#endif

namespace NovelRT::Graphics {
  struct CameraViewChangedEventArgs {
  public:
    const Maths::GeoMatrix4<float> cameraMatrix;
    CameraViewChangedEventArgs(const Maths::GeoMatrix4<float>& newCameraMatrix) : cameraMatrix(newCameraMatrix) {};
  };
}

#endif //NOVELRT_GRAPHICS_CAMERAVIEWCHANGEDEVENTARGS_H
