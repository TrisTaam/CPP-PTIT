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
int t,n,a[N],b[N],l,r;

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
        l=0;
        while(l<n&&a[l]==b[l]) l++;
        r=n-1;
        while(r>=0&&a[r]==b[r]) r--;
        cout << l+1 << " " << r+1 << "\n";
    }
}