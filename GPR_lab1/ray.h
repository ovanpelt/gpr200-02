//Author: Olivia Van Pelt
//ray.h: the class that allows vec3s acts as rays within the world

//Sources:
//  https://raytracing.github.io/books/RayTracingInOneWeekend.html

#ifndef RAY_H
#define RAY_H

#include "vec3.h"

//the 'light vectors' that make the scene have color and depth
class ray {
public:
    ray() {}
    ray(const point3& origin, const vec3& direction)
        : orig(origin), dir(direction)
    {}

    point3 origin() const { return orig; }
    vec3 direction() const { return dir; }

    point3 at(double t) const {
        return orig + t * dir;
    }

public:
    point3 orig;
    vec3 dir;
};

#endif