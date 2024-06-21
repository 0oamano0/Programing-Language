#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int startingCondition=2;
    while(startingCondition<num){
        if(num%startingCondition==0){
            cout<<"Not Prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
        }
        startingCondition++;
    }
}