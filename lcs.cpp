#include <bits/stdc++.h>
using namespace std;
int max(int x,int y){
	return (x>y?x:y);
}
void dplcs(char* x,char* y,int m,int n){
	int lcs[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0)
				lcs[i][j] = 0;
			else if(x[i-1]==y[j-1])
				lcs[i][j] = lcs[i-1][j-1] + 1;
			else
				lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
		}
	}
	cout<<"LCS length: "<<lcs[m][n]<<endl;
	int idx = lcs[m][n];
	char a[idx+1];
    int i=m,j=n;
    a[idx] = '\0';
    while(i>0 && j>0){
    	if(x[i-1] == y[j-1]){
    		a[idx-1] = x[i-1];
    		i--;j--;idx--;
    	}
    	else if(lcs[i-1][j] > lcs[i][j-1])
    		i--;
        else
        	j--;
    }
    cout<<"LCS : "<<a;
}
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	char *x,*y;
	x = &s1[0];
	y = &s2[0];
    dplcs(x,y,s1.length(),s2.length());
	return 0;
}