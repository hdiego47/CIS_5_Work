

/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on March 14, 2017, 11:31 AM
 * Purpose: Time calculator/converter
 */

//System Libraries
#include <iostream> //Imput - Output Library
using namespace std; //Namespace under which system libraries exist

//User Libraries

//Global Constants
const int MINUTE=60;     //How many seconds in a minute
const int HOUR=60*MINUTE;//How many seconds in a hour
const int DAY=24*HOUR;   //How many seconds in a day
const int WEEK=7*DAY;    //How many seconds in a week
const int YEAR=52*WEEK;  //How many seconds in a year

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int nSecs;//Number of seconds to convert
    int nYrs,nMnths,nWks,nDys,nHrs,nMin;
    
    //Initialize variables
    
    //Input data
    cout<<"This program converts seconds to Years/Months/Weeks/Days/Hours"<<endl;
    cout<<"Input the number of seconds for the conversion/equivalence"<<endl;
    cin>>nSecs;
    
    //Map inputs to outputs or process the data
    nYrs=nSecs/YEAR;            //Number of years
    cout<<nYrs<<" Years (";
    nSecs-=nYrs*YEAR;           //Subtract the yearly seconds from remaining
                                //Number of weeks
    nWks=nSecs/WEEK;            
    cout<<nWks<<" Weeks or ";
    nMnths=nWks*3/13;           //Convert number of weeks to months
    cout<<nMnths<<" Months) ";
    nSecs-=nWks*WEEK;           //Subtract the weekly seconds from remaining
                                //Number of days
    nDys=nSecs/DAY;             
    cout<<nDys<<" Days ";
    nSecs-=nDys*DAY;            //Subtract the daily seconds from remaining
                                //Number of hours
    nHrs=nSecs/HOUR;            
    cout<<nHrs<<" Hours ";
    nSecs-=nHrs*HOUR;           //Subtract the hourly seconds from remaining
                                //Number of minutes
    nMin=nSecs/MINUTE;          
    cout<<nMin<<" Minutes ";
    
    nSecs-=nMin*MINUTE;         //Remaining number of seconds
    cout<<nSecs<<" Seconds ";
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

