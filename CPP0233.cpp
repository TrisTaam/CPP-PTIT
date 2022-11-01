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
int t,n,m,a[N][N],c[N*N],x,y,dir;
bool b[N][N];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n)
            foru(j,1,m){
                cin >> a[i][j];
                b[i][j]=false;
            }
        foru(i,0,n+1){
            b[i][0]=true;
            b[i][m+1]=true;
        }
        foru(i,0,m+1){
            b[0][i]=true;
            b[n+1][i]=true;
        }
        x=1;
        y=1;
        dir=0;
        foru(i,1,n*m){
            c[i]=a[x][y];
            b[x][y]=true;
            x+=dx[dir];
            y+=dy[dir];
            if (b[x][y]){
                x-=dx[dir];
                y-=dy[dir];
                dir=(dir+1)%4;
                x+=dx[dir];
                y+=dy[dir];
            }
        }
        ford(i,n*m,1) cout << c[i] << " ";
        cout << "\n";
    }
}