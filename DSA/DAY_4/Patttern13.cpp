//! Pattern : 13 -> printing rectangular pattern in contious alphabet

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int row=1;
    char ch='A';
    while(row<=num){

        int col=1;
        while(col<=num){
 
            cout<<ch<<" ";
            ch=ch+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}

/*
! Output

? Enter the number : 3
* A B C
* D E F
* G H I

*/