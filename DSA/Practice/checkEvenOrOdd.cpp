#include<iostream>
using namespace std;
int main(){

    //?Taking user input 
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    //?  Using if-else statement we will check the condition 
    //?  num%2==0 ->even

    if(num!=1 && num!=0){
        if(num%2==0){
            cout<<num<<" "<<"is Even Number";
        }
        else{
            cout<<num<<" "<<"is Odd Number";
        }
    }
    else{
        cout<<"The given input is either 1 or 0";
    }
}