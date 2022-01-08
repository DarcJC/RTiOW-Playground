//
// Created by i on 12/17/2021.
//

#ifndef RAYTRACINGINONEWEEKEND_VECTOR3D_H
#define RAYTRACINGINONEWEEKEND_VECTOR3D_H

#include <ostream>

class Vector3D {
public:
    Vector3D();
    Vector3D(double x, double y, double z);

    Vector3D operator-() const;
    double operator[](int i) const;
    double& operator[](int i);

    Vector3D& operator+=(const Vector3D &v);
    Vector3D& operator*=(double t);
    Vector3D& operator/=(double t);

    [[nodiscard]] double length() const;
    [[nodiscard]] double length_squared() const;

public:
    double x, y, z;
};

std::ostream& operator<<(std::ostream& out, const Vector3D& v);

Vector3D operator+(const Vector3D& v, const Vector3D& u);

Vector3D operator-(const Vector3D& u, const Vector3D& v);

Vector3D operator*(const Vector3D& u, const Vector3D& v);

Vector3D operator*(double t, const Vector3D& v);

Vector3D operator*(const Vector3D& v, double t);

Vector3D operator/(const Vector3D& v, double t);

double dot(const Vector3D& u, const Vector3D& v);

Vector3D cross(const Vector3D& u, const Vector3D& v);

Vector3D unit(const Vector3D& v);

using Point3D = Vector3D;

using Color = Vector3D;

void write_color(std::ostream& out, Color& color);

#endif //RAYTRACINGINONEWEEKEND_VECTOR3D_H
