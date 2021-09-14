#include<bits/stdc++.h>
using namespace std;
int main(){
int a,cnt=0;
cin>>a;
int x[a],y[a],up[a],down[a],left[a],right[a];
for(int i=0;i<a;i++){
    cin>>x[i]>>y[i];
    up[i]=0;
    down[i]=0;
    left[i]=0;
    right[i]=0;
}
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        if(x[i]==x[j]&&y[i]>y[j]){
            up[i]++;
        }
        else if(x[i]==x[j]&&y[i]<y[j]){
            down[i]++;
        }
        else if(x[i]<x[j]&&y[i]==y[j]){
            left[i]++;
        }
        else if(x[i]>x[j]&&y[i]==y[j]){
            right[i]++;
        }
    }
}
for(int i=0;i<a;i++){
    if(up[i]!=0&&down[i]!=0&&left[i]!=0&&right[i]!=0){
        cnt++;
    }
}
cout<<cnt<<endl;
}
