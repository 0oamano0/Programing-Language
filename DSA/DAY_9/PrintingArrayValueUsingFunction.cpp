#include<iostream>
using namespace std;

//? Creating function

void printArray(int arr[],int size){

    cout<<"Printing an Array"<<endl;

    for(int i=0;i<size;i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Printing Done"<<endl;
}

int main(){

    int A[10]={5,2,3,5,8};

    //? Using Function
    printArray(A,10);

}