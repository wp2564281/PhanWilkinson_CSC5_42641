/* 
  File:   main.cpp
  Author: Wilkinson Phan
  Created on February 28, 2017, 5:21 PM
  Purpose:  To output a large block letter "C", with a character 
 *          input from the user.
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
    char x; 
    
    //Input values
    cout << "Press return after entering a letter.\n"<<endl;
    cout << "In order to create a large C\n";
    cout << "please input a letter\n";
    cin >> x;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << endl<< "A large C using the letter ";
    cout << x<<endl<<endl;
    cout << "           "<<x<<" "<<x<<" "<<x<<endl;
    cout << "         "<<x<<"       "<<x<<endl;
    cout << "        "<<x<<endl;
    cout << "        "<<x<<endl;
    cout << "        "<<x<<endl;
    cout << "        "<<x<<endl;
    cout << "        "<<x<<endl;
    cout << "         "<<x<<"       "<<x<<endl;
    cout << "           "<<x<<" "<<x<<" "<<x<<endl;
    
    //Exit stage right!
    return 0;
}