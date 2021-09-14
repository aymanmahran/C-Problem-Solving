#include<bits/stdc++.h>
using namespace std;
string s;
int a,b,arr[1000000],c=1,z;
int main(){
cin>>s>>a>>b;
    for(int i=s.size()-1;i>=0;i--) {
          arr[i]=((s[i]-'0')*c+arr[i + 1])%b;
          c=c*10%b;
    }
    for (int i=1;i<s.size();i++) {
        z=(z*10 + s[i - 1]-'0')%a;
        if(z==0&&arr[i]==0&&s[i]!='0'){
            cout<<"YES"<<endl;
            for(int j=0;j<i;j++){
                   cout<<s[j];
            }
            cout<<endl;
            for(int j=i;j<s.size();j++){
                  cout<<s[j];
            }
            cout<<endl;
            exit(0);
           }
        }
        cout<<"NO"<<endl;
    }
