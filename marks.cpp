#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,dnt=0,l=0;
cin>>x>>y;
int arr[y][x],cnt[x],maxi[y];
string s;

for(int i=0;i<y;i++){
    maxi[i]=0;
}
for(int i=0;i<x;i++){
    cin>>s;
    cnt[i]=0;
    for(int j=0;j<y;j++){
            int u=s[j]-'0';
        arr[j][i]=u;
        maxi[j]=max(arr[j][i],maxi[j]);
    }
}

for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
        if(arr[i][j]==maxi[i]){
            cnt[j]++;
        }
    }
}

dnt=0;
for(int i=0;i<x;i++){
    if(cnt[i]!=0){
        dnt++;
    }
}
cout<<dnt<<endl;
}
