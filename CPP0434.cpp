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
int t,n,a[N],b[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        if (n==1) cout << a[0];
        else{
            b[0]=a[0]*a[1];
            b[n-1]=a[n-1]*a[n-2];
            foru(i,1,n-2) b[i]=a[i-1]*a[i+1];
            foru(i,0,n-1) cout << b[i] << " ";
        }
        cout << "\n";
    }
}