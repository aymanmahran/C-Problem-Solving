#include<bits/stdc++.h>
using namespace std;
int x,y,a[100],b[100],c[100],d[100],n,m,t[100],ind,p[100];
vector<pair<int,int> > arr[100];
void findpath(int s){
if(s==0){
    cout<<s<<endl;
    return;
}
findpath(p[s]);
cout<<s<<endl;
return ;
}
int main(){
    cin>>x>>y;
    for(int i=0;i<y;i++){
        cin>>a[i]>>b[i]>>c[i];
        arr[a[i]].push_back(make_pair(b[i],c[i]));
        arr[b[i]].push_back(make_pair(a[i],c[i]));
    }
    for(int i=0;i<x;i++){
        d[i]=1e9;
    }
    d[0]=0;
    t[0]=1;
    for(int i=0;i<x-1;i++){
        m=1e9;
        for(int j=0;j<x;j++){
            if(!t[j]&&d[j]<m){
                m=d[j];
                ind=j;
            }
        }
        t[ind]=1;
        for(int j=0;j<arr[ind].size();j++){
            if(!t[arr[ind][j].first]&&d[arr[ind][j].first]>d[ind]+arr[ind][j].second){
                p[arr[ind][j].first]=ind;
                d[arr[ind][j].first]=d[ind]+arr[ind][j].second;
            }
        }
    }
    findpath(4);
}
