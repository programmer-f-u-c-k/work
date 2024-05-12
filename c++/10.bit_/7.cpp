//subsets = 2^n -1
#include<iostream>
using namespace std;
void subsets(int arr[], int n){
    for(int i=0;i< (1<<n);i++){
        for(int j=0;j<n;j++){       //set
            if(i & (1<<j)){         //get bit 
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int main(){
    int arr[4]={1,2,3,4};
    subsets(arr,4);
    return 0;
}