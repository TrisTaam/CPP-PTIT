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
int t,n,m,a[N][N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1)
            foru(j,0,n-1) cin >> a[i][j];
        foru(i,0,n-1){
            foru(j,0,n-1)
                if (i==0||i==n-1||j==0||j==n-1) cout << a[i][j] << " ";
                else cout << "  ";
            cout << "\n";
        }
    }
}