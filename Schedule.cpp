#include<bits/stdc++.h>
using namespace std;
int x,a,b,s,e,cnt;
pair<pair<int,int>,int> arr[5001];
bool flag;
vector<int> ans;
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>a>>b;
        arr[i]=make_pair(make_pair(a,b),i+1);
    }
    sort(arr,arr+x);
    for(int i=0;i<x;i++){
        s=arr[i].first.first;
        e=arr[i].first.second;
        arr[i].first.first=arr[i-1].first.second;
        arr[i].first.second=arr[i].first.first;
        flag=false;
        for(int j=0;j<x-1;j++){
            if(arr[j].first.second>arr[j+1].first.first){
                flag=true;
                break;
            }
        }
        if(!flag){
            cnt++;
            ans.push_back(arr[i].second);
        }
        arr[i].first.first=s;
        arr[i].first.second=e;
    }
    cout<<cnt<<endl;
    sort(ans.begin(),ans.end());
    for(int i=0;i<cnt;i++)cout<<ans[i]<<" ";
    cout<<endl;
}
