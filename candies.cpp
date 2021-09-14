#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int a,b,cnt[x],candy[100];
for(int i=0;i<x;i++){
        cnt[i]=0;
        cin>>a>>b;
    for(int v=0;v<a;v++){
        cin>>candy[v];
        cnt[i]+=candy[v]/b;
    }

}
for(int i=0;i<x;i++){
    cout<<cnt[i]<<endl;
}
}
