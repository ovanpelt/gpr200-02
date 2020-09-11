//Author: Olivia Van Pelt
//hittable.h: contains the struct and abstract parent for the hittable objects 
//that will be added to the world

//Sources:
//  https://raytracing.github.io/books/RayTracingInOneWeekend.html

#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.h"


//struct used to determine what/how things are hit by vectors
struct hit_record {
    point3 p;
    vec3 normal;
    double t;
    bool front_face;

    inline void set_face_normal(const ray& r, const vec3& outward_normal) {
        front_face = dot(r.direction(), outward_normal) < 0;
        normal = front_face ? outward_normal : -outward_normal;
    }
};

class hittable {
public:
    virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const = 0;
};

#endif