//! using of Switch Statement with character
#include<iostream>
using namespace std;

int main(){

    char ch='c';

    cout<<endl;
    switch(ch){

        case 'a': cout<<"First Character"<<endl;
                  break;

        case 'b': cout<<"Second Character"<<endl;
                  break;

        default : cout<<"This is default case"<<endl;
    }
    cout<<endl;
}
