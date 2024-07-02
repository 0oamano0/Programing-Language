#include<iostream>
using namespace std;
int main(){

    //? Taking first user input
    int num1;
    cout<<"Enter the First Number : ";
    cin>>num1;

    //? Taking second user input
    int num2;
    cout<<"Enter the Second Number : ";
    cin>>num2;

    //? Temp varaible
    int temp=0;

    //? 
    while(num1<=num2){
        temp=temp+num1;
        num1++;
    }
    cout<<"Sum : "<<num1;
}