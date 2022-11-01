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
int t,n,k,x,a[N],pos,l,r;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        cin >> k >> x;
        pos=lower_bound(a,a+n,x)-a;
        if (a[pos]==x){
            l=pos-1;
            r=pos+1;
        }
        else{
            l=pos-1;
            r=pos;
        }
        ford(i,k/2-1,0) cout << a[l-i] << " ";
        foru(i,0,k/2-1) cout << a[r+i] << " ";
        cout << "\n";
    }
}