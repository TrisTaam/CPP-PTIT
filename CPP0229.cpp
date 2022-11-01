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
int t,n,m,a[N][N],x,y,dir,cnt;
int dx[2]={-1,1};
int dy[2]={1,-1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n)
            foru(j,1,m) cin >> a[i][j];
        x=1;
        y=1;
        cout << a[1][1] << " ";
        while(x<=n&&y<=m){
            if (y<m) y++;
            else x++;
            while(x<=n&&y>=1){
                cout << a[x][y] << " ";
                x++;
                y--;
            }
            x--;
            y++;
            if (x<n) x++;
            else y++;
            while(x>=1&&y<=m){
                cout << a[x][y] << " ";
                x--;
                y++;
            }
            x++;
            y--;
        }
        cout << "\n";
    }
}