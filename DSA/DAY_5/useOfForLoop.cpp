#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<"Print the value form 1 to "<<num<<endl;


    for(int a=0,b=1,c=2;a<num,b<=num,c<=num+1;a++,b++,c++){

        cout<<a<<" "<<b<<" "<<c <<endl;
    }
//? ------------------------------------------------
    // int i=1;
    // for(;;){
    //     if(i<=num){
    //        cout<<i<<endl; 
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

//? -------------------------------------------
    // for(int i=1;i<=num;i++){
    //     cout<<i<<endl;
    // }
}