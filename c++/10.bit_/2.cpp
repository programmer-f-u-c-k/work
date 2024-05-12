//set_bit = 1
//get bit
#include<iostream>
using namespace std;
int setBit(int n, int pos){
    return(n | (1<<pos));
}
int main(){
    cout<<setBit(5,1)<<endl;
    return 0;
}
