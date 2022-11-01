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
int t,n,a[N],b[N],pos;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        foru(i,0,n-1){
            pos=upper_bound(a,a+n,b[i])-a;
            if (pos==n) cout << "_ ";
            else cout << a[pos] << " ";
        }
        cout << "\n";
    }
}