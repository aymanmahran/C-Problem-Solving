#include<bits/stdc++.h>
using namespace std;
int x,cnt=97;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    char c=cnt;
    cout<<c;
    cnt++;
    if(cnt==101)cnt=97;
}
cout<<endl;
}
