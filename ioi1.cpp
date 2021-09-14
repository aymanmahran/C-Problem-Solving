#include<iostream>
using namespace std;
int longest_laugh(string s){
string d="ah";
int cnt,ans,st;
    for(int i=0;i<s.size();i++){
        if(!cnt){
            if(s[i]=='a'){
                st=1;
                cnt++;
            }
            else{
                st=0;
                cnt++;
            }
        }
        else{
            if(s[i]==d[st]){
                cnt++;
                st^=1;
            }
            else{
                ans=max(ans,cnt);
                cnt=0;
            }
        }
    }
    ans=max(ans,cnt);
    return ans;
}
