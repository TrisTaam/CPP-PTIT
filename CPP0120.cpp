#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,m,n,a,b,c;

int res(int m,int n,int a){
    int x=m/a;
    if (m%a) x++;
    int y=n/a;
    return y-x+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> m >> n >> a >> b;
        c=a*b/__gcd(a,b);
        cout << res(m,n,a)+res(m,n,b)-res(m,n,c) << "\n";
    }
}