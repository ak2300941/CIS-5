/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 8, 2014, 10:59 AM
 * Gaddis Prob 11 Chap 2
 * Finding Distance from Number of gallons and Miles Per Gallon
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float car,town,high,distt,dish;
    //Car has 20 gallon of gas, averages 21.5mpg in town, 26.8mpg on the highway
    car=20, town=21.5, high=26.8;
    //Calculate distance traveled on one tank of gas in town and highway
    distt=car*town;
    dish=car*high;
    //Display Result of Distance of the town, and highway
    cout<<"Distance traveled in Town "<<distt<<" miles"<<endl;
    cout<<"Distance traveled in Highway "<<dish<<" miles"<<endl;
    //Exit Stage Right
    return 0;
}

