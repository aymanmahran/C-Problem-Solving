#include<bits/stdc++.h>
using namespace std;
int x,y,z,arr[100],maxi,mini=1,si[100],cnt=1,f,d;
bool flag;
int main(){
cin>>x>>y>>z;
maxi=z;
if(x%2==0){
    if(y>0){
        arr[0]=mini;
        //si[0]=mini;
        f=mini;
        for(int i=1;i<x;i++){
            arr[i]=maxi;
            f=arr[i]-f;
            swap(maxi,mini);
            if(i%2==1){
            si[cnt]=f;
            cnt++;
        }
        }
        if(mini>si[cnt-1]){
            d=1;
        }
        else {
            si[0]=mini;
            d=0;
        }
        for(int i=cnt-1;i>=d;i--){
            if(si[i]>=y&&y>=si[i-1]){
                arr[i*2-1]=arr[i*2-1]-(si[i]-y);
                flag=true;
                break;
            }
            else{
                arr[i*2-1]=1;
            }
        }
        reverse(arr,arr+x);
    }
    else if(y<0){
        arr[0]=maxi;
        f=maxi;
        cnt=0;
        for(int i=1;i<x;i++){
            arr[i]=mini;
            f=arr[i]-f;
            swap(maxi,mini);
            if(i%2==1){
            si[cnt]=f;
            cnt++;
            }
        }
            reverse(arr,arr+x);
        for(int i=cnt-1;i>=0;i--){
            if(si[i]<=y&&y<=si[i-1]){
                arr[i*2]=arr[i*2]-(si[i]-y);
                flag=true;
                break;
            }
            else{
                arr[i*2]=z;
            }
        }
    }
    else if(y==0){
        for(int i=0;i<x;i++){
            arr[i]=1;
        }
        flag=true;
    }
    if(!flag)cout<<"-1"<<endl;
    else {
        for(int i=0;i<x;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
else{
        if(y>0){
        arr[0]=maxi;
        //si[0]=maxi;
        f=maxi;
        for(int i=1;i<x;i++){
            arr[i]=mini;
            f=arr[i]-f;
            swap(maxi,mini);
            if(i%2==0){
            si[cnt]=f;
            cnt++;
        }
        }
        if(maxi>si[cnt-1]){
            d=1;
        }
        else {
            si[0]=maxi;
            d=0;
        }
        for(int i=cnt-1;i>=d;i--){
            if(si[i]>=y&&y>=si[i-1]){
                arr[i*2]=arr[i*2]-(si[i]-y);
                flag=true;
                break;
            }
            else{
                arr[i*2]=1;
            }
        }
    }
    else if(y<0){
        arr[0]=mini;
        f=mini;
        cnt=0;
        for(int i=1;i<x;i++){
            arr[i]=maxi;
            f=arr[i]-f;
            swap(maxi,mini);
            if(i%2==0){
            si[cnt]=f;
            cnt++;
            }
        }
        for(int i=cnt-1;i>=0;i--){
            if(si[i]<=y&&y<=si[i-1]){
                arr[i*2+2]=arr[i*2+2]-(si[i]-y);
                flag=true;
                break;
            }
            else{
                arr[i*2+1]=z;
            }
        }
    }
    else if(y==0){
            if(z>=2){
        for(int i=0;i<x;i++){
            arr[i]=1;
        }
        arr[x/2]=2;
        flag=true;
            }
            else{
                flag=false;
            }
    }

if(!flag)cout<<"-1"<<endl;
else{
    for(int i=x-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}
}
