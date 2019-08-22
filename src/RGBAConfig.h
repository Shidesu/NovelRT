//
// Created by matth on 16/12/2018.
//

#ifndef NOVELRT_RGBACONFIG_H
#define NOVELRT_RGBACONFIG_H

namespace NovelRT {
class RGBAConfig {
public:
  RGBAConfig(const int r, const int g, const int b, const int a);

  int getR() const;

  void setR(const int value);

  int getG() const;

  void setG(const int value);

  int getB() const;

  void setB(const int value);

  int getA() const;

  void setA(const int value);

private:
  int _r;
  int _g;
  int _b;
  int _a;

};
}

#endif //NOVELRT_RGBACONFIG_H