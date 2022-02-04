#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll countFactors(ll n){
    ll res = 1;
    for(ll i=2;i*i<=n;i++){
        ll count = 0;
        while(n%i == 0){
            count++;
            n = n/i;
        }
        res = res*(count+1);
    }
    if(n >= 2) res = res*2;
    return res;
}
int main(){
    ll n;
    cin>>n;
    cout<<countFactors(n);
    return 0;
}