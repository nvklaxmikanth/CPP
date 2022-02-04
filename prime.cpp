#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000000
vector<ll> prime(MAX+1,1);
void fillPrime(ll n){
    for(ll i=2;i<=MAX;i++){
        if(prime[i]){
            for(ll p = i*i;i<=MAX;p+=i)
                prime[i] = 0;
        }
    for(ll i=2;i<=MAX;i++){
        if(prime[i]) cout<<i<<" ";
    }
}
int main(){
    ll n;
    cin>>n;
    fillPrime(1);
    // cout<<isprime(n);
    return 0;
}