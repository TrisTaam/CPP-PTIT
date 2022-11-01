#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,m;
ll a,maxa,minb;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> m;
        maxa=LLONG_MIN;
        while(n--){
            cin >> a;
            maxa=max(maxa,a);
        }
        minb=LLONG_MAX;
        while(m--){
            cin >> a;
            minb=min(minb,a);
        }
        cout << maxa*minb << "\n";
    }
}