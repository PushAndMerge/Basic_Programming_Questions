#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[5]={5,3,2,1,-6};
	int steps=0;
	int count_zeros=0;
	int mul=1;
	for(int i=0;i<=4;i++){
		if(arr[i]>0){
			steps=steps + (arr[i]-1);
			mul=mul*1;
		}
		else if(arr[i]<0){
			steps=steps + (-1-arr[i]);
			mul=mul*-1;
		}else{
			steps=steps + 1;
			count_zeros++;
		}
	}
	if(mul==1 || count_zeros>0){
		cout<<steps;
	}else{
		steps=steps+2;
		cout<<steps;
	}
	return 0;
}