#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=305;
int t,n,m;
ll a[N][N],b[3][3],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,n-1)
            foru(j,0,m-1) cin >> a[i][j];
        foru(i,0,2)
            foru(j,0,2) cin >> b[i][j];
        ans=0;
        foru(i,0,n-3)
            foru(j,0,m-3)
                foru(z,i,i+2)
                    foru(p,j,j+2) ans+=a[z][p]*b[z-i][p-j];
        cout << ans << "\n";
    }
}