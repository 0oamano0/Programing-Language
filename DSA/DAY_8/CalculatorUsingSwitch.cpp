//! Calculator
#include<iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"Enter the value of b : ";
    cin>>b;

    char op;
    cout<<"Enter the expression : ";
    cin>>op;

    switch(op){

        case '+': cout<<"Addition : "<<(a+b)<<endl;
                  break;

        case '-': cout<<"Subtraction : "<<(a-b)<<endl;
                  break;

        case '*': cout<<"Multiplication : "<<(a*b)<<endl;
                  break;

        case '/': cout<<"Division : "<<(a/b)<<endl;
                  break;

        case '%': cout<<"Modulus : "<<(a%b)<<endl;
                  break;

        default : cout<<"Please! enter the vaild expression "<<endl;
    }
    cout<<endl;
}