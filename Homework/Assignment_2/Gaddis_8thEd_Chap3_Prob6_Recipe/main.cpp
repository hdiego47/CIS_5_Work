

/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on March 9, 2017, 11:26 AM
 * Purpose: To adjust the recipe for the number of cookies you want to make
 */

//System Libraries
#include <iostream> //Imput - Output Library
using namespace std; //Namespace under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float sugar=1.5f,  //sugar in cups
          butter=1.0f, //butter in cups
          flour=2.75f, //flour in cups
          r;           //ratio of cookies
    float nCookie;     //number of cookies
    float sgrNeed,     //sugar needed in cups
          btrNeed,     //butter needed in cups
          flrNeed;     //flour needed in cups
    
    //Input data
    cout<<"Please enter the number of cookies you want to make: "<<endl;
    cin>>nCookie;
            
    //Map inputs to outputs or process the data
    r=nCookie/48;
    sgrNeed=sugar*r;
    btrNeed=butter*r;
    flrNeed=flour*r;
    
    
    //Output the transformed data
    cout<<"The amount of sugar needed is "<<sgrNeed<<" cups"<<endl;
    cout<<"The amount of butter needed is "<<btrNeed<<" cups"<<endl;
    cout<<"The amount of flour needed is "<<flrNeed<<" cups"<<endl;
    
    //Exit stage right!
    return 0;
}

