//Author: Olivia Van Pelt
//GPR_lab1.h: contains constants commant headers, usings
// and utility functions to keep the main code more consise


//Sources:
//  https://raytracing.github.io/books/RayTracingInOneWeekend.html

#ifndef GPR_LAB1_H
#define GPR_LAB1_H

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>


// Usings
using namespace std;

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants

const double infinity = numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

// Common Headers

#include "ray.h"
#include "vec3.h"

#endif