#include<bits/stdc++.h>
using namespace std;
int x,arr[170][170];
double a[170][170],b[170][170],y;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        y=(arr[i][j]+arr[j][i])/2.00;
        a[i][j]=y;
        a[j][i]=y;
        b[i][j]=arr[i][j]-y;
        b[j][i]=arr[j][i]-y;
    }
}
for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        cout<<fixed<<setprecision(8)<<a[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        cout<<fixed<<setprecision(8)<<b[i][j]<<" ";
    }
    cout<<endl;
}
}
