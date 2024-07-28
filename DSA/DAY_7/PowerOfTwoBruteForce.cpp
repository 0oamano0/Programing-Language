//! Power of Two(Brute force)

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    for(int i=0;i<=30;i++){
        int ans=pow(2,i);
        if(ans==num){
            cout<<"It is on power of 2"<<endl;
        }
    }
   
    
}