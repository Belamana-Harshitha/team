#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int validRows=0;
    for(int i=0;i<n;i++){
        int ones=0;
        for(int j=0;j<3;j++){
            if(a[i][j]==1) ones++;
        }
        if(ones>=2)validRows++;
    }
    cout<<validRows;
    return 0;
}