#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string str;
    cin>>str;
    getline(cin,str);

    string s1="fam";
    string s2="ily";
    s1.append(s2);
    cout<<s1<<endl;
    s1=s1+s2;
    cout<<s1<<endl;
    cout<<s1<<endl;
    str.clear();
    cout<<str;
    string s5="786";
    int x=stoi(s5);
    cout<<x+2<<endl;
    int y=981;
    cout<<to_string(y)+"2"<<endl;
    string s4= "asljkdhjahfsjhfdjcba";
    sort(s1.begin(),s1.end());
    cout<<s4<<endl;
 return 0;   
}
/*
    string str;
    cin>>str;
    getline(cin,str);
    str.clear();
    s1.compare(s2);
    s1.empty();
    s1.erase(start,total number);
    s1.find("keyword");
    s1.inser(index,"keyword");
    s1.size();
    s1.length();
    
*/