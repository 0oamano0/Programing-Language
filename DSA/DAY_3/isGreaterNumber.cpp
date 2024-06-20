#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Value of a and b is : "<<a<<" "<<b<<endl;

    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    if(a<b){
        cout<<b<<" is greater than "<<a<<endl;
    }
    

    // a=cin.get(); //? it store char type so it will return ASCII Value
    // cout<< "VAlue of a :" <<a<<endl;
    
}

//! cin doesnot read space ,tab etc