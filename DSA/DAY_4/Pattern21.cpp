//! PAttern :21

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    int row=1;
    while(row<=num){

        //? Print karo space (triangle1)

        int space=num-row;
        while(space){
            cout<<" ";
            space--;
        }


        //? Print karo second triangle

        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }


        //? print karo 3rd traiangle

        int start=row-1;
        while(start){
            cout<<start;
            start--;

        }
        cout<<endl;
        row++;

    }
}

/*
Output : 
Enter the Number : 5
    1
   121
  12321
 1234321
123454321
*/