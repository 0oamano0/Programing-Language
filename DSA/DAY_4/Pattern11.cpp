//! Pattern : 11 ->printing rectangular Alphabet with same row same letter

#include<iostream>
using namespace std;
int main(){

    //? Taking user input
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    //?printing row
    int row=1;
    while(row<=num){

        //? assessing column
        int col=1;
        while(col<=num){

            //? increasing ASCII value

            char chr='A'+row-1;
            cout<<chr;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

}

/*
! Output
? Enter the number : 3
    AAA
    BBB
    CCC

*/