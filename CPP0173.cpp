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
ll x,y,z,n,p,q,r;
 
ll lcm(ll a,ll b){
    return a*b/__gcd(a,b);
}
 
int len(ll n){
    string s=to_string(n);
    return s.size();
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> x >> y >> z >> n;
        p=lcm(x,lcm(y,z));
        if (len(p)>n) cout << -1;
        else{
            q=1;
            foru(i,1,n-1) q*=10;
            r=q/p;
            if (q%p) r++;
            p*=r;
            cout << (len(p)==n?p:-1);
        }
        cout << "\n";
    }
} 