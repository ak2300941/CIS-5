/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 7, 2014, 5:34 PM
 * Gaddis Prob 5 Chap 2
 * Find the average of 5 values
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float var1,var2,var3,var4,var5,sum,avg;
    //Storing 5 Variables
    var1=28;
    var2=32;
    var3=37;
    var4=24;
    var5=33;
    //Finding Sum of all 5 Variables
    sum=var1+var2+var3+var4+var5;
    //Getting the Average of the sum
    avg=sum/5;
    //Display Average
    cout<<"Average is "<<avg<<endl;
    //Exit Stage Right
    return 0;
}

