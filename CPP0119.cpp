#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        ans=0;
        for(int i=1;i*i<=n;++i)
            if (n%i==0){
                ans+=(i%2==0);
                if (i!=n/i) ans+=((n/i)%2==0);
            }
        cout << ans << "\n";
    }
}