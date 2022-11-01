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
int t,n,a[N][N],b[N],c[N],s,tmp,ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        fill(b,0);
        fill(c,0);
        foru(i,0,n-1)
            foru(j,0,n-1){
                cin >> a[i][j];
                b[i]+=a[i][j];
                c[j]+=a[i][j];
            }
        s=INT_MIN;
        foru(i,0,n-1) s=max(s,max(b[i],c[i]));
        ans=0;
        for(int i=0,j=0;i<n&&j<n;){
            tmp=min(s-b[i],s-c[j]);
            b[i]+=tmp;
            c[j]+=tmp;
            ans+=tmp;
            if (b[i]==s) i++;
            if (c[j]==s) j++;
        }
        cout << ans << "\n";
    }
}