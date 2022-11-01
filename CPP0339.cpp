#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,a[256],ans;
string s;

int res(int n){
    return n*(n-1)/2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        fill(a,0);
        for(char x:s) a[x]++;
        ans=s.size();
        foru(i,'a','z') ans+=res(a[i]);
        cout << ans << "\n";
    }
}