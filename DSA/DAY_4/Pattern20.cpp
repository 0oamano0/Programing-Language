//! Pattern : 20 ->opposit triangle

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int row=1;
    while(row<=num){

        //? Print star kar lo
        int col=1;
        int star=num-row+1;
        while(col<=star){

            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;


    }
}

/*
Output : 
Enter the number : 5
*****
****
***
**
*
*/