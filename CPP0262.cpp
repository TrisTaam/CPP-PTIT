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
ll n,m,s,a,b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        s=n*(n+1)/2;
        if ((s+m)%2==1) cout << "No";
        else{
            a=(s+m)/2;
            b=s-a;
            cout << (__gcd(a,b)==1?"Yes":"No"); 
        }
        cout << "\n";
    }
}