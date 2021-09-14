#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,tnt=0;
cin>>x;
long long mag[x];
for(int i=0;i<x;i++){
    cin>>mag[i];
}
for(int i=0;i<x;i++){
    if(mag[i]!=mag[i+1]){
        tnt++;
        }
}
cout<<tnt<<endl;
}
