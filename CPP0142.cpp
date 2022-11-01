#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,ans;

bool nt(int n){
    if (n<2) return false;
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        ans=n;
        for(int i=2;i*i<=n;++i)
            if (n%i==0){
                while(n%i==0) n/=i;
                ans/=i;
                ans*=(i-1);
            }
        if (n>1){
            ans/=n;
            ans*=(n-1);
        }
        cout << nt(ans) << "\n";
    }
}