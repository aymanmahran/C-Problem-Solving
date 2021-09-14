#include<bits/stdc++.h>
using namespace std;
long long x,y,ans[300001],z;
pair<long long,int> arr[300001];
int main(){
    scanf("%I64d",&x);
    for(int i=0;i<x;i++){
        scanf("%I64d",&y);
        arr[i]=make_pair(y,i);
    }
    sort(arr,arr+x);
    for(int i=0;i<x;i++){
        if(arr[i].first>z){
            ans[arr[i].second]=arr[i].first;
            z=arr[i].first;
        }
        else{
            ans[arr[i].second]=z+1;
            z++;
        }
    }
    for(int i=0;i<x;i++)printf("%I64d ",ans[i]);
    printf("\n");
}
