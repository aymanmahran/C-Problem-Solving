#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,cnt=0,dnt=0;
cin>>x;
long long num[x];
string s;
for(long long i=0;i<x;i++){
    cin>>num[i];
}
sort(num,num+x,greater<long long>());
for(long long i=0;i<x;i++){
     s+=(num[i]+'0');
}
cout<<s<<endl;
int b=0;

cout<<b<<endl<<endl;
    while(b%90!=0){
  s.erase(s.begin()+0);
  b = atoi(s.c_str());
  cout<<b<<endl;
    }
    cout<<b<<endl;

}
