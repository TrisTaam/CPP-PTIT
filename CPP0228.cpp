#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=15;
int t,n,a[N*4][N*4],cnt,u1,v1,u2,v2,dir1,dir2;
vector<int> b,c;
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};

void change(int &x,int &y,int &dir){
    x+=dx[dir];
    y+=dy[dir];
    if (!a[x][y]){
        x-=dx[dir];
        y-=dy[dir];
        dir=(dir+1)%4;
        x+=dx[dir];
        y+=dy[dir];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        cnt=0;
        foru(i,1,n*4)
            foru(j,1,n*4) a[i][j]=++cnt;
        b.clear();
        c.clear();
        u1=n*4;v1=n*4;dir1=0;
        u2=1;v2=1;dir2=2;
        cnt=0;
        while(cnt<n*n*8){
            b.push_back(a[u1][v1]);
            c.push_back(a[u2][v2]);
            a[u1][v1]=0;
            a[u2][v2]=0;
            change(u1,v1,dir1);
            change(u2,v2,dir2);
            cnt++;
        }
        ford(i,b.size()-1,0) cout << b[i] << " ";
        cout << "\n";
        ford(i,c.size()-1,0) cout << c[i] << " ";
        cout << "\n";
    }
}