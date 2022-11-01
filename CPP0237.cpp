#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=25;
int t,n,ans;
char a[N][N];

bool res(int x,int y,int k){
    foru(i,x,x+k-1)
        if (a[i][y]=='O'||a[i][y+k-1]=='O') return false;
    foru(i,y,y+k-1)
        if (a[x][i]=='O'||a[x+k-1][i]=='O') return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1)
            foru(j,0,n-1) cin >> a[i][j];
        ans=0;
        ford(i,n,1){
            foru(j,0,n-i){
                foru(z,0,n-i)
                    if (res(j,z,i)){
                        ans=i;
                        break;
                    }
                if (ans) break;
            }
            if (ans) break;
        }
        cout << ans << "\n";
    }
}