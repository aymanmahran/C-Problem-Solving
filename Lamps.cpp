#include<bits/stdc++.h>
using namespace std;
int x,y,a[10001],b[10001],c,d,ans[8][100];
int main(){
    cin>>x>>y;
    while(1){
        cin>>a[c];
        if(a[c]==-1)break;
        c++;
    }
    while(1){
        cin>>b[d];
        if(b[d]==-1)break;
        d++;
    }
    for(int i=0;i<x;i+=2){
        ans[1][i]=1;
        ans[1][i+1]=1;
        ans[2][i]=1;
        ans[3][i+1]=1;
        ans[4][i]=1;
        ans[4][i+1]=1;
        if((i-1)%3==0)ans[4][i]=0;
        if(i%3==0)ans[4][i+1]=0;
        ans[5][i]=!ans[4][i];
        ans[5][i+1]=!ans[5][i+1];

    }
}
