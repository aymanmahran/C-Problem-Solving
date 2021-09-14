#include<bits/stdc++.h>
using namespace std;
int main(){
int x,u=0,h=0;
cin>>x;
int arr[x],ans=0;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(int i=0;i<x;i++){
 for(int v=0;v<x;v++){
     if(i!=v){
       if(arr[i]==arr[v]){
        ans++;
    }
  }
}
u=max(u,ans);
ans=0;
}
for(int i=0;i<x;i++){
 for(int v=0;v<x;v++){
     if(i!=v){
       if(arr[i]==arr[v]){
        arr[v]=0;
    }
  }
}
}
for(int i=0;i<x;i++){
        if(arr[i]!=0){
            h++;
        }
}
cout<<u+1<<" "<<h<<endl;
}
