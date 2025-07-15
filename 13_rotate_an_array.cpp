#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[5]={2,3,7,11,9};
	int num=arr[4];
	for(int i=3;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=num;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}

}
