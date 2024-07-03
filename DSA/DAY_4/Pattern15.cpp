//! Pattern 15 -> triangular Pattern

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int row=1;
    while(row<=num){

        int col=1;
        while(col<=row){

            char ch='A'+row-1;
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }
}

/*
output :

Enter the number : 5
A
BB
CCC
DDDD
EEEEE

*/