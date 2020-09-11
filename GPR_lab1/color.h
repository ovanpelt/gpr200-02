//Author: Olivia Van Pelt
//color.h: writes out the color of a pixel to the console if
// a .ppm file is not available

//Sources:
//  https://raytracing.github.io/books/RayTracingInOneWeekend.html

#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

void write_color(std::ostream& out, color pixel_color) {
    // Write the translated [0,255] value of each color component.
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color.z()) << '\n';
}

#endif