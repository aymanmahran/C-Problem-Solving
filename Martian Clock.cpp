#include<bits/stdc++.h>
using namespace std;
string s,h,m,no;
int a,b,val,ans,mi,cnt;
stringstream c;
int power(int v,int k){
 int an=1;
    for(int i=0;i<k;i++){
        an*=v;
    }
    return an;
}
void ismin(string d){
     if(d.size()==1||d.size()==0){
            cout<<"-1"<<endl;
            exit(0);
    }
    else if(d.size()>=2){
            cnt=0;
            for(int ba=mi;;ba++){
                    ans=0;
            for(int i=d.size()-1,j=0;i>=0;i--,j++){
                    int cv=d[j]-'0';
                    if(isalpha(d[j])){
                        cv-=7;
                    }
                ans+=(cv*(power(ba,i)));
                //cout<<ans<<endl;
            }
            if(ans<=59){
                cout<<ba<<" ";
    cnt++;
            }
            else{
                if(cnt==0){
                        cout<<"0"<<endl;
                        exit(0);
                    }
                    else{
                            cout<<endl;
                        exit(0);
                    }
            }
            }
    }
    return;
}

void ishou(string f){
    cnt=0;
    for(int ba=mi;;ba++){
            ans=0;
        for(int i=f.size()-1,j=0;i>=0;i--,j++){
                int cv=f[j]-'0';
                    if(isalpha(f[j])){
                        cv-=7;
                    }
                ans+=(cv*(power(ba,i)));
            }
            if(ans<=23){
                    ans=0;
                for(int i=m.size()-1,j=0;i>=0;i--,j++){
                    int cv=m[j]-'0';
                    if(isalpha(m[j])){
                        cv-=7;
                    }
                ans+=(cv*(power(ba,i)));
            }
            //cout<<ba<<" "<<ans<<endl;
            if(ans<=59){
               cout<<ba<<" ";
                cnt++;
            }
            else{
                    if(cnt==0){
                        cout<<"0"<<endl;
                        exit(0);
                    }
                    else{
                            cout<<endl;
                        exit(0);
                    }
            }
            }
            else{
                    if(cnt==0){
                        cout<<"0"<<endl;
                        exit(0);
                    }
                    else{
                            cout<<endl;
                        exit(0);
                    }
            }
    }
}
int main(){
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]==':'){
        swap(h,m);
    }
    else{
    m+=s[i];
    }
}
a=h.size();
for(int i=0;i<a;i++){
    if(h[i]=='0'){
        h.erase(h.begin(),h.begin()+1);
        i--;
    }
    else{
        break;
    }
}
b=m.size();
for(int i=0;i<b;i++){
    if(m[i]=='0'){
        m.erase(m.begin(),m.begin()+1);
        i--;
    }
    else{
        break;
    }
}
if(h.size()==0){
    for(int i=0;i<m.size();i++){
                    if(isalpha(m[i])){
                mi=max(mi,(m[i]-55));

                    }
        else{
                mi=max(mi,(m[i]-'0'));
        }
    }
mi+=1;
        ismin(m);
   // cout<<"-1"<<endl;
}
else if(h.size()==1){
    if(isalpha(h[0])){
            mi=h[0]-55;
        if(h[0]>=65&&h[0]<=78){
                for(int i=0;i<m.size();i++){
                    if(isalpha(m[i])){
                mi=max(mi,(m[i]-55));

                    }
        else{
                mi=max(mi,(m[i]-'0'));
        }
    }
    mi+=1;
                ismin(m);
        }
        else{
            cout<<"0"<<endl;
        }
    }
    else{
            for(int i=0;i<h.size();i++){
                    if(isalpha(h[i])){
                mi=max(mi,(h[i]-55));
                    }
                    else{
                mi=max(mi,(h[i]-'0'));
        }
    }
    for(int i=0;i<m.size();i++){
            if(isalpha(m[i])){
                mi=max(mi,(m[i]-55));
                    }
                    else{
                mi=max(mi,(m[i]-'0'));
        }
    }
    mi+=1;
            ismin(m);
    }
}
else{
    for(int i=0;i<h.size();i++){
            if(isalpha(h[i])){
                mi=max(mi,(h[i]-55));
                    }
                    else{
                mi=max(mi,(h[i]-'0'));
        }
    }
    for(int i=0;i<m.size();i++){
        if(isalpha(m[i])){
                mi=max(mi,(m[i]-55));
                    }
                    else{
                mi=max(mi,(m[i]-'0'));
        }
    }
    mi+=1;
    ishou(h);
}
}
