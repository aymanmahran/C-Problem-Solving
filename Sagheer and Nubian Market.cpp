#include<bits/stdc++.h>
using namespace std;
long long x,y,arr[100001],newarr[100001],s,e,mid,z;
int main(){
    cin>>x>>y;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    s=0;
    e=x;
    while(s!=e){
        mid=s+ceil((double)(e-s)/2);
        //mid=s+(e-s)/2;
        z=0;
        //cout<<s<<" "<<e<<" "<<mid<<endl;
        for(int i=0;i<x;i++){
            newarr[i]=arr[i]+((i+1)*mid);
        }
        sort(newarr,newarr+x);
        for(int i=0;i<mid;i++)z+=newarr[i];
        if(z<=y)s=mid;
        else e=mid-1;
    }
    z=0;
    for(int i=0;i<x;i++){
            newarr[i]=arr[i]+((i+1)*s);
        }
        sort(newarr,newarr+x);
       // for(int i=0;i<x;i++)cout<<newarr[i]<<" ";
        for(int i=0;i<s;i++)z+=newarr[i];
    cout<<s<<" "<<z<<endl;
}
