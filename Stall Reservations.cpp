#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int x,ans[50001];
pair<int,pair<int,int> > arr[50001];
pair<int,int> y;
struct compare
 {
   bool operator()(const pair<int,int> & l, const pair<int,int> & r)
   {
       return l.second > r.second;
   }
 };
priority_queue<pair<int,int> ,vector<pair<int,int> >,/*greater<pair<int,int> >*/compare > q;
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>arr[i].first>>arr[i].second.first;
        arr[i].second.second=i;
    }
    sort(arr,arr+x);
    ans[arr[0].second.second]=1;
    q.push(make_pair(1,arr[0].second.first));
    for(int i=1;i<x;i++){
        y=q.top();
        //cout<<y.second<<" "<<arr[i].first<<endl;
        if(y.second<arr[i].first){
            ans[arr[i].second.second]=y.first;
            q.pop();
            q.push(make_pair(ans[arr[i].second.second],arr[i].second.first));
        }
        else{
            ans[arr[i].second.second]=q.size()+1;
            q.push(make_pair(ans[arr[i].second.second],arr[i].second.first));
        }
    }
    cout<<q.size()<<endl;
    for(int i=0;i<x;i++){
        cout<<ans[i]<<endl;
    }
}
