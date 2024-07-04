
#include<iostream>
using namespace std;

int main(){

    int num1;
    int num2;
    cout<<"Enter the Sirst Number : ";
    cin>>num1;

    cout<<"Enter the Second Number : ";
    cin>>num2;

    cout<<"num1 & num2 : "<< (num1&num2)<<endl;
    cout<<"num1 | num2 : "<< (num1|num2)<<endl;
    cout<<"     ~num1  : "<< (~num1)<<endl;
    cout<<"num1 ^ num2 : "<< (num1^num2)<<endl;

    //? Left Shift operator(<<) -->generally multiply by 2 if shift 1
    cout<<"19 << 1 : "<<(19<<1)<<endl;
    cout<<"19 << 2 : "<<(19<<2)<<endl;


    //? Right Shift operator(>>) -->generally divide by two if shift 1
    cout<<"17 >> 1 : "<<(17>>1)<<endl;
    cout<<"17 >> 2 : "<<(17>>2)<<endl;

    //! if number is big then left shift will be return negative number
}