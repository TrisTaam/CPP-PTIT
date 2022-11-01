#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=2005;
const int du=1e9+7;
int t,n;
ll x,a,b[N],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> x;
        b[0]=1;
        foru(i,1,n-1) b[i]=(b[i-1]*x)%du;
        ans=0;
        ford(i,n-1,0){
            cin >> a;
            ans=(ans+(a*b[i])%du)%du;
        }
        cout << ans << "\n";
    }
}