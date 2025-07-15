#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[5]={1,0,2,0,1};
	int count_zero=0,count_one=0,count_two=0;
	for(int i=0;i<=4;i++){
		if(arr[i]==0)
			count_zero++;
		else if(arr[i]==1)
			count_one++;
		else
			count_two++;
	}
		for(int i=0;i<count_zero;i++){
			arr[i]=0;
		}
		for(int i=count_zero;i<count_zero+count_one;i++){
			arr[i]=1;
		}
		for(int i=count_zero+count_one;i<=count_zero+count_one;i++){
			arr[i]=2;
		}
	for(int i=0;i<=4;i++){
		cout<<arr[i];
	}
	return 0;
}