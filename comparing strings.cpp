#include<bits/stdc++.h>
using namespace std;
string s,d;
int cnt;
char f[2],x[2];
int main(){
  cin>>s>>d;
  if(s.size()==d.size()){
for(int i=0;i<d.size();i++){
    if(s[i]!=d[i]){
        f[cnt]=s[i];
        x[cnt]=d[i];
        cnt++;
    }
    if(cnt>2){
        printf("NO\n");
        exit(0);
    }
}
if(f[0]==x[1]&&f[1]==x[0]){
        printf("YES\n");
}
else{
        printf("NO\n");

}
}
else{
        printf("NO\n");
}
}
