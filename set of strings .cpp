#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int x;
cin>>x>>s;
    int y=0,z=0,cnt=1,dnt=0,a=s.size(),d=0;
    string g[x];
    char c[x];
    c[0]=s[0];

        for(int i=0;i<a;i++){
            if(s[z]==s[i]){
                g[y]+=s[i];
            }
            else if(s[z]!=s[i]){
                    y++;
                    cnt++;
                for(int v=0;v<y;v++){
                    if(s[i]==c[v]){
                        y--;
                        cnt--;
                        break;
                    }
                    else{
                        dnt++;
                    }
                }
                if(y>=x){
                    y=x-1;
                    cnt=x;
                    z=a;
                }
                 g[y]+=s[i];
                 if(dnt==y){
                    c[y]=s[i];
                    z=i;
                 }
                 dnt=0;
            }
        }

    if(cnt>=x){
    cout<<"YES"<<endl;

    for(int i=0;i<x;i++){
        cout<<g[i]<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;

    }
}
