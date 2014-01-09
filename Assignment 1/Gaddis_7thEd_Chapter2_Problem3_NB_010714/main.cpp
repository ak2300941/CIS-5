/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 7, 2014, 5:31 PM
 * Gaddis Prob 3 Chap 2
 * Find the Sales Tax of the Price $52
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float cost=52,stax,ctax,atax,attax;//Cost is $52
    //State Sales Tax 4%, County Sales Tax 2%
    stax=4e-2;
    ctax=2e-2;
    //Calculate Total Tax
    atax=stax+ctax;
    //Calculate Sales Tax of the Price $52
    attax=cost*atax;
    //Display Sales Tax on the cost of $52
    cout<<"Sales Tax for Price of $52 is $"<<attax<<endl;
    //Exit Stage Right        
    return 0;
}

