#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e3+5;
int t,n,a[N],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        ans=INT_MAX;
        foru(i,0,n-2)
            foru(j,i+1,n-1)
                if (abs(ans)>abs(a[i]+a[j])) ans=a[i]+a[j];
        cout << ans << "\n";
    }
}