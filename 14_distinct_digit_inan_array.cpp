#include<bits/stdc++.h>
using namespace std;

int main(){
	//find a distinct digit in an array
	int arr[9]={9,2,4,6,4,2,9,6,18};
	for(int i=0;i<=8;i++){
		bool flag=false;
		for(int j=0;j<=8;j++){
			if(i==j)
				continue;
			if(arr[i]==arr[j]){
				flag=true;
				break;
			}
		}
		if(!flag){
			cout<<arr[i]<<endl;
		}
	}
	return 0;

}
