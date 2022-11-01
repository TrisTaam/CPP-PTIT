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
string s;

int res(string s,int m){
    int n=s.size(),a,ans=0;
    foru(i,0,n-1){
        a=0;
        foru(j,i,n-1){
            a=(a*10+s[j]-'0')%m;
            ans+=(a==0);
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        cout << res(s,8)-res(s,24) << "\n";
    }
}