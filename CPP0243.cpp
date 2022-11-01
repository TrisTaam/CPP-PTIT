#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e6+5;
int t,n,m,a[N],b[N];
map<int,int> c;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        c.clear();
        foru(i,0,n-1){
            cin >> a[i];
            c[a[i]]++;
        }
        sort(a,a+n);
        foru(i,0,m-1){
            cin >> b[i];
            foru(j,1,c[b[i]]) cout << b[i] << " ";
            c[b[i]]=0;
        }
        foru(i,0,n-1)
            if (c[a[i]]) cout << a[i] << " ";
        cout << "\n";
    }
}