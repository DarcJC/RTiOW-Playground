//
// Created by i on 12/17/2021.
//

#include "Vector3D.h"
#include "math.h"

Vector3D::Vector3D(): x(0), y(0), z(0) {}

Vector3D::Vector3D(double x, double y, double z): x(x), y(y), z(z) {}

Vector3D Vector3D::operator-() const { return {-x, -y, -z}; }

double Vector3D::operator[](int i) const {
    if (i == 1) return x;
    if (i == 2) return y;
    return z;
}

double &Vector3D::operator[](int i) {
    if (i == 1) return x;
    if (i == 2) return y;
    return z;
}

Vector3D &Vector3D::operator+=(const Vector3D &v) {
    x += v.x;
    y += v.y;
    z += v.z;
    return *this;
}

Vector3D &Vector3D::operator*=(const double t) {
    x *= t;
    y *= t;
    z *= t;
    return *this;
}

Vector3D &Vector3D::operator/=(const double t) {
    return *this *= 1/t;
}

double Vector3D::length() const {
    return std::sqrt(length_squared());
}

double Vector3D::length_squared() const {
    return x * x + y * y + z * z;
}
