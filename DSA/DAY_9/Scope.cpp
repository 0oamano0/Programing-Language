#include<iostream>
using namespace std;

void update(int arr[] , int n){

    cout<<"printing update Function value"<<endl;

    arr[0]=120;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"Going back to main function"<<endl;
}

int main(){

    int arr[3]={1,2,3};

    update(arr,3);

    cout<<"Printing in main Function"<<endl;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}

//! In the case of Array we are passing first address to the function
//! Whatever change will happen in function that will be in original array 
//! That's why it is changing value in function too