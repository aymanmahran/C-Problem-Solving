#include<bits/stdc++.h>
using namespace std;
int main()
{
long long x;
cin>>x;

for(long long i=1;i<sqrt(x);i++){
    long long a=i;
    long long b=x-a;
    a=(a*(a+1))/2;
    b=x-a;
    long long s=0,e=1e9;
    while(s<=e){
        long long mid=s+(e-s)/2;
        long long mid1=(mid*(mid+1))/2;
        mid1+=a;
        if(mid1==x){
            cout<<"YES"<<endl;;
            exit(0);
        }
        else if(mid1<x){
            s=mid+1;
        }
        else if(mid1>x){
            e=mid-1;
        }
    }
}
cout<<"NO"<<endl;
}
