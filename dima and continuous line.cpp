#include<bits/stdc++.h>
using namespace std;
int x,arr[1000],s[1000],e[1000],a,b;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(int i=1;i<x;i++){
    s[i-1]=min(arr[i-1],arr[i]);
    e[i-1]=max(arr[i-1],arr[i]);
}

for(int i=0;i<x;i++){
        a=min(s[i],e[i]);
        b=max(s[i],e[i]);
    for(int j=0;j<i;j++){
        if(a>s[j]&&a<e[j]){
            if(b>e[j]||b<s[j]){
                cout<<"yes"<<endl;
                exit(0);
            }
        }
        else if(b>s[j]&&b<e[j]){
            if(a>e[j]||a<s[j]){
                cout<<"yes"<<endl;
                exit(0);
            }
        }
    }
}
cout<<"no"<<endl;
}
