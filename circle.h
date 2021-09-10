/* 
 * File:   circle.h
 * Author: Nicolas Roy
 */

#ifndef CLASSES_CIRCLE_H
#define CLASSES_CIRCLE_H

#define MIN 0
#define PI 3.14159265

class Circle {

    public: 
    // Constructors, one with no parameters and one with double 
    Circle();
    Circle(double);

    //Getters 
    double getRadius();
    double getHeight();
    double getCircum();
    double getArea();

    //Setters 
    void setRadius(double);
    void setHeight(double);

    //Protected variables for circle definition
    protected:
        double radius;
};




#endif //CLASSES_CIRCLE_H