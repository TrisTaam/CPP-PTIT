#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e5+5;
int t,n,m,a[N],b[N],l,r;
set<int> c;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        c.clear();
        foru(i,0,n-1){
            cin >> a[i];
            c.insert(a[i]);
        }
        foru(i,0,m-1){
            cin >> b[i];
            c.insert(b[i]);
        }
        for(int x:c) cout << x << " ";
        sort(a,a+n);
        sort(b,b+m);
        cout << "\n";
        foru(i,0,n-1)
            if (binary_search(b,b+m,a[i])) cout << a[i] << " ";
        cout << "\n";
    }
}