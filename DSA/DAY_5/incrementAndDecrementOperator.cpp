//! There are two types of Incremant and Decrement operator
//? 1.Pre-increment/decrement(++i/--i) -> phlay ghatay ga ya bhaday ga uss kay badd use hoga 
//? 2.Post-increment/decrement(i++/i--) -> phlay use hoga tub badhay ga ya ghatay ga

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<"++num : "<<(++num)<<endl;
    //8
    cout<<"num++ : "<<(num++)<<endl;
    //8 ,num=9
    cout<<"num-- : "<<(num--)<<endl;
    // 9 ,num=8
    cout<<"--num : "<<(--num)<<endl;
    // 7 ,num=7
}