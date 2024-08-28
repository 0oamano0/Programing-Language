//! Note : if we give first value in array of size anything then remaining garbage value will be replaced by 0


#include<iostream>
using namespace std;

int main(){

    int arr[15]={2,7};
    int n=15;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}