#include<bits/stdc++.h>
using namespace std;
long long a,x[1001],y[1001],r[1001],ans,s,b,c,st[1001];
long double an,pi=acos(-1.0);
pair<long long,pair<long long,long long> > arr[1001];
int main(){
    cin>>a;
    for(int i=0;i<a;i++){
        scanf("%I64d%I64d%I64d",&x[i],&y[i],&r[i]);
        arr[i].first=r[i];
        arr[i].second.first=x[i];
        arr[i].second.second=y[i];
    }
    sort(arr,arr+a,greater<pair<long long,pair<long long,long long> > > ());
    //for(int i=0;i<a;i++)cout<<arr[i].first<<" "<<arr[i].second.first<<" "<<arr[i].second.second<<endl;
    ans=(arr[0].first*arr[0].first);//+(arr[1].first*arr[1].first);

    for(int j=1;j<a;j++){
            b=(arr[0].second.first-arr[j].second.first)*(arr[0].second.first-arr[j].second.first)+(arr[0].second.second-arr[j].second.second)*(arr[0].second.second-arr[j].second.second);
            c=(arr[0].first+arr[j].first)*(arr[0].first+arr[j].first);
            if(b>=c){
                ans+=arr[j].first*arr[j].first;
                arr[j].first=-1;
            }
        }

    for(int i=1;i<a;i++){
        if(arr[i].first==-1)continue;
        s=arr[i].first*arr[i].first;
        if(st[i])s=0;
        for(int j=i+1;j<a;j++){
            if(arr[j].first==-1)continue;
            b=(arr[i].second.first-arr[j].second.first)*(arr[i].second.first-arr[j].second.first)+(arr[i].second.second-arr[j].second.second)*(arr[i].second.second-arr[j].second.second);
            c=(arr[i].first+arr[j].first)*(arr[i].first+arr[j].first);
            if(b<c){
            if(st[i]==0){
                s-=arr[j].first*arr[j].first;
                st[j]=1;
            }
            else{
                s+=arr[j].first*arr[j].first;
                st[j]=0;
            }
            }
        }
        ans+=s;
    }
    an=(long double)ans;
    cout<<fixed<<setprecision(8)<<an*pi<<endl;
}
