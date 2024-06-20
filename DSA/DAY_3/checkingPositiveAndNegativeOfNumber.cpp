#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter Number :";
    cin>>num;
//!------------------------------------------------------

    // if(num>0){
    //     cout<<num <<" is Positive"<<endl;
    // }
    
    // else{
    //     if(num<0){
    //         cout<<num<<" is Negative"<<endl;
    //     }
    //     else{
    //         cout<<num<<" is Zero"<<endl;
    //     }
        
    
//!-------------------------------------------------------
    
    if(num>0){
        cout<<num<<" is Positive"<<endl;
    }
    else if(num<0){
        cout<<num<<" is negative"<<endl;
    }
    else{
        cout<<num<<" is Zero"<<endl;
    }

}