#include<bits/stdc++.h>
using namespace std;
int main(){
	// Largest number in an Array
	int arr[5]={7,4,8,12,5};
	int largest=arr[0];
	for(int i=1;i<5;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<largest;
}
