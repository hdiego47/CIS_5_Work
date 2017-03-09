

/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on March 9, 2017, 11:56 AM
 * Purpose: To find the amount of income generated from ticket sales
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
    unsigned short classA=15,           //cost of each ticket in dollars
                   classB=12,
                   classC=9;
    unsigned short soldA, soldB, soldC; //how many of each tickets were sold
    unsigned short ttlA, ttlB, ttlC, ttlSale;    //total amount of money made
                                                 //for each ticket and the total
                                                 //income generated in dollars
    
    //Initialize variables
    
    //Input data
    cout<<"Please enter the amount of tickets sold for each class"<<endl;
    cout<<"in this order Class A, Class B, Class C."<<endl;
    cin>>soldA>>soldB>>soldC;
    
    //Map inputs to outputs or process the data
    ttlA=classA*soldA;
    ttlB=classB*soldB;
    ttlC=classC*soldC;
    ttlSale=ttlA+ttlB+ttlC;
    
    //Output the transformed data
    cout<<"The total amount of income generated from ticket sales was $"<<
            ttlSale<<" dollars"<<endl;
    
    //Exit stage right!
    return 0;
}

