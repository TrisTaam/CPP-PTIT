#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n;

bool res(int n){
    int cnt,ans=0;
    for(int i=2;i*i<=n;++i){
        cnt=0;
        while(n%i==0){
            cnt++;
            if (cnt>1) return false;
            n/=i;
        }
        if (cnt==1) ans++;
        if (ans>3) return false;
    }
    if (n>1) ans++;
    return (ans==3);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        cout << res(n) << "\n";
    }
}