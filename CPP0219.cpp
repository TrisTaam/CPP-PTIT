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
int t,n,m,a[N][N],b[N][N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,n-1)
            foru(j,0,m-1){
                cin >> a[i][j];
                b[i][j]=0;
            }
        foru(i,0,n-1)
            foru(j,0,m-1)
                if (a[i][j]){
                    foru(z,0,n-1) b[z][j]=1;
                    foru(z,0,m-1) b[i][z]=1;
                }
        foru(i,0,n-1){
            foru(j,0,m-1) cout << b[i][j] << " ";
            cout << "\n";
        }
    }
}