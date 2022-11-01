#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e6+5;
int t,n,a[N],ans,cnt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        ans=0;
        cnt=1;
        foru(i,0,n-2)
            if (a[i]==a[i+1]) cnt++;
            else{
                if (cnt>1) ans+=cnt;
                cnt=1;
            }
        if (cnt>1) ans+=cnt;
        cout << ans << "\n";
    }
}