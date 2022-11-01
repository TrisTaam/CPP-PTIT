#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,p,tmp,ans;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> p;
        ans=0;
        foru(i,2,n){
            tmp=i;
            while(tmp%p==0){
                ans++;
                tmp/=p;
            }
        }
        cout << ans << "\n";
    }
}  