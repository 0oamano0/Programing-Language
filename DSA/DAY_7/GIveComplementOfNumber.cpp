//! To Get complement of a number
#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    int temp=num;
    int mask=0;

    if(num ==0){
        cout<<"Complement is : 1";
    }else{

        //? Mask creation to convert extra 1's to 0's
        while(temp!=0){

            mask=(mask<<1) | 1;
            temp=temp>>1;

        }
        //? Finding complement 
        int ans=(~num) & mask;
        cout<<"Complement is : "<<ans;
    }
}

