#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=100;
int t,n;
ll a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    a[1]=a[2]=1;
    foru(i,3,92) a[i]=a[i-1]+a[i-2];
    while(t--){
        cin >> n;
        cout << a[n] << "\n";
    }
}