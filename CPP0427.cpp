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
int t,n,a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        foru(i,0,n-2)
            if (a[i]==a[i+1]){
                a[i]*=2;
                a[i+1]=0;
            }
        foru(i,0,n-1)
            if (a[i]) cout << a[i] << " ";
        foru(i,0,n-1)
            if (!a[i]) cout << "0 ";
        cout << "\n";
    }
}