

/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on February 28, 2017, 12:17 AM
 * Purpose: To calculate a car's gas mileage
 */

//System Libraries
#include <iostream> //Imput - Output Library
using namespace std; //Namespace under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float galGass, //Gallons of gas the car can hold
          miles;   //Number of miles car can be driven on a full tank
    float mpg;     //The car's mileage
    
    //Initialize variables
    cout<<"What are the gallons of gas the car can hold?"<<endl;
    cin>>galGass;
    cout<<"How many miles can the car be driven on a full tank?"<<endl;
    cin>>miles;
    
    //Input data
    
    //Map inputs to outputs or process the data
    mpg=miles/galGass;
    
    //Output the transformed data
    cout<<"The car's mileage is "<<mpg<<" miles per gallon."<<endl;
    
    //Exit stage right!
    return 0;
}

