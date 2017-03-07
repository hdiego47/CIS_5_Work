

/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on March 2, 2017, 11:52 AM
 * Purpose: Calculate Loan Parameters
 */

//System Libraries
#include <iostream> //Imput - Output Library
#include <iomanip>  
#include <cmath>
using namespace std; //Namespace under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;//Percent conversion
const float CNVYRMN=12.0f; //Year to Month conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float consRec,//What the consumer receives $'s
          mthPay; //Monthly Payment $'s
    int   intRate,//Yearly percentage interest Rate
          nMonths;//Number of months in the loan
    
 
    //Input data
    cout<<"This program calculates Loan Parameters"<<endl;
    cout<<"Input the loan amount to be received $";
    cin>>consRec;
    cout<<"Number of months in the loan ";
    cin>>nMonths;
    cout<<"Interest rate % = ";
    cin>>intRate;
    
    //Map inputs to outputs or process the data
    float i=intRate/CNVYRMN/PERCENT;//Intermediate Calculation of interest
    float temp=pow((1+i),nMonths);  //Intermediate calculation of (1+i)^n
    mthPay=i*temp*consRec/(temp-1); //Amortized monthly payment
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received = $"<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Monthly Payment = $"<<mthPay<<endl;
    
    //Exit stage right!
    return 0;
}

