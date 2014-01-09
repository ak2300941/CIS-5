/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 8, 2014, 10:00 AM
 * Gaddis Prob 8 Chap 2
 * 5 Items are purchased find the subtotal, sales tax, and the total.
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float item1=12.95, item2=24.95, item3=6.95, item4=14.95, item5=3.95,
            subtotal, tax, total;
    //Calculate the subtotal
    subtotal=item1+item2+item3+item4+item5;
    //Find the Sales Tax
    tax=subtotal*.06;
    //Total Price
    total=subtotal+tax;
    //Display Item Price, Subtotal of sale, Sales Tax, and Total
    cout<<"Item #1 = "<<item1<<endl;
    cout<<"Item #2 = "<<item2<<endl;
    cout<<"Item #3 = "<<item3<<endl;
    cout<<"Item #4 = "<<item4<<endl;
    cout<<"Item #5 = "<<item5<<endl;
    cout<<"Subtotal is "<<subtotal<<endl;
    cout<<"Sales Tax is "<<tax<<endl;
    cout<< "Total Price is "<<total<<endl;
    //Exit Stage Right
    
    return 0;
}

