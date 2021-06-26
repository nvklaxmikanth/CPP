#include <bits/stdc++.h>
using namespace std;
void solve(int s[],int v[],int c,int n){
	int knap[c+1];
	int max;
	knap[0] = 0;
	for(int i=1;i<=c;i++){
        knap[i] = knap[i-1];
        for(int j=0;j<n;j++){
            if(i>=s[j]){
                max = knap[i-s[j]] + v[j];
                if(max > knap[i])
                	knap[i] = max;
            }
        }
	}
	cout<<knap[c];
}
int main(){
	int n,c;
	cin>>n>>c;
	int s[n];
	int v[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	solve(s,v,c,n);
	return 0;
}