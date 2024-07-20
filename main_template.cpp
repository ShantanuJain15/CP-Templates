#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second

typedef long long ll;
typedef unsigned long ull;
typedef long long int  lli;
// typedef __int128 xll;

template<class T> void _print(T t){cerr<<t;}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}


ll power(ll x, ll y,ll mod) {  ll ans =1ll; while(y>0){ if(y&1)ans=(ans*x)%mod; x=(x*x)%mod;y=y>>1;} return ans;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
vector<ll> sieve(int n){vector <ll> prime; vector<bool> is_prime(n+1, true);is_prime[0] = is_prime[1] = false; for (int i = 2; i  <= n; i++) {if (is_prime[i] ){prime.pb(i); if( (ll)i * i <= n)  for(int j = i * i; j <= n; j += i) is_prime[j] = false;}} return prime;}
ll modinverse(ll a,ll p){return power(a,p-2,p);}// p can only be a prime number.

void solve(){
    return;
}
int main(){
    fastio();
    int tc;
    cin >>tc;
     while(tc--)solve();
}
