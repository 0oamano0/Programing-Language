//! Checkaing a number is prime or not

#include<iostream>
using namespace std;

bool isPrime(int num){

    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    cout<<"ENter the number : ";
    cin>>n;

    if(isPrime(n)){
        cout<<n<<" is prime"<<endl;
    }
    else{
        cout<<n<<" is not prime"<<endl;
    }    

}