#include<bits/stdc++.h>
using namespace std;
int x[3],y[3],z[3];
int a,b,c,arr[3],dif,s;
int main(){
for(int i=0;i<3;i++){
    cin>>x[i]>>y[i]>>z[i];
}
arr[0]=y[0]+z[0];
arr[1]=x[1]+z[1];
arr[2]=x[2]+y[2];
dif=max(arr[1],arr[0]);
dif=max(dif,arr[2]);
a=dif-arr[0];
b=dif-arr[1];
c=dif-arr[2];
s=a+b;
s+=c;
while(s!=dif){
    s+=3;
    a++;
    b++;
    c++;
    dif++;
}
x[0]=a;
y[1]=b;
z[2]=c;
for(int i=0;i<3;i++){
    cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
}
}
