#include<bits/stdc++.h>
using namespace std;
int main(){
    int b=0;
for(int i=1;i<=150000;i++){
    if(i%2==0||i%3==0||i%5==0){
        b++;
        if(b==1500){
            cout<<"The 1500'th ugly number is "<<i<<endl;
            break;
        }
    }
}
}
