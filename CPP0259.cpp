#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=55;
int n,m,p,a[N][N],b[N][N],c[N][N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> p;
    foru(i,0,n-1)
        foru(j,0,m-1) cin >> a[i][j];
    foru(i,0,m-1)
        foru(j,0,p-1) cin >> b[i][j];
    foru(i,0,n-1)
        foru(j,0,p-1){
            c[i][j]=0;
            foru(z,0,m-1) c[i][j]+=a[i][z]*b[z][j];
        }
    foru(i,0,n-1){
        foru(j,0,p-1) cout << c[i][j] << " ";
        cout << "\n";
    }
}