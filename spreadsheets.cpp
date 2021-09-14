#include<bits/stdc++.h>
using namespace std;
string a="?ABCDEFGHIJKLMNOPQRSTUVWXYZ",s,ans[100000],d,b;
int x,y,f,sc=26,cnt,ad,dnt,arr[6],arr2[6],n=1,h,g;
stringstream c;
int power(int c,int h){
    int ans=1;
for(int i=0;i<h;i++){
    ans*=c;
}
return ans;
}
int main(){
scanf("%d",&x);
arr[1]=0;
arr2[1]=26;
for(int i=2;i<=5;i++){
    f=sc;
    arr[i]=f;
    sc*=26;
    sc+=f;
    arr2[i]=sc;
}
for(int i=0;i<x;i++){
    cin>>s;
    h=s.find("R");
    g=s.find("C");
    if(s[0]=='R'&&g-h>=2){
            d.clear();
            b.clear();
            for(int j=1;j<s.size();j++){
                    if(s[j]!='C'){
                d+=s[j];
                    }
                    else{
                    swap(d,b);
                    }
            }
           c<<d;
           c>>y;
           c.clear();
           cnt=0;
           f=0;
           sc=26;
           while(true){
               // cout<<y<<" "<<f<<" "<<sc<<endl;
            if(y>f&&y<=sc){
                cnt++;
                ad=power(26,cnt-1);
                break;
            }
            else{
                cnt++;
                f=sc;
                sc*=26;
                sc+=f;
            }
           }
           dnt=0;
           while(cnt>0){
                sc=f+ad;
             //  cout<<cnt<<" "<<f<<" "<<sc<<" "<<ad<<endl;
            while(true){
             //   cout<<f<<" "<<sc<<endl;
                if(y>f&&y<=sc){
                    dnt++;
              //         cout<<dnt<<endl;
                    ans[i]+=a[dnt];
              //      cout<<a[dnt];
                break;
            }
            else{
                f+=ad;
                sc+=ad;
                dnt++;
            }
            }
            cnt--;
            ad/=26;
            dnt=0;
            //cout<<endl;
           }
           ans[i]+=b;
    }
    else{
            d.clear();
            b.clear();
             for(int j=0;j<s.size();j++){
                    if(isalpha(s[j])){
                    d+=s[j];
                    }
                    else{
                        b+=s[j];
                    }
             }
           cnt=d.size();
           dnt=arr2[cnt-1];
           f=0;
           ad=0;
           while(cnt>1){
            ad=power(26,cnt-1);
         //  cout<<ad<<" ";
            ad*=(a.find(d[f])-1);
          //  cout<<ad<<" ";
            dnt+=ad;
          //  cout<<dnt<<endl;
            f++;
            cnt--;
           }
           dnt+=(a.find(d[d.size()-1]));
           c<<dnt;
           c>>d;
           c.clear();
           ans[i]="R"+b+"C"+d;
    }
}
for(int i=0;i<x;i++){
    cout<<ans[i]<<"\n";
}
}
