//! nCr using Function

#include<iostream>
using namespace std;

int factorial(int num){

    int ans=1;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    return ans;
}

int nCr(int n,int r){

    int num=factorial(n);
    int denom=factorial(r) * factorial(n-r);

    int ans = num / denom;
    return ans;
}

int main(){

    int a=13,b=3;
    
    cout<<"Answer is : "<< nCr(a,b) <<endl;
}