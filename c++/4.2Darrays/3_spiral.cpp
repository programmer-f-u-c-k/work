#include<iostream>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //
    int row_start=0,row_end=n-1,coulmn_start=0,coulmn_end=n-1;
    while(row_start<=row_end && coulmn_start<=coulmn_end){
        for(int col=coulmn_start;col<=coulmn_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        for(int row=row_start;row<=row_end;row++){
            cout<<arr[row][coulmn_end]<<" ";
        }
        coulmn_end--;
        
        for(int col = coulmn_end; col >= coulmn_start; col--){
            cout<<arr[row_end][col] << " ";
        }
        row_end--;
        
        for(int row = row_end; row >= row_start; row--){
            cout<<arr[row][coulmn_start] << " ";
        }
        coulmn_start++;
         
    }

    return 0;
}