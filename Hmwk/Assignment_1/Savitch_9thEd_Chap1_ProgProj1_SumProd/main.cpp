/* 
  File:   main.cpp
  Author: Wilkinson Phan
  Created on February 28, 2017, 2:01 PM
  Purpose:  To calculate the sum and product of two integers.
 */

//System Libraries
#include <iostream>
#include <cstdlib>  //The library that contains the RNG
#include <ctime>    //The library used to seed the RNG
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Initialize the RNG with time
    srand(time(0));
    
    //Declare Variables
    int rn1, rn2, sum, prod;
    
    //Initialize variables
    rn1=rand()%100+1;   //randomly generates a number from 1-100
    rn2=rand()%100+1;   //randomly generates a number from 1-100
    
    //Input values
    
    //Process by mapping inputs to outputs
    sum=rn1+rn2;
    prod=rn1*rn2;
    
    //Output values
    cout << "This program generates the sum and\n";
    cout << "product of two random integers\n";
    cout << "from 1 - 100.\n" <<endl;
    cout << "The sum of ";
    cout << rn1;
    cout << " + ";
    cout << rn2;
    cout << " = ";
    cout << sum <<endl;
    cout << "The product of ";
    cout << rn1;
    cout << " x ";
    cout << rn2;
    cout << " = ";
    cout << prod <<endl;
    
    //Exit stage right!
    return 0;
}