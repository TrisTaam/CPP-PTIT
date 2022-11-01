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
const int A=1e5+5;
int t,n,a,b[A],ans;
bool c[A];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        fill(b,0);
        foru(i,1,n){
            fill(c,false);
            foru(j,1,n){
                cin >> a;
                if (!c[a]){
                    b[a]++;
                    c[a]=true;
                }
            }
        }
        ans=0;
        foru(i,1,1e5) ans+=(b[i]==n);
        cout << ans << "\n";
    }
}