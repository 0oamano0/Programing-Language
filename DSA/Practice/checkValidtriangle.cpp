#include<iostream>
using namespace std;
int main(){
    int length1,length2,length3;

    //? taking user input for first length
    cout<<"Enter the first Number : ";
    cin>>length1;

    //? taking user input for second length
    cout<<"Enter the second Number : ";
    cin>>length2;

    //? taking user input for third length
    cout<<"Enter the Third Number : ";
    cin>>length3;

    //? Now applying logic of a+b>c

    if(length1+length2>length3 && length2+length3>length1 && length1+length3>length2){
        cout<<"Hence the "<<length1<<" "<<length2<<" "<<length3<<" is a valid traingle side";
        
    }
    else{
        cout<<"Not valid trangle";
    }
}