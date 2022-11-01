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
int t,n,m,a,x,y,dir;
int c[N][N];
vector<int> b;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,1,n)
        foru(j,1,n){
            cin >> a;
            b.push_back(a);
        }
    sort(b.begin(),b.end());
    foru(i,0,n+1){
        c[i][0]=-1;
        c[i][n+1]=-1;
        c[0][i]=-1;
        c[n+1][i]=-1;
    }
    x=1;
    y=1;
    dir=0;
    foru(i,0,n*n-1){
        c[x][y]=b[i];
        x+=dx[dir];
        y+=dy[dir];
        if (c[x][y]){
            x-=dx[dir];
            y-=dy[dir];
            dir=(dir+1)%4;
            x+=dx[dir];
            y+=dy[dir];
        }
    }
    foru(i,1,n){
        foru(j,1,n) cout << c[i][j] << " ";
        cout << "\n";
    }
}