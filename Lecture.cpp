#include<bits/stdc++.h>
using namespace std;
int x,y,l,ll;
string s[3000],a[3000],b[3000];
int main(){
    map<string,int>arr;
    cin>>x>>y;
    for(int i=0;i<y;i++){
        cin>>a[i]>>b[i];
        arr[a[i]]=i;
    }
    for(int i=0;i<x;i++){
        cin>>s[i];
    }
    for(int i=0;i<x;i++){
        l=s[i].size();
        ll=b[arr[s[i]]].size();
        if(l<=ll){
            cout<<s[i]<<" ";
        }
        if(l>ll){
            cout<<b[arr[s[i]]]<<" ";
        }
    }
    cout<<endl;
}
