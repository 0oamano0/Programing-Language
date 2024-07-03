//! Pattern : 19

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    int row=1;
    while(row<=num){

        //? Space print karlo
        int space=num-row;
        while(space){
            cout<<" ";
            space--;
        }

        //? Star print karlo
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;


    }
}


/*
Output : 
Enter the Number : 5
    *
   **
  ***
 ****
*****
*/