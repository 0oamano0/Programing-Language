#include<iostream>
using namespace std;
int main(){
    int numberOfLine;
    cout<<"Enter the number : ";
    cin>>numberOfLine;

    int i=1;
    while(i<=numberOfLine){

        int j=1;
        while(j<=numberOfLine){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}