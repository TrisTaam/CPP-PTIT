#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t;
string s;
ll a,b,m;

ll mod(string n,ll m){
    ll ans=0;
    foru(i,0,n.size()-1) ans=(ans*10+(n[i]-'0'))%m;
    return ans;
}

ll multi(ll a,ll b,ll c){
    if (!b) return 0;
    ll d=multi(a,b/2,c);
    d=(d*2)%c;
    if (b&1) return (d+a)%c;
    return d;
}

ll pow(ll a,ll b,ll c){
    if (!b) return 1;
    ll d=pow(a,b/2,c);
    d=multi(d,d,c);
    if (b&1) return (d*a)%c;
    return d;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s >> b >> m;
        a=mod(s,m);
        cout << pow(a,b,m) << "\n";
    }
}