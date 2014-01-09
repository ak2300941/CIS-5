/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 8, 2014, 7:35 AM
 * Gaddis Prob 7 Chap 2
 * Ocean Level rises 1.5mm per year,
 * Calculate the rise in 3 different years
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare  Variables
    float risem, year5 = 5, year7 = 7, year10 = 10, tyear5, tyear7, tyear10;
    //Ocean Rise 1.5mm per year
    risem=15e-1;
    //Calculate the ocean rise in sea level on the displayed year
    tyear5=risem*year5;
    tyear7=risem*year7;
    tyear10=risem*year10;
    //Display the Rise in Ocean Level in Year 5, 7, 10
    cout<<"Ocean level in Year 5 Increased  "<<tyear5<<"mm"<<endl;
    cout<<"Ocean level in Year 7 Increased  "<<tyear7<<"mm"<<endl;
    cout<<"Ocean level in Year 10 Increased "<<tyear10<<"mm"<<endl;
    //Exit Stage Right
    return 0;
}

