#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxNo = INT_MIN;//used to update the values//
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++) {
    maxNo = max (maxNo, arr[i]);
    minNo = min(minNo, arr[i]);
    }
    cout << maxNo << " " << minNo << endl;
    return 0;
}

/*
int array[2];
array[0]=0;
array[1]=10;
array[2]=20;

array[3]={0,10,20,30};
*/