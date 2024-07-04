//! Pattern : 23 

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int row=1;
    
    while(row<=num){

        //? Print traiangle first

        int first=num-row+1;
        int col=1;
        while(col<=first){
            cout<<col;
            col++;
        }

        //? Print star now triangle 1
        int second=row-1;
        while(second){
            cout<<"*";
            second--;
        }
        

        //? Print star trangle 2
        int third=row-1;
        while(third){
            cout<<"*";
            third--;
            
        }

        //? Print triangle 3
        int col1=num-row+1;
        while(col1){
            cout<<col1;
            col1--;
        }

        cout<<endl;




        row++;
    }
}

/*
Output : 
Enter the number : 5
1234554321
1234**4321
123****321
12******21
1********1
*/