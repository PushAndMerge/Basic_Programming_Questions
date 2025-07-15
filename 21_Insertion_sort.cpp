#include<bits/stdc++.h>
using namespace std;
//Insertion sort
int main(){
	int arr[5]={4,5,2,1,3};
	for(int i=0;i<=3;i++){
		for(int j=i;j>=0;j--){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}else{
				break;
			}
		}
	}
	for(int i=0;i<=4;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}