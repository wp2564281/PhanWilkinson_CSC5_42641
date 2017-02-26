/* 
  File:   main.cpp
  Author: Wilkinson Phan
  Created on February 26, 2017, 3:01 PM
  Purpose:  Modify PracProb2 by changing the multiplication "*"
 *          to a divide "/", then when asked for number of peas
 *          in a pod input "0" to notice run-time error, because 
 *          of dividing by zero. 
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
    int number_of_pods, peas_per_pod, total_peas;
    
    //Input values
    cout << "Hello\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    //Process by mapping inputs to outputs
    total_peas = number_of_pods/peas_per_pod;
    
    //Output values
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    cout << "Good-bye\n";
    
    //Exit stage right!
    return 0;
}