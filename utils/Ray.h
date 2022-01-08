//
// Created by i on 12/20/2021.
//

#ifndef RAYTRACINGINONEWEEKEND_RAY_H
#define RAYTRACINGINONEWEEKEND_RAY_H


#include "Vector3D.h"

class Ray {

private:
    Point3D origin;
    Vector3D direction;

public:

    [[nodiscard]] const Point3D &getOrigin() const;
    void setOrigin(const Point3D &origin);

    [[nodiscard]] const Vector3D &getDirection() const;
    void setDirection(const Vector3D &direction);

public:
    Ray();
    Ray(const Point3D& origin, const Vector3D& direction);

    [[nodiscard]] Point3D at(double t) const;
};


#endif //RAYTRACINGINONEWEEKEND_RAY_H
