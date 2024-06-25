//! Pattern : 10 ->
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int row;
    while(row<=n){

        int col=1;
        // int value=row;
        while(col<=row){

            //? Method : 1
            // cout<<value<< " ";
            // value--;
            // col++;

            //? Method : 2
            cout<<row-col+1<<" ";
            col++;

        }
        cout<<endl;
        row++;
    }
}

