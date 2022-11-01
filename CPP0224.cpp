#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=105;
int t,n,m,a[N][N],ans;
int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={-1,0,1,1,1,0,-1,-1};

void dfs(int x,int y){
    a[x][y]=0;
    int u,v;
    foru(i,0,7){
        u=x+dx[i];
        v=y+dy[i];
        if (u>0&&u<=n&&v>0&&v<=m&&a[u][v]) dfs(u,v);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n)
            foru(j,1,m) cin >> a[i][j];
        ans=0;
        foru(i,1,n)
            foru(j,1,m)
                if (a[i][j]){
                    ans++;
                    dfs(i,j);
                }
        cout << ans << "\n";
    }
}