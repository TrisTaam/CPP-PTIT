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
const int M=15;
int n,m,a[N][N],b[M][M];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,0,n-1)
        foru(j,0,n-1) cin >> a[i][j];
    cin >> m;
    foru(i,0,m-1)
        foru(j,0,m-1) cin >> b[i][j];
    for(int i=0;i<n;i+=m)
        for(int j=0;j<n;j+=m)
            foru(z,i,i+m-1)
                foru(t,j,j+m-1) a[z][t]*=b[z-i][t-j];
    foru(i,0,n-1){
        foru(j,0,n-1) cout << a[i][j] << " ";
        cout << "\n";
    }
}