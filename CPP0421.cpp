#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e7+5;
int t,n;
ll a;
set<ll> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b.clear();
        foru(i,0,n-1){
            cin >> a;
            b.insert(a);
        }
        foru(i,0,n-1)
            if (b.find(i)!=b.end()) cout << i << " ";
            else cout << "-1 ";
        cout << "\n";
    }
}