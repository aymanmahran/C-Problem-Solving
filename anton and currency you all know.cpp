#include<bits/stdc++.h>
using namespace std;
string s;
stringstream c;
int x,y,z,ans=-1,a,ans2=-1;
int main(){
cin>>s;
z=s.size()-1;
c<<s[z];
c>>a;
c.clear();
for(int i=0;i<s.size();i++){
    c<<s[i];
    c>>x;
    c.clear();
    if(x%2==0){
        if(x<a){
            ans=i;
            break;
        }
    }
    if(ans2==-1){
    c<<s[z-i];
    c>>x;
    c.clear();
    if(x%2==0){
        if(x>a){
            ans2=z-i;
        }
    }
    }
}
if(ans!=-1){
    swap(s[z],s[ans]);
    cout<<s<<endl;
}
else{
    if(ans2==-1){
        cout<<ans2<<endl;
    }
    else{
        swap(s[z],s[ans2]);
        cout<<s<<endl;
    }
}
}
