#include<bits/stdc++.h>
using namespace std;
long long x,arr[100001],score[100001],no[100001];
int main(){
cin>>x;
for(int i=1;i<=x;i++){
    cin>>arr[i];
    no[arr[i]]++;
}
score[0]=0;
score[1]=no[1];
for(int i=2;i<=100000;i++){
    score[i]=max(score[i-1],score[i-2]+no[i]*i);
}
cout<<score[100000]<<endl;
}
