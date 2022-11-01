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
int t,n,m,a[N][N],ans,l[N],r[N];
stack<int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i,0,n-1)
            foru(j,0,m-1) cin >> a[i][j];
        foru(i,0,m-1)
            foru(j,1,n-1)
                if (a[j][i]) a[j][i]=a[j-1][i]+1;
        ans=0;
        foru(i,0,n-1){
            sort(a[i],a[i]+m);
            b=stack<int>{};
            foru(j,0,m-1){
                while(!b.empty()&&a[i][j]<=a[i][b.top()]) b.pop();
                if (b.empty()) l[j]=0;
                else l[j]=b.top()+1;
                b.push(j);
            }
            b=stack<int>{};
            ford(j,m-1,0){
                while(!b.empty()&&a[i][j]<=a[i][b.top()]) b.pop();
                if (b.empty()) r[j]=m-1;
                else r[j]=b.top()-1;
                b.push(j);
            }
            foru(j,0,m-1) ans=max(ans,(r[j]-l[j]+1)*a[i][j]);
        }
        cout << ans << "\n";
    }
}