
#include<iostream>
#include<cstring>
int max = 5000;
int display(int arr[]){
    int ctr = 0,cnt=0;
    for (int i=0; i<max; i++){
    	if (!ctr && arr[i])			ctr = 1;
    	if(ctr)  { cnt++;
    	}
    }
    return cnt;
}
void multiply(int arr[],int arr1[],int x){
    int arr2[x][max],carry=0;
    for(int j=0;j<x;j++){
    for (int i=max-1; i>=0; --i){
        arr2[j][i] = (arr[i] * arr1[j]) + carry;
        carry = arr2[j][i]/10;
        arr2[j][i] %= 10;
    }

}
for(int i=0;i<x-1;i++){
    for(int j=max-1;j>=0;--j){
           arr2[i+1][j] = (arr2[i+1][j] + arr2[i][j]) + carry;
        carry = arr2[i+1][j]/10;
        arr2[i+1][j] %= 10;
    }
}
int ctr = 0,cnt=0;
    for (int i=0; i<max; i++){
    	if (!ctr && arr[i])			ctr = 1;
    	if(ctr)
            std::cout<<arr[i];
    	}
    	ctr=0;
    	std::cout<<"\n";
      for (int i=0; i<max; i++){
    	if (!ctr && arr2[x-1][i])			ctr = 1;
    	if(ctr)
            std::cout<<arr2[x-1][i];
    	}
}

void factorial(int arr[], int n){
    if (!n) return;
    int carry = 0;
    for (int i=max-1; i>=0; --i){
        arr[i] = (arr[i] * n) + carry;
        carry = arr[i]/10;
        arr[i] %= 10;
    }
    factorial(arr,n-1);
}

int main(){
    int *arr = new int[max];
    std::memset(arr,0,max*sizeof(int));
    arr[max-1] = 1;
    int *arr1 = new int[max];
    std::memset(arr1,0,max*sizeof(int));
    arr1[max-1] = 1;
    int *arr3 = new int[max];
    std::memset(arr3,0,max*sizeof(int));
    arr3[max-1] = 1;
    int num;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    std::cout<<"factorial of "<<num<<"is :\n";
    factorial(arr,num);
    int x=display(arr);
    factorial(arr1,1);
    factorial(arr3,num-0);
    multiply(arr3,arr1,x);

    delete[] arr;
    return 0;
}
