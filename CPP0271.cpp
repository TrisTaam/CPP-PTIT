#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=505;
int t,n,m,l,a[N][N],b[N][N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m >> l;
        foru(i,0,n+1)
            foru(j,0,m+1) b[i][j]=0;
        foru(i,1,n)
            foru(j,1,m){
                cin >> a[i][j];
                b[i][j]=a[i][j]+b[i-1][j]+b[i][j-1]-b[i-1][j-1];
            }
        foru(i,1,n-l+1){
            foru(j,1,m-l+1) cout << (b[i+l-1][j+l-1]-b[i-1][j+l-1]-b[i+l-1][j-1]+b[i-1][j-1])/(l*l) << " ";
            cout << "\n";
        }
    }
}