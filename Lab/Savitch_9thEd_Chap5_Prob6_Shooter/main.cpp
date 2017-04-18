

/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on April 18, 2017, 10:07 AM
 * Purpose: Shooter program
 */

//System Libraries
#include <iostream> //Imput - Output Library
#include <cstdlib>  //Random number generator
#include <ctime>    //Time to set the random seed
#include <cmath>    //Math Libraby
#include <iomanip>  //Format output
using namespace std; //Namespace under which system libraries exist

//User Libraries

//Global Constants
const int MAXRND=pow(2,31)-1; //Max random number

//Function Prototypes
//Probability -> [0,1]
float rndProb(){
    return static_cast<float>(rand())/MAXRND;
}

void heading(){
    cout<<"Table of shooting results"<<endl;
    cout<<"A -> Alive, D -> Dead"<<endl;
    cout<<"Aaron Bob Charlie"<<endl;
}
void results(bool a,bool b,bool c){
    cout<<"  "<<(a?'A':'D');
    cout<<"     "<<(b?'A':'D');
    cout<<"      "<<(c?'A':'D')<<endl;
}

//Execution begins here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    float pHitA=1.0f/3;//Probability of hit for Aaron
    float pHitB=1.0f/2;//Probability of hit for Bob
    float pHitC=1.0f;  //Probability of hit for Charlie
    bool aliveA=true;  //Aaron is alive
    bool aliveB=true;  //Bob is alive
    bool aliveC=true;  //Charlie is alive
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    heading();
    results(aliveA,aliveB,aliveC);
    if(pHitA>=rndProb()&&aliveC)aliveC=false;//Kill Charlie
    results(aliveA,aliveB,aliveC);
    if(pHitB>=rndProb()&&aliveC)aliveC=false;//Kill Charlie
    results(aliveA,aliveB,aliveC);
    if(pHitC>=rndProb()&&aliveB&&aliveC)aliveB=false;//Kill Bob
    results(aliveA,aliveB,aliveC);
    if(pHitA>=rndProb()&&aliveC)aliveC=false;//Kill Charlie
    results(aliveA,aliveB,aliveC);
    if(pHitC>=rndProb()&&aliveC&&aliveA)aliveA=false;//Kill Aaron
     results(aliveA,aliveB,aliveC);
    
    
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

