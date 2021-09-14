#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,y;
cin>>x>>y;
long long num[x],wnt=0;
for(long long i=0;i<x;i++){
    cin>>num[i];
    num[i]+=y;
}

for(long long i=0;i<x;i++){
    if(num[i]<=5){
        wnt++;
    }
}
cout<<wnt/3<<endl;
}
