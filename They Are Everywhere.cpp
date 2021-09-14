#include<bits/stdc++.h>
using namespace std;
int x,arr[125],ch[125],st,ans=1e9;
string s,d;
bool flag;
int main(){
    cin>>x>>s;
    for(int i=0;i<x;i++){
        if(!ch[s[i]])d+=s[i];
        ch[s[i]]=1;
    }
    s+="?";
    x++;
    for(int i=0;i<x;i++){
        flag=true;
        for(int j=0;j<d.size();j++){
            if(!arr[d[j]]){
                flag=false;
                break;
            }
        }
        if(flag){
            while(true){
                if(arr[s[st]]>1){
                    arr[s[st]]--;
                    st++;
                }
                else break;
            }
            ans=min(ans,i-st);
        }
        arr[s[i]]++;
    }
    cout<<ans<<endl;
}
