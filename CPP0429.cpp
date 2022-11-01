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
int n,k,b,a,cnt,ans;
bool c[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k >> b;
    foru(i,0,b-1){
        cin >> a;
        c[a]=true;
    }
    cnt=0;
    foru(i,1,k) cnt+=c[i];
    ans=cnt;
    foru(i,k+1,n){
        cnt-=(c[i-k]-c[i]);
        ans=min(ans,cnt);
    }
    cout << ans;
}