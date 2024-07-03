//! Pattern :22 -> trangular reverse and oposit

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int row=1;
    while(row<=num){

        //? Print space first
        int col=1;
        int space=1;
        while(space<row){

            cout<<" ";
            space++;
        }

        //? Print star
        
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