#include<bits/stdc++.h>
using namespace std;
int x,y,arr[1001];
set<int>s;
set<int>::iterator it;
int main(){
cin>>x;
for(int i=2;i<=x;i++){
    for(int j=2;j*i<=x;j++){
        arr[j*i]=1;
    }
}
for(int i=2;i<=x;i++){
    if(!arr[i]){
        s.insert(i);
        y=i;
        while(y<=x){
         y*=i;
      if(y>x)break;

      else s.insert(y);
      }
   }
}
cout<<s.size()<<endl;
for(it=s.begin();it!=s.end();++it){
    cout<<*it<<" ";
}
cout<<endl;
}
