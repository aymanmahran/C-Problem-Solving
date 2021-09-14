#include<bits/stdc++.h>
using namespace std;
int x,arr[400000],cnt,ans[801],f,s;
map< long long,pair <int,int> >pos;
int main(){
cin>>x;
for(int i=2;i<=(x*2);i++){
    for(int j=1;j<i;j++){
        cin>>arr[cnt];
        pos[arr[cnt]].first=i;
        pos[arr[cnt]].second=j;
        cnt++;
    }
}
sort(arr,arr+cnt,greater<int>());
for(int i=0;i<cnt;i++){
    f=pos[arr[i]].first;
    s=pos[arr[i]].second;
  //  cout<<arr[i]<<" "<<f<<" "<<s<<endl;
    if(!ans[f]&&!ans[s]){
        ans[f]=s;
        ans[s]=f;
    }
}
for(int i=1;i<=(x*2);i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
