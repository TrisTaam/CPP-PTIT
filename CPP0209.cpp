#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e4+5;
int t,n,q,a[N],b[N],l,r;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> q;
        b[0]=0;
        foru(i,1,n){
            cin >> a[i];
            b[i]=b[i-1]+a[i];
        }
        while(q--){
            cin >> l >> r;
            cout << b[r]-b[l-1] << "\n";
        }
    }
}