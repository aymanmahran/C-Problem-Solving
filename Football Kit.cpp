#include<bits/stdc++.h>
using namespace std;
int n,x[100000],y[100000],in[100000],out[100000],same[100001];
int main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>x[i]>>y[i];
    same[x[i]]++;
}
for(int j=0;j<n;j++){
            in[j]=n-1;
            in[j]+=same[y[j]];
            out[j]=((n-1)*2)-in[j];
}
for(int i=0;i<n;i++){
    cout<<in[i]<<" "<<out[i]<<endl;
}
}
