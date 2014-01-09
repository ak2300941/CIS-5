/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 8, 2014, 7:29 AM
 * Gaddis Prob 6 Chap 2
 * Calculate Employee's pay
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float payAmount, payPeriods, annualPay;
    //Amount of Pay in a pay period
    payAmount=1700;
    //Number of Pay Periods in a Year
    payPeriods=26;
    //Calculate the Total pay in a year
    annualPay=payAmount*payPeriods;
    //Display Total Amount of Pay per Year
    cout<<"The Total Pay per Year is "<<annualPay<<endl;
    //Exit Stage Right
    return 0;
}

