/* 
  File:   main.cpp
  Author: Wilkinson Phan
  Created on February 26, 2017, 5:45 PM
  Purpose:  To calculate the total length of fencing needed 
 *          to enclose a rectangular area, by using width 
 *          and height.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int width, height, totalLength, areaRect;
    
    //Input values
    cout << "Press return after entering a number.\n";
    cout << "Enter the width of the rectangle in ft:\n";
    cin >> width;
    cout << "Enter the height of the rectangle in ft:\n";
    cin >> height;
    
    //Process by mapping inputs to outputs
    totalLength = (2*width)+(2*height);
    areaRect = width*height;
    
    //Output values
    cout << "If you have a rectangle with \n";
    cout << "a width of ";
    cout << width;
    cout << " ft long\n";
    cout << "and a height of ";
    cout << height;
    cout << " ft tall,\n";
    cout << "then the total length of\n";
    cout << "fence needed to enclose a\n";
    cout << "rectangular area of ";
    cout << areaRect;
    cout << " ft^2\n";
    cout << "is ";
    cout << totalLength;
    cout << " ft in all.\n";
    
    //Exit stage right!
    return 0;
}