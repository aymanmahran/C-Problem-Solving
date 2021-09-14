#include<bits/stdc++.h>
using namespace std;
long long st,e,mid,a,b,arr[1001],s,x,t[100000001];
long long minc(long long m, long long v){
    t[0]=0;
    for (int i=1;i<=v;i++)
        t[i]=LONG_LONG_MAX;
    for (int i=1;i<=v;i++){
        for (int j=0;j<m;j++)
          if (arr[j]<=i){
              int sub=t[i-arr[j]];
              if (sub!=LONG_LONG_MAX&&sub+1<t[i])
                  t[i]=sub+1;
          }
    }
    return t[v];
}
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>a>>b;
        s=0;
        for(int j=0;j<a;j++){
            cin>>arr[j];
            s+=arr[j];
        }
    st=(s/b);
    st*=b;
    if(st<s){
        st+=b;
    }
    cout<<st<<endl;
    for(int i=st;i<s*b;i+=b){
        if(minc(a,(i-s))!=LONG_LONG_MAX){
            cout<<i<<endl;
            break;
        }
    }
    }
}
