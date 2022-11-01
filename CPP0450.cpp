#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e3+5;
const int A=1e6+5;
int t,n,a,ans;
bool b[A];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        fill(b,false);
        ans=-1;
        foru(i,1,n){
            cin >> a;
            if (b[a]&&ans==-1) ans=a;
            b[a]=true;
        }
        cout << ans << "\n";
    }
}