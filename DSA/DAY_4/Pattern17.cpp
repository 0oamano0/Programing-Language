//! Pattern 17

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

            char ch='A'+row+col-2;
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
BC
CDE
DEFG
EFGHI
*/