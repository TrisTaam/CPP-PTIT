#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,k,cnt;
string s;
bool a[256];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        cin >> k;
        fill(a,0);
        for(char x:s) a[x]=true;
        cnt=0;
        foru(i,'a','z') cnt+=(!a[i]);
        cout << (cnt<=k) << "\n";
    }
}