//! Pattern : 8 -> trangular pattern with continous number.
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int row=1;
    int count=1;
    while(row<=n){

        int col=1;
        while(col<=row){
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
}

/*
! Output
? Enter the Number : 3
    1 
    2 3
    4 5 6
*/