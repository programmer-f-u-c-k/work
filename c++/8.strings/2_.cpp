#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="7854922969";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
 return 0;
}