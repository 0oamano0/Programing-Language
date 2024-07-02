#include<iostream>
using namespace std;
int main(){

    //? Taking user input
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    //? Inisitilzing some value
    int sum=0;
    int initlize=1;
    
    //? Using While loop for adding number
    while(num>=initlize){
        sum=sum+initlize;
        initlize=initlize+1;
    }
    cout<<"Sum : "<<sum;

}