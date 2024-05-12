#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr=&a;
    cout<<*aptr<<endl;
    
    *aptr=20;
    cout<<a<<endl;
    return 0;
}
/*
 understanding pointers:-
    '&'             -  this will return an address of any variable or things.
    '*'             -  this will dereference an address
    'int *'         -  this will make a pointer variable
    'variable_name' -  this will return value of a 'variable_name' 
Extra:-
   swap(a,b) - Call by value
   swap(&a,&b) - Call by reference

*/