#include <bits/stdc++.h>
using namespace std;
string s;
char a,b;
long long cnt=1,ans=1;
int main(){
cin>>s;
for(int i=0;i<s.size();i++){
    if((s[i]-'0')+(s[i+1]-'0')==9){
        a=s[i];
        b=s[i+1];
        while(true){
            if(s[i]==a&&s[i+1]==b){
                cnt++;
                i++;
            }
            else{
                break;
            }
            swap(a,b);
        }
        if(cnt%2==1){
            cnt/=2;
            cnt+=1;
            ans*=cnt;
        }
        cnt=1;
    }
}
if(ans==0)ans=1;

cout<<ans<<endl;
}
