//clear bit=0
#include<iostream>
using namespace std;
int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n | (1<<pos));
}
int main(){
    cout<<clearBit(5,2)<<endl;
    return 0;
}