#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t;
ll n,k,a,b;
 
ll res(ll a,ll b){
    return (b-a+1)*(a+b)/2;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        a=n/k;
        b=n%k;
        cout << (a+1)*res(1,b)+a*res(b+1,k-1) << "\n";
    }
}