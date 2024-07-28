//! Power of Two(Optimize)

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int ans=1;
    for(int i=0;i<=30;i++){
        if(ans==num){
            cout<<"It is in power of two";
        }
        if(ans<INT_MAX/2){
            ans=ans*2;
        }
    }
}