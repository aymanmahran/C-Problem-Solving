#include<bits/stdc++.h>
using namespace std;
int x,y,cnt,r[1001],c[1001],d;
char ch[1001][1001];
int main(){
    cin>>x>>y;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>ch[i][j];
            if(ch[i][j]=='*'){
                cnt++;
                r[i]++;
                c[j]++;
            }
        }
    }
    if(x==1||y==1)cout<<"YES\n1 1"<<endl,exit(0);
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(ch[i][j]=='*')d=1;
            else d=0;
            if(r[i]+c[j]-d==cnt){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<j+1<<endl;
                exit(0);
            }
        }
    }
    cout<<"NO"<<endl;
}
