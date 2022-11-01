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
ll a,b;

ll tomin(ll n){
    string s=to_string(n);
    foru(i,0,s.size()-1)
        if (s[i]=='6') s[i]='5';
    ll ans=stoll(s);
    return ans;
}

ll tomax(ll n){
    string s=to_string(n);
    foru(i,0,s.size()-1)
        if (s[i]=='5') s[i]='6';
    ll ans=stoll(s);
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << tomin(a)+tomin(b) << " " << tomax(a)+tomax(b) << "\n";
    }
}