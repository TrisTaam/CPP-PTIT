#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=20;
int t,n,m,ans;
double a[N][N],tmp;
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,n-1)
            foru(j,0,m-1) cin >> a[i][j];
        foru(i,0,n-2)
            if (a[i][i])
                foru(j,i+1,n-1){
                    tmp=a[j][i]/a[i][i];
                    foru(z,i,m-1) a[j][z]-=a[i][z]*tmp;
                }
        ans=m;
        foru(i,0,n-1){
            kt=true;
            foru(j,0,m-1)
                if (a[i][j]){
                    kt=false;
                    break;
                }
            ans-=kt;
        }
        cout << ans << "\n";
    }
}