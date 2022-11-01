#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1005;
int t,n,j,a[N],b[N];
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        sort(a,a+n);
        j=0;
        for(int i=0;i<n;i+=2) b[i]=a[j++];
        for(int i=1;i<n;i+=2) b[i]=a[j++];
        foru(i,0,n-1) cout << b[i] << " ";
        cout << "\n";
    }
}