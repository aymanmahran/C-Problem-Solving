/*
ID: aymang.2
PROG: holstein
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
int x,y,a[26],b[16][26];
pair<int,int> v;
string d,z,k;
stringstream cs;
pair<int,int> tot(int pos,int c[],bool flag){
    /*int ans=1e9;
    ans=min(tot(pos+1,st),tot(,pos+1,st|(1<<pos)));
    return ans;*/
    if(pos==y){
        if(flag)return make_pair(1e9,0);
        else return make_pair(0,0);
    }
    int arr[26];
    pair<int,int> s,e,ans;
    bool flag1=false,flag2=false;
    for(int i=0;i<x;i++){
        arr[i]=c[i]-b[pos][i];
        if(arr[i]>0)flag1=true;
        if(c[i]>0)flag2=true;
    }
    s=tot(pos+1,c,flag2);
    e=tot(pos+1,arr,flag1);
    if(s.first<=e.first)ans=s;
    else ans=e,ans.second|=(1<<pos),ans.first++;
    return ans;
}
int main(){
    freopen("holstein.in","r",stdin);
    freopen("holstein.out","w",stdout);
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&y);
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            scanf("%d",&b[i][j]);
        }
    }
    v=tot(0,a,1);
    d=bitset<16>(v.second).to_string();
    printf("%d ",v.first);
    for(int i=d.size()-1,j=1;i>=0;i--,j++){
        if(d[i]=='1'){
            cs<<j;
            cs>>k;
            cs.clear();
            z=z+k+" ";
        }
    }
    for(int i=0;i<z.size()-1;i++)cout<<z[i];
    printf("\n");
}
