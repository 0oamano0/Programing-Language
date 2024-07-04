//! break -->break the loop
//! continue -->skip(badd ka part execute nahi karay ga)
#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    bool isPrime=1;
    for(int i=2;i<num;i++){

        //rem=0, Not prime
        if(num%i==0){
            isPrime=0;
            break;

        }

    }
    if(isPrime==0){
        cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"Prime Number"<<endl;
    }
}