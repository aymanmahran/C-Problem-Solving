#include<bits/stdc++.h>
using namespace std;
long long x,y,arr,a,s,e,m;
vector<long long>v;
vector<long long>::iterator it;
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>arr;
        v.push_back(arr);
    }
    sort(v.begin(),v.end());
    cin>>y;
    for(int i=0;i<y;i++){
        cin>>a;
        it=upper_bound(v.begin(),v.end(),a);
        cout<<it-v.begin()<<endl;
    }
}
