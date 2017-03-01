/* 
  File:   main.cpp
  Author: Wilkinson Phan
  Created on February 28, 2017, 4:45 PM
  Purpose:  To calculate the distance traveled during free-fall
 *          using time.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float ACCEL=3.2e1f; //the constant acceleration given

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int time, dist;
    
    //Input values
    cout << "Press return after entering a number.\n"<<endl;
    cout << "To calculate how far an object would drop\n";
    cout << "in free fall, with a constant acceleration\n";
    cout << "of 32 ft/sec^2, input the length of time\n";
    cout << "the object falls for in seconds\n";
    cin >> time;
    
    //Process by mapping inputs to outputs
    dist=(ACCEL*time*time)/2;
    
    //Output values
    cout << "The distance traveled in "<<time;
    cout << " seconds of free fall is "<<dist<<" ft."<<endl;
    
    //Exit stage right!
    return 0;
}