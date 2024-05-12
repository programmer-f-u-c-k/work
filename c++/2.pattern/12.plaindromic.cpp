/*rows=1 to n
  cols=1.for spaces(1 to n-rowno. )
       2.for k=rowno. k++ n-rowno. to n
       3.for k=2 k++ n to n+rowno-1*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++){//it is done so that j value should be sarted from n-i above//
            cout<<k--;
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++;
        }
        cout<<endl;

    }

    return 0;
}