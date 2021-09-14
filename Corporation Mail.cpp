#include<bits/stdc++.h>
using namespace std;
string s,a,b[1001];
int ans,pos[1001],cnt,z;
int main(){
    cin>>s;
    pos[0]=0;
    cnt++;
    for(int i=1;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'&&(s[i-1]<'A'||s[i-1]>'Z')){
            pos[cnt]=i;
            cnt++;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]==':'||s[i]==',')z++;
        else if(s[i]=='.'){
            for(int j=0;j<z;j++){
                if(b[j]==b[z])ans++;
            }
            b[z]="";
            z--;
        }
        else b[z]+=s[i];
    }
    cout<<ans<<endl;
}
