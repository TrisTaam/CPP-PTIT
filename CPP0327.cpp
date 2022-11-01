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
int t,a[N],n,ans;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    a[0]=1;
    foru(i,1,1000) a[i]=(a[i-1]*2)%5;
    while(t--){
        cin >> s;
        n=s.size();
        ans=0;
        foru(i,0,n-1) ans=(ans+(s[i]-'0')*a[n-i-1])%5;
        cout << (ans==0?"Yes":"No") << "\n";
    }
}