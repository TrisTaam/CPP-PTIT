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
int t,n,m;
char a[N][N];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

void dfs1(int x,int y){
    a[x][y]='.';
    int u,v;
    foru(i,0,3){
        u=x+dx[i];
        v=y+dy[i];
        if (u>0&&u<=n&&v>0&&v<=m&&a[u][v]=='O') dfs1(u,v);
    }
}

void dfs2(int x,int y){
    a[x][y]='X';
    int u,v;
    foru(i,0,3){
        u=x+dx[i];
        v=y+dy[i];
        if (u>0&&u<=n&&v>0&&v<=m&&a[u][v]=='O') dfs2(u,v);
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
        foru(i,1,n)
            if (a[i][1]=='O') dfs1(i,1);
        foru(i,1,n)
            if (a[i][m]=='O') dfs1(i,m);
        foru(i,1,m)
            if (a[1][i]=='O') dfs1(1,i);
        foru(i,1,m)
            if (a[n][i]=='O') dfs1(n,i);
        foru(i,1,n)
            foru(j,1,m)
                if (a[i][j]=='O') dfs2(i,j);
        foru(i,1,n)
            foru(j,1,m)
                if (a[i][j]=='.') a[i][j]='O';
        foru(i,1,n){
            foru(j,1,m) cout << a[i][j] << " ";
            cout << "\n";
        }
    }
}