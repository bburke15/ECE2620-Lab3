//Brendan Burke
//ECE 2620
//Lab 3
#include "circle.cc"
#include <iostream>
using namespace std;

void menu() {
	cout << "(1) Compute the radii of the two circles" << endl;
	cout << "(2) Compute the circumferences of the two cirlces" << endl;
	cout << "(3) Compute the areas of the two circles" << endl;
	cout << "(4) Enter new x1, y1, x2, y2 values for Object 1" << endl;
	cout << "(5) Enter new x1, y1, x2, y2 values for Object 2" << endl;
	cout << "(6) Exit" << endl;
} //Menu function outputs text for the six options to the screen

int main()
{
	int ix1, iy1, ix2, iy2; //declare variables
	double dx1, dy1, dx2, dy2;
	circle<int> my_obj1(1,3); //declare object my_obj1 of class circle with integer data members
	circle<float> my_obj2(-1.5,-6.65,-0.5,10.0); //declare object my_obj2 of class circle with floating point data members
	int option; //declare variable
	menu(); //user is prompted with menu options printed to screen
	cout << "Select an operation: ";
	cin >> option; //user inputs an option
while(option != 6){

	switch (option) {

	case 1: //if option 1,then compute radii of two circles
	cout << "The radius of the circle for object 1 is " << my_obj1.radius() << endl;
	cout << "The radius of the circle for object 2 is " << my_obj2.radius() << endl;
		break;

	case 2: //if option 2,then compute circumferences of two circles
	cout << "The circumference of the circle for object 1 is " << my_obj1.circumference() << endl;
	cout << "The circumference of the circle for object 2 is " << my_obj2.circumference() << endl;
		break;

	case 3: //if option 3,then compute areas of two circles
	cout << "The area of the circle for object 1 is " << my_obj1.area() << endl;
	cout << "The area of the circle for object 2 is " << my_obj2.area() << endl;
		break;

	case 4: //if option 4, then enter new x1,y1,x2,y2 values for object 1
	cout << "Please enter integer coordinates for the center of the circle: " << endl;
	cout << "x= "; //when prompted, user inputs x and y values for coordinates
	cin >> ix1;
	cout << "y= ";
	cin >> iy1;
	cout << "Please enter integer coordinates for another point on the circle: " << endl;
	cout << "x= ";
	cin >> ix2;
	cout << "y= ";
	cin >> iy2;
	my_obj1.populate_classobj(ix1,iy1,ix2,iy2); /*initialize data members of class
	object with coordinate values*/
		break;

	case 5: //if option 5, then enter new x1,y1,x2,y2 for object 2
	cout << "Please enter floating point coordinates for the center of the circle: " << endl;
	cout << "x= "; //when prompted, user inputs x and y values for coordinates
	cin >> dx1;
	cout << "y= ";
	cin >> dy1;
	cout << "Please enter floating point coordinates for another point on the circle: " << endl;
	cout << "x= ";
	cin >> dx2;
	cout << "y= ";
	cin >> dy2;
	my_obj2.populate_classobj(dx1,dy1,dx2,dy2); /*initialize data members of class
	object with coordinate values*/
		break;

	case 6: //exit
		break;

	default: //try again with a valid numerical input
	cout << "Not Valid" << endl;
		break;
}
menu(); //print menu options again
cin >> option; //user inputs an option
}
	return 0;
}


