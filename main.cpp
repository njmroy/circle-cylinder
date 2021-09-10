/*
 * This is a simple application to demonstrate classes and objects in C++.
 */

/* 
 * File:   main.cpp
 * 
 * Author: Nicolas Roy
 */

#include "main.h"

int main(int argc, char** argv) {
    //Create a circle with no parameters 
    Circle myCircle1;

    //Create a circle with radius
    Circle myCircle2(5.32);

    //Create a Cylinder object with no parameters
    Cylinder myCylinder1;

    //Create a Cylinder object with radius, height
    Cylinder myCylinder2(5.32, 4.8);

    //Pass by reference
    displayCircle(&myCircle1);
    displayCircle(&myCircle2);

    displayCylinder(&myCylinder1);
    displayCylinder(&myCylinder2);


    return 0;
}