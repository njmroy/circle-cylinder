/* 
 * File:   functions.cpp
 * Author: Nicolas Roy
 */

#include "functions.h"

void displayCircle(Circle *myCircle){

    std::cout << myCircle->getRadius() << std::endl;
    std::cout << myCircle->getCircum() << std::endl;
    std::cout << myCircle->getArea() << std::endl;
    std::cout << std::endl;

}

void displayCylinder(Cylinder *myCylinder){

    std::cout << myCylinder->getRadius() << std::endl;
    std::cout << myCylinder->getHeight() << std::endl;
    std::cout << myCylinder->getVolume() << std::endl;
    std::cout << myCylinder->getArea() << std::endl;
    std::cout << std::endl;

}