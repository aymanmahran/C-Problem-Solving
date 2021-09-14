#include<bits/stdc++.h>
using namespace std;
int main(){
long long x;
cin>>x;
long long sum1=0,sum2=0,sum3=0,a,b,c;
for(long long i=0;i<x;i++){
    cin>>a>>b>>c;
    sum1+=a;
    sum2+=b;
    sum3+=c;
}
if(sum1==0&&sum2==0&&sum3==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}

