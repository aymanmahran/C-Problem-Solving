#include<bits/stdc++.h>
using namespace std;
int x,s[100],e[100],ans[101],cnt;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>s[i]>>e[i];
}
for(int i=1;i<x;i++){
    for(int j=s[i];j<e[i];j++){
        ans[j]=1;
    }
}
for(int i=s[0];i<e[0];i++){
    if(ans[i]==0)cnt++;
}
cout<<cnt<<endl;
}
