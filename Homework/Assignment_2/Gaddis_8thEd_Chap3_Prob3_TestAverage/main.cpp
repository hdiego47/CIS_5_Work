

/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on March 9, 2017, 12:28 PM
 * Purpose: To find out the test average
 */

//System Libraries
#include <iostream> //Imput - Output Library
#include <iomanip>
using namespace std; //Namespace under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float test1,
          test2,
          test3,
          test4,
          test5,
          tstAvrg;
    
    //Initialize variables
    
    //Input data
    cout<<"Please enter the scores for five of your tests"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    
    //Map inputs to outputs or process the data
    tstAvrg=(test1+test2+test3+test4+test5)/5;
    
    //Output the transformed data
    cout<<"The average for the test is "<<setprecision(3)<<tstAvrg<<endl;
    
    //Exit stage right!
    return 0;
}

