#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(ll i=a;i<=b;++i)
#define ford(i,b,a) for(ll i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))
 
int t;
ll b,p,x,ans;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> b >> p;
        ans=0;
        foru(i,1,p)
            if (i*i%p==1){
                x=i+p*(b/p);
                if (x>b) x-=p;
                ans+=((x-i)/p+1);
            }
        cout << ans << "\n";
    }
}