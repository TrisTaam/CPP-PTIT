#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,k,n,ans;
string s;
set<char> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        cin >> k;
        n=s.size();
        ans=0;
        foru(i,0,n-1){
            a.clear();
            foru(j,i,n-1){
                a.insert(s[j]);
                if (a.size()==k) ans++;
                else if (a.size()>k) break;
            }
        }
        cout << ans << "\n";
    }
}