/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 8, 2014, 10:38 AM
 * Gaddis Prob 10 Chap 2
 * Find the Miles Per Gallon
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float car=12, travel=350, mpg;//The car moves 350miles in 12 gallons of gas
    //Calculate Miles Per Gallon
    mpg=travel/car;
    //Display Result of Miles Per Gallon
    cout<<"Miles Per Gallon is "<<mpg<<endl;
    //Exit Stage Right
    return 0;
}

