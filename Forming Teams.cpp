#include<bits/stdc++.h>
using namespace std;
int x,y,a[101],b[101],ans,no[101],val[101],f,s;
set <int> t1,t2;
int tot(int start){
    if(start==no[start]){
        return start;
    }
    else{
        return tot(no[start]);
    }
}
int main (){
cin>>x>>y;
for(int i=0;i<y;i++){
    cin>>a[i]>>b[i];
}
for(int i=1;i<=x;i++){
    no[i]=i;
    val[i]=1;
}
for(int i=0;i<y;i++){
    f=tot(a[i]);
    s=tot(b[i]);
    if(f==s){
        if(val[f]%2==1){
            ans++;
        }
    }
    no[s]=no[f];
    val[f]+=val[s];
}
x-=ans;
if(x%2!=0){
    ans++;
}
cout<<ans<<endl;
}
