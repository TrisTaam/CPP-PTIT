#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e7+5;
int t,n,a[N],min1,min2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        min1=INT_MAX;
        foru(i,0,n-1){
            cin >> a[i];
            min1=min(min1,a[i]);
        }
        min2=INT_MAX;
        foru(i,0,n-1)
            if (a[i]>min1) min2=min(min2,a[i]);
        if (min2==INT_MAX) cout << -1;
        else cout << min1 << " " << min2;
        cout << "\n";
    }
}