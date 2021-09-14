#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,n,t;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
        if(n-i*a-j*b>=0&&(n-i*a-j*b)%c==0){
        t=max(t,i+j+(n-i*a-j*b)/c);
        }
        }
    }
    cout<<t<<endl;
    }
