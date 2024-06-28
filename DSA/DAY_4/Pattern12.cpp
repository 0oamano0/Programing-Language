//! Pattern : 12 -> printing rectangualr A B C .. in row

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int row=1;
    while(row<=num){

        int col=1;
        while(col<=num){

            char ch='A'+col-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}

/*
! Output
? Enter the number : 3
    ABC
    ABC
    ABC
*/