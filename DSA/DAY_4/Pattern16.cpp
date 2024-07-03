//! Pattern 16 -> Triangular pattern

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
        while(col<=row){

            cout << ch;
            ch++;
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
DEF
GHIJ
KLMNO
*/
