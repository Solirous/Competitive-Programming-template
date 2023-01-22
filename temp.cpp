#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define FIO cin.tie(0)->sync_with_stdio(0)
#define pb push_back
#define FORN(i,n) for(int i=0;i<n;i++)
int gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
int lcm(ll a,ll b) { return a/gcd(a,b)*b; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }


/*
COMPILE SETTINGS 
*/



int t;
void slv(){
    //code here
}


main(){
    FIO;
    if(t==0){
    cin>>t;
    }
    while(t--){
        #ifdef SOLIROUS_PC
        cout<<"Case #"<<t+1<<"\n";
        #endif
        slv();
    }
}