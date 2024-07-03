//! Pattern : 18

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int row=1;
    while(row<=num){

        int col=1;
        char ch='A'+num-row;
        while(col<=row){
            cout<<ch;
            ch++;
            col++;

        }
        cout<<endl;
        row++;
    }
}

/*
Output : 
Enter the number : 5
E
DE
CDE
BCDE
ABCDE

*/