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
int t,n,k,a[N],cnt1,cnt2,ans;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        cnt1=0;
        foru(i,0,n-1){
            cin >> a[i];
            cnt1+=(a[i]<=k);
        }
        cnt2=0;
        foru(i,0,cnt1-1) cnt2+=(a[i]>k);
        ans=cnt2;
        for(int i=0,j=cnt1;j<n;++i,++j){
            if (a[i]>k) cnt2--;
            if (a[j]>k) cnt2++;
            ans=min(ans,cnt2);
        }
        cout << ans << "\n";
    }
}