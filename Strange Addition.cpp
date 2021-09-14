#include<bits/stdc++.h>
using namespace std;
int x,ans[100],cnt,si=3,arr[100],k=1000,b=1000,n=1000;
string s,a;
stringstream c;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
    ans[i]=arr[i];
    if(arr[i]%10!=0){
        b=min(b,arr[i]);
    }
}
int dnt=x;
cnt=x;
sort(ans,ans+x);
for(int i=0;i<cnt;i++){
    c<<ans[i];
    c>>s;
    c.clear();
    reverse(s.begin(),s.end());
    for(int j=0;j<s.size();j++){
        int d=s[j]-'0';
        if(d>0){
        for(int v=i+1;v<cnt;v++){
                if(v!=i){
                c<<ans[v];
                c>>a;
                c.clear();
                reverse(a.begin(),a.end());
                int g=a[j]-'0';
                if(g!=0){
                    ans[v]=-1;
                }
        }
    }
        }
    }
}
dnt=0;
for(int i=0;i<cnt;i++){
    if(ans[i]!=-1){
        dnt++;
    }
}
cout<<dnt<<endl;
for(int i=0;i<cnt;i++){
    if(ans[i]!=-1){
        cout<<ans[i]<<" ";
    }
}
cout<<endl;
}
