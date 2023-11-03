#include<iostream>
using namespace std;

int main() {
	char ch;
	cin>>ch;
	if(ch>=65 && ch<=90)
	cout<<ch<<"uppercase";
	else if(ch>=97 && ch<=122)
	cout<<ch<<"lowercase";
	else
    cout<<"not letter";
	
}
