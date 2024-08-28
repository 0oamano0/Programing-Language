#include<iostream>
using namespace std;
int main(){

    int arr[15]={1,2};

    int size=sizeof(arr)/sizeof(int);
    
    //! it will give the memory size of array
    cout<<"Size of Array : "<<size;
}