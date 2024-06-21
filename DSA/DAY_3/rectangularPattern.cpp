#include<iostream>
using namespace std;
int main(){
    int numberOfLine;
    cout<<"Enter Number of Line : ";
    cin>>numberOfLine;

    int i=1;
    while(i<=numberOfLine){

        int j=1;
        while(j<=numberOfLine){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}