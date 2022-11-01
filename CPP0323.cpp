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
string n;
ll m;

ll mod(string n,ll m){
    ll ans=0;
    foru(i,0,n.size()-1) ans=(ans*10+(n[i]-'0'))%m;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        cin >> m;
        cout << mod(n,m) << "\n";
    }
}