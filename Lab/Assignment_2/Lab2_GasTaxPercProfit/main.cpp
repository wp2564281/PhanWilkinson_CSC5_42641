/* 
  File:   main.cpp
  Author: Wilkinson Phan
  Created on February 28, 2017, 6:51 PM
  Purpose:  To calculate the percentage Gas Tax on a gallon of gas
 *          and the percentage profit made from a gallon of gas.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERC=100.0f;

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float stateTax=0.39f, fedTax=0.184f, cptrTax=0.1f, salesTax=0.08f,
            gasProf=0.07f;
    float gasPrice, orgPrice, caSalesTax, percTax, percProf;
    
    //Input values
    cout << "Press enter after inputing a value.\n"<<endl;
    cout << "How much $'s/gallon do you pay at the gas station?\n";
    cout << "(i.e. 3.33)\n";
    cin >> gasPrice;
    
    //Process by mapping inputs to outputs
    orgPrice = (gasPrice-stateTax-fedTax-cptrTax)/(1+salesTax);
    caSalesTax = salesTax*orgPrice;
    percProf = (gasProf/orgPrice)*PERC;
    percTax = ((orgPrice*salesTax+stateTax+fedTax+cptrTax)/orgPrice)*PERC;
    
    
    //Output values
    cout << "Therefore when you spend $"<<gasPrice<<"/gallon on gas:\n";
    cout << "California excise tax/gallon = $"<<stateTax<<endl;
    cout << "Federal excise tax/gallon    = $"<<fedTax<<endl;
    cout << "Cap and Trade tax/gallon     = $"<<cptrTax<<endl;
    cout << "California sales tax/gallon  = $"<<caSalesTax<<endl;
    cout << "Original price/gallon        = $"<<orgPrice<<endl;
    cout << "Oil company profit/gallon    = "<<percProf<<"%"<<endl;
    cout << "Total percentage tax/gallon  = "<<percTax<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}