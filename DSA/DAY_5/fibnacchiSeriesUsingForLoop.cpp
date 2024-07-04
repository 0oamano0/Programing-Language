#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int first=0;
    int second=1;

    cout<<first<<" "<<second<<" ";
    for(int i=1;i<=num;i++){

        int nextNum=first+second;
        cout<<nextNum<<" ";
        first=second;
        second=nextNum;

    }
}