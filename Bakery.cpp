#include<bits/stdc++.h>
using namespace std;
long long x,y,z,a,b,c,arr[100001],ans=1e10,ch[100001];
vector<pair<int,long long> > v[100001];
int main(){
    cin>>x>>y>>z;
    for(int i=0;i<y;i++){
        cin>>a>>b>>c;
        v[a].push_back(make_pair(b,c));
        v[b].push_back(make_pair(a,c));
    }
    for(int i=0;i<z;i++){
        cin>>arr[i];
        ch[arr[i]]=1;
    }
    for(int i=0;i<z;i++){
        for(int j=0;j<v[arr[i]].size();j++){
            if(!ch[v[arr[i]][j].first]){
                ans=min(ans,v[arr[i]][j].second);
            }
        }
    }
    if(ans==1e10)cout<<"-1"<<endl;
    else cout<<ans<<endl;
}
