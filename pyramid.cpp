#include<bits/stdc++.h>
using namespace std;
int x,y,a,b,sl=92;
int e,d,endd,arr[100],gg,cnt;
string ans[100],cs;
char ss;
int main(){
    ss=(char)sl;
    cin>>x>>y;
    for(int i=0;i<x;i++){
        cin>>a;
        cin>>b;
        e=0;
        d=0;
        endd=0;
        gg=0;
        cnt=0;
        for(int j=0;j<=a;j++){
            arr[j]=3;
            for(int k=0;k<=a*6;k++)ans[j]+=" ";
        }
        arr[0]=1;
        arr[1]=2;
        for(int j=a-1,k=0;j>=0;j--,k++){
            ans[j][k]='/';

        }
        for(int j=0,k=a;j<a;j++,k++){
            ans[j][k]=ss;
            if(j==(a-b-1)){
              //  ans[j][k]='/';
               // ans[j][k+1]='/';
                for(int m=j,n=k+1;m>=1;m--,n++){
                    ans[m][n]='/';
                    e=n;
                }
                e++;
                for(int m=1,n=e;m<a;m++,n++){
                        ans[m][n]=ss;
                        if(m==(a-b-1)){
                            for(int l=m,v=n+1;l>=2;l--,v++){
                                ans[l][v]='/';
                                d=v;
                            }
                            d++;
                            for(int l=2,v=d;l<a;l++,v++){
                                ans[l][v]=ss;
                            }
                        }
                }
            }
        }
        for(int j=0;j<a*6;j++){
            for(int k=a*6;k>=0;k--){
                if(ans[j][k]==ss){
                        k--;
                    while(ans[j][k]!='/'){
                        if(ans[j][k]!=ss)ans[j][k]='*';
                        k--;
                    }
                }
            }
        }
        for(int k=a*6;k>=0;k--){
                if(ans[a-1][k]==ss){
                        k--;
                    while(ans[a-1][k]!='/'){
                        if(ans[a-1][k]!=ss)ans[a-1][k]='-';
                        k--;
                    }
                }
            }
        if(y==1||y==2){
                while(ans[a-1][endd]!=' '){
                endd++;
            }
        for(int j=0;j<a;j++){
            for(int k=0;k<endd;k++){
                if(ans[j][k]==ss)cnt++;
                if(cnt==arr[gg]){
                    gg++;
                    cnt=0;
                    cout<<ss;
                                 //       cout<<"G";

                    break;
                }
                cout<<ans[j][k];
            }
            cout<<endl;
        }
        }
        else if(y==3){
            while(ans[a-1][endd]!=' '){
                endd++;
            }
        }
    }
}
