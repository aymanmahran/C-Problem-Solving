#include<bits/stdc++.h>
using namespace std;
int main(){
string s,a,b,f;
cin>>s>>a>>b;
string g=s;
for(int i=0;i<g.size();i++){
        if(g[i]==a[i]){
            g.erase(g.begin()+i);
        }
}
if(g.find(b)==EOF){
    cout<<"fantasy"<<endl;
}
else if(s.find(a)==EOF || s.find(b)==EOF){
    cout<<"fantasy"<<endl;
}
else{
        if(a==b){
            cout<<"both"<<endl;
        }
        else{
        int cnt=0,dnt=0,x=0,y=1,e=0,t=1;
        for(int i=0;i<s.size();i++){
        if(s[i]==b[0]){
            dnt=i;
        }
        if(s[i]==a[0]){
            cnt=i;
        }
    }
    if(a.size()==1||b.size()==1){
        if(cnt<dnt){
        for(int i=dnt+1;i<s.size();i++){
             f+=s[i];
        }
        if(f.find(a)!=EOF || f.find(b)!=EOF){
            cout<<"both"<<endl;
        }
        else{
            cout<<"forward"<<endl;
        }
    }
    else if(cnt>dnt){
        for(int i=cnt+1;i<s.size();i++){
            f+=s[i];
        }
        if(f.find(a)!=EOF || f.find(b)!=EOF){
            cout<<"both"<<endl;
        }
        else{
            cout<<"backward"<<endl;
        }
    }
    }
    else{
    for(int i=0;i<s.size();i++){
            if(y<=a.size()){
        if(s[x]==a[y] && x-cnt==1){
            cnt=x;
            y++;
        }
            x++;
    }
    else{
        break;
    }
    }
     for(int i=0;i<s.size();i++){
            if(t<=b.size()){
        if(s[e]==b[t] && e-dnt==1){
            dnt=e;
            t++;
        }
            e++;
    }
    else{
        break;
    }
     }
    if(cnt<dnt){
        for(int i=dnt+1;i<s.size();i++){
             f+=s[i];
        }
        if(f.find(a)!=EOF || f.find(b)!=EOF){
            cout<<"both"<<endl;
        }
        else{
            cout<<"forward"<<endl;
        }
    }
    else if(cnt>dnt){
        for(int i=cnt+1;i<s.size();i++){
            f+=s[i];
        }
        if(f.find(a)!=EOF || f.find(b)!=EOF){
            cout<<"both"<<endl;
        }
        else{
            cout<<"backward"<<endl;
        }
    }
    }
cout<<cnt<<" "<<dnt<<" "<<f;
}
}
}
