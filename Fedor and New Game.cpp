#include <bits/stdc++.h>
using namespace std;
int x,y,z,arr[1002],cnt,dnt;
string a,b;
int main()
{
    cin>>x>>y>>z;
    for(int i=0;i<=y;i++){
        cin>>arr[i];
    }
    b = bitset<20>(arr[y]).to_string(); //to binary

    for(int i=0;i<y;i++){
        a = bitset<20>(arr[i]).to_string(); //to binary
         for(int j=0;j<20;j++){
        if(b[j]!=a[j]){
            cnt++;
        }
    }
    if(cnt<=z){
        dnt++;
    }
    cnt=0;
    }
   // unsigned long decimal = bitset<8>(binary).to_ulong();
    //cout<<decimal<<"\n";
    cout<<dnt<<endl;
}
