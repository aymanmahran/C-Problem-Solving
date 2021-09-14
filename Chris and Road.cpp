#include<bits/stdc++.h>
using namespace std;
int x,y;
vector<pair<int,int> >arr;
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>y;
        arr.push_back(make_pair(y,i+1));
    }
    sort(arr.begin(),arr.end());
    for(int i=0,j=x-1;i<(x/2);i++,j--){
        cout<<arr[i].second<<" "<<arr[j].second<<endl;
    }
}
