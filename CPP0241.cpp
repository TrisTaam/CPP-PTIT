#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1005;
int t,n,a[N],l,r,ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        l=0;
        r=n-1;
        ans=0;
        while(l<r){
            if (a[l]==a[r]){
                l++;
                r--;
            }
            else if (a[l]<a[r]){
                a[l+1]+=a[l];
                l++;
                ans++;
            }
            else{
                a[r-1]+=a[r];
                r--;
                ans++;
            }
        }
        cout << ans << "\n";
    }
}