#include<bits/stdc++.h>
using namespace std;
int main(){
long long  x;
cin>>x;
long long room[x],pep[x],dnt=0;
for(long long i=0;i<x;i++){
    cin>>room[i]>>pep[i];
}
for(long long i=0;i<x;i++){
    if(pep[i]-room[i]>=2){
        dnt++;
    }
}
cout<<dnt<<endl;
}
