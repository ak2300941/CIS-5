/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 7, 2014, 5:09 PM
 * Gaddis Prob 4 Chap 2
 * Compute the tax and tip of a $44.50 meal charge
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float mcharge, tax, tip, mcharet, total;
    //Meal Charge
    mcharge=4.45e1;
    //Calculate the tax
    tax=mcharge*6.75e-2;
    //Calculate the meal plus tax
    mcharet=tax+mcharge;
    //Calculate the Tip
    tip=mcharet*1.5e-1;
    //Calculate the Total Bill
    total=mcharge+tax+tip;
    //Display Meal Cost, Tax Amount Tip, and Total Bill
    cout<<"Meal Cost  $"<<mcharge<<endl;
    cout<<"Tax Amount $"<<tax<<endl;
    cout<<"Tip Amount $"<<tip<<endl;
    cout<<"Total Bill $"<<total<<endl;
    //Exit Stage Right
    return 0;
}

