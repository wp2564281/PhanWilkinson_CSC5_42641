/* 
  File:   main.cpp
  Author: Wilkinson Phan
  Created on February 28, 2017, 3:15 PM
  Purpose:  To calculate the user's total pocket change, in cents, 
 *          from quarters, dimes, and nickels. 
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
    int nQuarts, nDimes, nNickls, totCent;
    
    //Input values
    cout << "Press return after entering a number.\n"<<endl;
    cout << "To calculate your total pocket change:\n";
    cout << "First, input how many Quarters you have?\n";
    cin >> nQuarts;
    cout << "Next, how many Dimes do you have?\n";
    cin >> nDimes;
    cout << "Finally, how many Nickels do you have?\n";
    cin >> nNickls;
    
    //Process by mapping inputs to outputs
    totCent=(nQuarts*25)+(nDimes*10)+(nNickls*5);
    
    //Output values
    cout << "Therefore your pocket change totals "<<totCent<<" cents"<<endl;
    cout << "or more simply $"<<totCent/100.0f<<endl;
    
    //Exit stage right!
    return 0;
}