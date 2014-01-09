/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 7, 2014, 4:41 PM
 * Gaddis Prob 2 Chap 2
 * Find 62% of 4.6million
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float comp=4.6e6, ecsale;
    //Calculate 62% of total sales
    ecsale=comp*6.2e-1;
    //Display East Coast Sale Division's sales
    cout<<"East Coast Sales is $"<<ecsale<<endl;
    //Exit Stage Right
    return 0;
            
}

