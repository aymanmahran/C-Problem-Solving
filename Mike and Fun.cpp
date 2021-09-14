#include<bits/stdc++.h>
using namespace std;
int x,y,z,arr[500][500],ans[501],cnt,maxi,anss,yw;
int main(){
cin>>x>>y>>z;
yw=y;
for(int i=0;i<x;i++){
        cnt=0;
    for(int j=0;j<y;j++){
        cin>>arr[i][j];

        if(arr[i][j])cnt++;

        else{
            anss=max(cnt,anss);
            cnt=0;
        }
    }
    anss=max(cnt,anss);
    cnt=0;
    ans[i]=anss;
    anss=0;
}
for(int i=0;i<z;i++){
    cin>>x>>y;
    x--;
    y--;
    if(!arr[x][y]){
        arr[x][y]=1;
    }
    else{
        arr[x][y]=0;
    }
    cnt=0;
    maxi=0;
    anss=0;
    for(int i=0;i<=yw;i++){
        if(arr[x][i]){
            cnt++;
        }
        else{
        anss=max(anss,cnt);
        cnt=0;
        }
    }
    ans[x]=anss;
    for(int i=0;i<500;i++){
        maxi=max(maxi,ans[i]);
    }
    cout<<maxi<<endl;
}
}
