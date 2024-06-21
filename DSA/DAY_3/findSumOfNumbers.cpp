#include<iostream>
using namespace std;
int main(){
    int sum=0;

    int num;
    cout<<"Enter the Number : ";
    cin>>num;


    int i=1;
    while(i<=num){
        sum=sum+i;
        // cout<<"Sum of "<<i<<" number is : "<<sum<<endl;
        i++;
    }
    cout<<"Sum of "<<i-1<<"th number is :" <<sum<<endl;
}