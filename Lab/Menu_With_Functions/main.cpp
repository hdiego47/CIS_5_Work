

/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on March 23, 2017, 12:10 AM
 * Purpose: Menu to be utilized on homework 4
 */

//System Libraries
#include <iostream> //Imput - Output Library
using namespace std; //Namespace under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void menu(void);
void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);
void prob5(void);
void prob6(void);
void prob7(void);
void prob8(void);
void prob9(void);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    
    //show menu and loop
    do{
        //Display Menu
        menu();
        
        //Input the choice
        
        cout<<"Problem ";
        cin>>choice;
        cout<<"Solution:"<<endl<<endl;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':prob1();break;
            
            case '2':prob2();break;
            
            case '3':prob3();break;
            
            case '4':prob4();break;
            
            case '5':prob5();break;
            
            case '6':prob6();break;
            
            case '7':prob7();break;
            
            case '8':prob8();break;
            
            case '9':prob9();break;
            
            default:{
                cout<<"Exit the Program"<<endl;
            }
        }
        
    }while(choice>='1'&&choice<='9');
    
    
    //Exit stage right!
    return 0;
}

void menu(void){
      cout<<endl<<endl<<"Type 0 to exit"<<endl;
    cout<<"Type 1 for Sum 1 to n Problem"<<endl;
    cout<<"Type 2 for Sum 0.1 error Problem"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 3 for Problem 4"<<endl;
    cout<<"Type 3 for Problem 5"<<endl;
    cout<<"Type 3 for Problem 6"<<endl;
    cout<<"Type 3 for Problem 7"<<endl;
    cout<<"Type 3 for Problem 8"<<endl;
    cout<<"Type 3 for Problem 9"<<endl<<endl;
}

void prob1(void){
    //Declare and initialize variables
    int n=100,sum=0;

    //Input data

    //Map inputs to outputs or process the data
    for(int i=1;i<=n;i++){
        sum+=i;
    }

    //Output the transformed data
    cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<" and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
}

void prob2(void){
    //Declare and initialize variables
    int nLoop=10000000;
    float sum=0.0f,frac=0.1f;

    //Input data

    //Map inputs to outputs or process the data
    for(int i=1;i<=nLoop;i++){
        sum+=frac;
    }

    //Output the transformed data
    cout<<"The computed sum of "
            <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
    cout<<"Simple multiplication of "
            <<frac<<"X"<<nLoop<<" = "<<frac*nLoop<<endl;
    cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
            <<"%"<<endl;
}

void prob3(void){
     cout<<"In problem solution 3"<<endl;
}

void prob4(void){
     cout<<"In problem solution 4"<<endl;
}

void prob5(void){
     cout<<"In problem solution 5"<<endl;
}

void prob6(void){
     cout<<"In problem solution 6"<<endl;
}

void prob7(void){
     cout<<"In problem solution 7"<<endl;
}

void prob8(void){
     cout<<"In problem solution 8"<<endl;
}

void prob9(void){
     cout<<"In problem solution 9"<<endl;
}