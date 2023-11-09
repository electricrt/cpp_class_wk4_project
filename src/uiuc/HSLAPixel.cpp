/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"
using namespace std;

namespace uiuc {
    HSLAPixel::HSLAPixel() {
        a = 1.0;
        l = 1.0;
        s = 1.0;
        h = 1.0;
    }

    HSLAPixel::HSLAPixel(double hue, double saturation, double luminance) {
        a = 1.0;
        l = luminance;
        s = saturation;
        h = hue;
    }

    HSLAPixel::HSLAPixel(double hue, double saturation, double luminance, double alpha) {
        a = alpha;
        l = luminance;
        s = saturation;
        h = hue;
    }
}
