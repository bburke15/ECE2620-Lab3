#include "circle.h"
#define PI (4*atan(1)) //Defines an exact value for Pi
#include <cmath>
#include <iostream>
using namespace std;

/*member functions distance, radius, circumference, and area must return
 * double precision floating point values even when x1,y1,x2,y2 are integers*/

template<class T> //default class constructor with default parameters (0) initializes class vars x1,y1,x2,y2
circle<T>::circle(T x_1, T y_1, T x_2, T y_2) {
   x1 = x_1;
   y1 = y_1;
   x2 = x_2;
   y2 = y_2;
}

/*member functions distance,radius, circumference, and area are written
 using templates so that they can work with any numeric data type*/

template<class T>
double circle<T>::distance() {	//circle member function computes distance
   double dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
return dist;
}

template<class T>
double circle<T>::radius() { //circle member function computes radius from distance
	return distance();
}

template<class T>
double circle<T>::circumference() { //circle member function computes circumference	
	return (radius())*PI*2;;
}

template<class T>
double circle<T>::area() { //circle member function computes area
	return PI*radius()*radius();
}

template<class T>
void circle<T>::populate_classobj(T x, T y, T x_new, T y_new) {
/*circle member function takes coordinates of two points as input parameters
and initializes data members of class object with these values */
	x1 = x;
	y1 = y;
	x2 = x_new;
	y2 = y_new;
}
