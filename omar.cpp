#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int one[x],two[x];
for(int i=0;i<x;i++){
    cin>>one[i]>>two[i];
}
for(int i=0;i<x;i++){
    cout<<one[i]+two[i]<<endl;
}
}
