/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on April 4, 2017, 9:53 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float CNVPTOD=100.0f;//Pennies to dollars

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int salary,sumSlry=0;//Pennies are the units
    unsigned short dyLimit;//Limit the number of days
    
    //Input or initialize values Here
    sumSlry=salary=1;//1 penny
    
    //Input the number of days
    cout<<"This program calculates your double salary and pay daily"<<endl;
    cout<<"Input the number of days which are equal to 1 but limited to 31"<<endl;
    do{
        cin>>dyLimit;
    }while(dyLimit<1||dyLimit>31);
    
    //Output the heading
     cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day     $Salary      $Sum"<<endl;
    cout<<setw(3)<<1<<setw(11)<<salary/CNVPTOD<<setw(11)<<sumSlry/CNVPTOD<<endl;
    
    //Process/Calculations Here
    for(int day=2;day<=dyLimit;day++){
        salary*=2;
        sumSlry+=salary;
        cout<<setw(3)<<day<<setw(12)<<salary/CNVPTOD<<setw(12)<<sumSlry/CNVPTOD<<endl;
    }
    
    //Output Located Here

    //Exit
    return 0;
}

