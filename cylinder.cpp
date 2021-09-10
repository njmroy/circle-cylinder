/* 
 * File:   cylinder.cpp
 * Author: Nicolas Roy
 */

#include "cylinder.h"

Cylinder::Cylinder() {
    setRadius(MIN);
    setHeight(MIN);
}

Cylinder::Cylinder(double r, double h) {
    setRadius(r);
    setHeight(h);
}

Cylinder::~Cylinder(){

}

double Cylinder::getHeight () {
    return height;
}



double Cylinder::getArea() {
    return 2*PI*radius*(radius+height);
}

double Cylinder::getVolume() {
    return PI*radius*radius*height;
}

void Cylinder::setHeight(double h) {
    if (h > MIN) {
        height = h;
    } else { 
        height = MIN;
    }
}

void Cylinder::setRadius(double r){
    if (r > MIN ) {
        radius = r;
    }else {
        radius = MIN;
    }
}

