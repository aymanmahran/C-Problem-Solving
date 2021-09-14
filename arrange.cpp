#include<iostream>
using namespace std;
int main(){
int x[10],y[10];

for(int i=0,j=0; i<10;i++,j++){
	cin>>x[i]>>y[j];
}

for(int v=0; v<10; v++){
for(int i=0; i<10;i++){

	if(x[i]>x[i+1]){
swap(x[i],x[i+1]);
swap(y[i],y[i+1]);

	}
}
}
	cout<<endl;

for(int p=0; p<10;p++){
   cout<<x[p]<<" "<<y[p];
   	cout<<endl;
}

}
