#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=0;
	sum=n*(n+1)/2;
	int sum_array=0;
	for(int i=0;i<n-1;i++){
		sum_array=sum_array+arr[i];
	}
	cout<<sum-sum_array;
}
// int main(){
// 	//find a missing number in an arrayz
// 	int arr[4]={1,2,4,5};
// 	// int found=false;
// 	for(int i=1;i<=4;i++){
// 		bool flag=false;
// 		for(int j=0;j<=2;j++){
// 			if(arr[j]==i){
// 				flag=true;
// 				break;
// 			}
// 		}
// 		if(!flag){
// 			cout<<i<<endl;
// 			// flag=true;
// 		}

// 	}
// 	// if(!found)
// 	// 	cout<<-1<<endl;
// 	return 0;

// }

