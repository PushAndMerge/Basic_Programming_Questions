#include<bits/stdc++.h>
using namespace std;
void print1(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
void print2(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
void print3(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
void print4(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
void print5(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
void print6(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
void print7(int n){
	for(int i=1;i<=n;i++){
		//for spaces
		for(int j=n-i;j>=1;j--){
			cout<<" "<<" ";
		}
		//for stars
		for(int j=1;j<=2*i-1;j++){
			cout<<"*"<<" ";
		}
		//for stars
		for(int j=n-i;j>=1;j--){
			cout<<" "<<" ";
		}
		cout<<endl;
	}
}

void print8(int n){
	for(int i=0;i<n;i++){
		//for spaces
		for(int j=0;j<i;j++){
			cout<<" "<<" ";
		}
		//for stars
		for(int j=0;j<2*(n-i)-1;j++){
			cout<<"*"<<" ";
		}
		//for stars
		for(int j=0;j<i;j++){
			cout<<" "<<" ";
		}
		cout<<endl;
	}
}
void print9(int n){
		for(int i=1;i<=n;i++){
		//for spaces
		for(int j=n-i;j>=1;j--){
			cout<<" "<<" ";
		}
		//for stars
		for(int j=1;j<=2*i-1;j++){
			cout<<"*"<<" ";
		}
		//for stars
		for(int j=n-i;j>=1;j--){
			cout<<" "<<" ";
		}
		cout<<endl;
	}
	//BELOW
	for(int i=0;i<n;i++){
		//for spaces
		for(int j=0;j<i;j++){
			cout<<" "<<" ";
		}
		//for stars
		for(int j=0;j<2*(n-i)-1;j++){
			cout<<"*"<<" ";
		}
		//for stars
		for(int j=0;j<i;j++){
			cout<<" "<<" ";
		}
		cout<<endl;
	}
}
void print10(int n){
	for(int i=1;i<=2*n-1;i++){
		int stars=i;
		if(i>n)stars=2*n-i;
		for(int j=1;j<=stars;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
void print11(int n){
	int start =1;
	for(int i=1;i<=n;i++){
		// even and odd concept recall
		if(i%2==0) start=0;
		else start=1;
		for(int j=1;j<=i;j++){
			cout<<start<<" ";
			start = 1-start;
		}
		cout<<endl;
	}
}
void print12(int n){
	for(int i=1;i<=n;i++){
		//numbers
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		//spaces
		for(int j=1;j<=2*(n-i);j++){
			cout<<" "<<" ";
		}
		//numbers
		for(int j=i;j>=1;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
void print13(int n){
	int count=1;
	for(int i=1;i<=n;i++){
		//numbers
		for(int j=1;j<=i;j++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
}
void print14(int n){
	for(int i=0;i<n;i++){
		//numbers
		for(char ch='A';ch<='A'+i;ch++){
			cout<<ch<<" ";

		}
		cout<<endl;
	}
}
void print15(int n){
	for(int i=0;i<n;i++){
		//numbers
		for(char ch='A';ch<='A'+(n-i-1);ch++){
			cout<<ch<<" ";

		}
		cout<<endl;
	}
}
void print16(int n){
	for(char ch='A';ch<='A'+n-1;ch++){
		//numbers
		for(char cha='A';cha<=ch;cha++){
			cout<<ch<<" ";

		}
		cout<<endl;
	}
}
void print16plus(int n){
	for(int i=0;i<n;i++){
		char ch='A'+i;
		for(int j=0;j<=i;j++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}

void print17(int n){
	for(int i=0;i<n;i++){
		//spaces
		for(int j=0;j<n-i-1;j++){
			cout<<" "<<" ";
		}
		//alphabets
		char ch='A';
		int breakpoint=(2*i+1)/2;
		for(int j=1;j<=2*i+1;j++){
			cout<<ch<<" ";
			if(j<=breakpoint)ch++;
		    else ch--;
		}
		//spaces
		for(int j=0;j<n-i-1;j++){
			cout<<" "<<" ";
		}
		cout<<endl;

	}
}

void print18(int n){
	for(int i=0;i<n;i++){
		for(char ch='E'-i;ch<='E';ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}
void print19(int n){

		for(int i=0;i<n;i++){
			// stars 
			for(int j=n-i;j>=1;j--){
				cout<<"*"<<" ";
			}
			//spaces
			for(int j=0;j<2*i;j++){
				cout<<" "<<" ";
			}
			for(int j=n-i;j>=1;j--){
				cout<<"*"<<" ";
			}
			cout<<endl;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				cout<<"*"<<" ";
			}
			for(int j=2*(n-i);j>0;j--){
				cout<<" "<<" ";
			}
			for(int j=1;j<=i;j++){
				cout<<"*"<<" ";
			}
			cout<<endl;
		}

	}
void print20(int n){
		for(int i=1;i<=2*n-1;i++){
		int stars=i;
		if(i>n)stars=2*n-i;
		for(int j=1;j<=stars;j++){
			cout<<"*"<<" ";
		}
		int spaces;
		if(i<n)spaces=2*(n-i);
		else spaces = 2*(i-n);
		for(int j=1;j<=spaces;j++){
			cout<<" "<<" ";
		}
		for(int j=1;j<=stars;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

void print21(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 || j==0 || i==n-1 || j==n-1){
				cout<<"*"<<" ";
			}else{
				cout<<" "<<" ";
			}
		}

		cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		print21(n);
	}
	
	return 0;
}