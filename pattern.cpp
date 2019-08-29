#include<iostream>
using namespace std;
void pattern(int);
void pattern2(int);
void pattern3(int);
void pattern4(int);
int main(){
int n=5;
// pattern(n);
// pattern2(n);
// pattern3(n);
pattern4(n);
return 0;
}
void pattern4(int n){
for(int i=0;i<n;i++){
	for(int j=0;j<=i;j++){
		cout<<"*";
	}
	for(int k=0;k<2*n-2*(i+1);k++){
		cout<<" ";
	}
	for(int l=0;l<=i;l++){
		cout<<"*";
	}
	cout<<endl;
}
}
// void pattern3(int n){
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n-i;j++){
// 			cout<<"*";
// 		}
// 		for(int k=0;k<=2*i-1;k++){
// 			cout<<" ";
// 		}
// 		for(int l=0;l<n-i;l++){
// 			cout<<"*";
// 		}
// 		cout<<endl;

// 	}
// }
// void pattern2(int n){
// 	for(int i=1;i<=n;i++){
// 		for(int j=1;j<i;j++){
// 			cout<<" ";
// 		}
// 		 	for(int k=0;k<=(n*2)-2*i;k++){
// 		 		cout<<"*";
// 		 	}
// 		cout<<endl;
// 	}
// }
// void pattern(int n)														
// {
// 	for(int i=1;i<=n;i++){
// 		for(int k=i;k<n;k++){
// 			cout<<" ";
// 		}
// 		for(int j=0;j<2*i-1;j++){
// 			cout<<"*";
// 		}
// 		cout<<endl;
// 	}
// }