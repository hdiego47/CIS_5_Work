

/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on March 30, 2017, 10:35 AM
 * Purpose: Display the Ascii character set
 */

//System Libraries
#include <iostream> //Imput - Output Library
using namespace std; //Namespace under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Map inputs to outputs or process the data
    for(int i=0;i<=127;i++){
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

