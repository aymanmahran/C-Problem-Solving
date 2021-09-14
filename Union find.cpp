#include<bits/stdc++.h>
using namespace std;
int x,y,a[100],b[100],p[100],r[100],px,py;
int parent(int s){
    if(p[s]!=s){
        p[s]=parent(p[s]);
    }
    return p[s];
}
int main(){
    cin>>x>>y;
    for(int i=0;i<y;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<x;i++){
        p[i]=i;
        r[i]=0;
    }
    for(int i=0;i<y;i++){
        px=parent(a[i]);
        py=parent(b[i]);
        if(px==py){
            cout<<"Cycle"<<endl;
            exit(0);
        }
        if(r[px]>r[py]){
            p[py]=px;
        }
        else if(r[py]>r[px]){
            p[px]=py;
        }
        else{
            p[py]=px;
            r[px]++;
        }
    }
    cout<<"No cycle"<<endl;
}
