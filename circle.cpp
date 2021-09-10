/* 
 * File:   circle.cpp
 * Author: Nicolas Roy
 */

#include "circle.h"

Circle::Circle() {
    setRadius(MIN);
}

Circle::Circle(double r) {
    setRadius(r);
}

//Circle::~Circle(){

//}

double Circle::getRadius(){ 
    return radius;
}

double Circle::getArea() {
    return radius*radius*PI;
}

double Circle::getCircum() {
    return 2*radius*PI;
}

void Circle::setRadius(double r) {
    if (r > MIN) {
        radius = r;
    } else {
        radius = MIN;
    }
}
