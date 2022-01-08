//
// Created by i on 12/20/2021.
//

#include "Ray.h"

Ray::Ray() = default;

Ray::Ray(const Point3D &origin, const Vector3D &direction): origin(origin), direction(direction) {}

const Point3D &Ray::getOrigin() const {
    return origin;
}

void Ray::setOrigin(const Point3D &origin) {
    Ray::origin = origin;
}

const Vector3D &Ray::getDirection() const {
    return direction;
}

void Ray::setDirection(const Vector3D &direction) {
    Ray::direction = direction;
}

Point3D Ray::at(double t) const {
    return origin + t * direction;
};
