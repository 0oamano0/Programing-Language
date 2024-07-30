//! Even-Odd using Function
#include<iostream>
using namespace std;

bool isEven(int num){

    if(num&1){
        return 0;
    }else{
        return 1;
    }
}

int main(){


    int a;
    cout<<"Enter the number : ";
    cin>>a;

    if(isEven(a)){
        cout<<"Number is Even";
    }else{
        cout<<"Number is Odd";
    }
}