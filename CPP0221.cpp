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
int t,n,m,a[N][N],p,q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,1,n)
            foru(j,1,m) cin >> a[i][j];
        p=min(n,m);
        foru(i,1,p/2){
            q=a[i][i];
            foru(j,i,n-i) a[j][i]=a[j+1][i];
            foru(j,i,m-i) a[n-i+1][j]=a[n-i+1][j+1];
            ford(j,n-i+1,i+1) a[j][m-i+1]=a[j-1][m-i+1];
            ford(j,m-i+1,i+1) a[i][j]=a[i][j-1];
            a[i][i+1]=q;
        }
        if (n!=m){
            q=a[p+1][p+1];
            foru(i,p+1,n-p-1) a[p+1][i]=a[p+1][i+1];
            a[p+1][n-p]=q;
        }
        foru(i,1,n)
            foru(j,1,m) cout << a[i][j] << " ";
        cout << "\n";
    }
}