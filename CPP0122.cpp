#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e6+5;
int t;
ll n,a[N];

ll lcm(ll a,ll b){
    return a*b/__gcd(a,b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    a[1]=1;
    foru(i,2,1000000) a[i]=lcm(a[i-1],i);
    cin >> t;
    while(t--){
        cin >> n;
        cout << a[n] << "\n";
    }
}