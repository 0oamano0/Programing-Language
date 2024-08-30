#include<iostream>
using namespace std;

//! Creating function to fing max value

int getMax(int num[],int n){

    int max=INT_MIN;

    for(int i=0;i<n;i++){

        //variable=max(variable,num[i]); //?We can use predefinrd function to get max
        if(num[i]>max){
            max=num[i];
        }
    }

    return max;

}

//! Creating function to fing min value

int getMin(int num[],int n){

    int min=INT_MAX;

    for(int i=0;i<n;i++){

        // variable=min(variable,num[i]); //? We can use predefined function to get min
        if(num[i]<min){
            min=num[i];
        }
    }

    return min;

}

int main(){

    int size;
    cout<<"Enter the size : ";
    cin>>size;

    int arr[100];

    //? Taking array as a user input
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Maximum Value is : "<<getMax(arr,size)<<endl;
    cout<<"Minimum Value is : "<<getMin(arr,size)<<endl;
}