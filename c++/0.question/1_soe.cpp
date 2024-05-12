/*Sieve of erastosthenes = to print all the prime numbers in a given set
  start with i^2 then multiples
*/
#include<bits/stdc++.h>
using namespace std;
void primeSieve(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }                                   //to print multipes of a number
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" "<<endl;
        }
    }                                   //to print the prime numbers
}
int main(){
    int n;
    cin>>n;
    primeSieve(n);
    return 0;
}
