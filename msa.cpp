#include <iostream>
using namespace std;
void msa(int a[],int n){
	int m[n+1];
	m[0] = max(0,a[0]);
	m[1] = max(a[0],a[1]);
	for(int i=2;i<n;i++){
		m[i] = max(m[i-2],max(m[i-1],m[i-2]+a[i]));
	}
	cout<<max(m[n-1],m[n-2]);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	msa(a,n);
	return 0;
}