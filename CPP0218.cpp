#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))
 
const int N=1e5+5;
int t,n,a[N],b,ans;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        b=a[1]-a[0];
        foru(i,1,n-2) b=__gcd(b,a[i+1]-a[i]);
        ans=0;
        for(int i=1;i*i<=b;++i)
            if (b%i==0){
                ans++;
                if (i!=b/i) ans++;
            }
        cout << ans << "\n";
    }
} 