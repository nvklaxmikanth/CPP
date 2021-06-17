#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s = "1+2+3+4+5+6+7";
	int n = s.length();
	char* a = &s[0];
	char* token = strtok(a,"+");
	while(token != NULL){
		cout<<stoi(token)*10<<endl;
		token = strtok(NULL,"+");
	}
	return 0;
}