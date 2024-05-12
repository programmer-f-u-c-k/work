#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str="hdbkhacdh";
    for(int i=0; i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    }
    cout<<str<<endl;
    for(int i=0; i<str.size();i++){
        if(str[i]>='A'&& str[i]<='Z')
            str[i]+=32;
    }
    cout<<str<<endl;
    string s="njkdbsdh";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
 return 0;
}