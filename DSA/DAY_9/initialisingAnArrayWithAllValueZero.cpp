#include<iostream>
using namespace std;

int main(){

    int arr[10]={0};
    int n=10;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    //? If we want to initialise all location with 1 [Not possible with below line]

    int arr2[10]={1};
    
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}



