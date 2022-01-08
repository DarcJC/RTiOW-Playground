//
// Created by i on 12/17/2021.
//

#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D(): x(0), y(0), z(0) {}

Vector3D::Vector3D(double x, double y, double z): x(x), y(y), z(z) {}

Vector3D Vector3D::operator-() const { return {-x, -y, -z}; }

double Vector3D::operator[](int i) const {
    if (i == 0) return x;
    if (i == 1) return y;
    return z;
}

double &Vector3D::operator[](int i) {
    if (i == 0) return x;
    if (i == 1) return y;
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

std::ostream &operator<<(std::ostream &out, const Vector3D &v) {
    return out << v.x << ' ' << v.y << ' ' << v.z;
}

Vector3D operator+(const Vector3D &u, const Vector3D &v) {
    return {u.x + v.x, u.y + v.y, u.z + v.z};
}

Vector3D operator-(const Vector3D &u, const Vector3D &v) {
    return {u.x - v.x, u.y - v.y, u.z - v.z};
}

Vector3D operator*(const Vector3D &u, const Vector3D &v) {
    return {u.x * v.x, u.y * v.y, u.z * v.z};
}

Vector3D operator*(double t, const Vector3D &v) {
    return { t * v.x, t * v.y, t * v.z };
}

Vector3D operator*(const Vector3D &v, double t) {
    return t * v;
}

Vector3D operator/(const Vector3D &v, double t) {
    return (1 / t) * v;
}

double dot(const Vector3D &u, const Vector3D &v) {
    return u.x * v.x + u.y * v.y + u.z * v.z;
}

Vector3D cross(const Vector3D &u, const Vector3D &v) {
    return {
        u.y * v.z - u.z * v.y,
        u.z * v.x - u.x * v.z,
        u.x * v.y - u.y * v.x
    };
}

Vector3D unit(const Vector3D &v) {
    return v / v.length();
}

void write_color(std::ostream &out, Color& color) {
    out << static_cast<int>(255.999 * color.x) << ' '
        << static_cast<int>(255.999 * color.y) << ' '
        << static_cast<int>(255.999 * color.z) << '\n';
}
