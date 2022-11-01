#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int du=1e9+7;
const int N=65;
int t,n;
ll a[N],b,c;

ll pow(ll a,ll b){
    if (!b) return 1;
    ll c=pow(a,b/2);
    c=(c*c)%du;
    if (b&1) return (c*a)%du;
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b=1;
        foru(i,0,n-1){
            cin >> a[i];
            b=(b*a[i])%du;
        }
        c=a[0];
        foru(i,1,n-1) c=__gcd(c,a[i]);
        cout << pow(b,c) << "\n";
    }
}