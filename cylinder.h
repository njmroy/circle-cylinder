/* 
 * File:   cylinder.h
 * Author: Nicolas Roy
 */

#ifndef CLASSES_CYLINDER_H
#define CLASSES_CYLINDER_H

#include "circle.h"

class Cylinder : public Circle {
    public:
    Cylinder();
    Cylinder(double,double);
    ~Cylinder();

    //Getters 
    double getHeight();
    double getArea();
    double getVolume();

    //Setters
    void setHeight(double);
    void setRadius(double);

    private:
    double height;
    double radius;
};

#endif //CLASSES_CYLINDER_H