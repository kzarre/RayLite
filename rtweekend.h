#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <memory>
#include <random>

// C++ STD usings

using std::make_shared;
using std::shared_ptr;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double random_double() {
    thread_local static std::mt19937 generator(
        std::random_device{}()
    );

    thread_local static std::uniform_real_distribution<double> distribution(0.0, 1.0);
    // return std::rand() / (RAND_MAX + 1.0);
    return distribution(generator);
}

inline double random_double(double min, double max) {
    return min + (max-min)*random_double(); 
}

// Common Headers

#include "color.h"
#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif