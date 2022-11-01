#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=405;
int n,a[N][N],x,y,k,ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,0,n-1)
        foru(j,0,n-1) cin >> a[i][j];
    ans=0;
    foru(i,0,n-1)
        foru(j,0,n-1){
            x=y=k=0;
            while(i-k>=0&&j-k>=0&&i+k<n&&j+k<n){
                x+=(a[i-k][j-k]+a[i+k][j+k]);
                y+=(a[i-k][j+k]+a[i+k][j-k]);
                ans=max(ans,x-y);
                k++;
            }
            x=y=k=0;
            while(i-k>=0&&j-k>=0&&i+k+1<n&&j+k+1<n){
                x+=(a[i-k][j-k]+a[i+k+1][j+k+1]);
                y+=(a[i-k][j+k+1]+a[i+k+1][j-k]);
                ans=max(ans,x-y);
                k++;
            }
        }
    cout << ans;
}