#include<bits/stdc++.h>
using namespace std;
int x,y,cnt,dnt,arr[100001],a[100000],b[100000];
vector<int>no[100001];
bool flag;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>y;
    no[y].push_back(i+1);
    arr[y]++;
    cnt=max(cnt,y);
}

for(int i=0;i<=cnt;i++){
        flag=true;
        if(arr[i]==1){
            a[dnt]=i;
            b[dnt]=0;
            dnt++;
        }
        else if(arr[i]>1){
    int dif=abs(no[i][0]-no[i][1]);
    for(int j=0;j<arr[i]-1;j++){
        int f=abs(no[i][j]-no[i][j+1]);
        if(f!=dif){
            flag=false;
            break;
        }
    }
       if(flag){
            a[dnt]=i;
            b[dnt]=dif;
            dnt++;
    }
}
}
cout<<dnt<<endl;
for(int i=0;i<dnt;i++){
    cout<<a[i]<<" "<<b[i]<<endl;
}
}
