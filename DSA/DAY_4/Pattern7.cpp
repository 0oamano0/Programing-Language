//! Pattern : 7 -> trangular pattern with number
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int row=1;
    while(row<=n){

        int col=1;
        while(col<=row){
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}

/*
! Output
? Enter the Number : 3
    1 
    2 2 
    3 3 3 
*/