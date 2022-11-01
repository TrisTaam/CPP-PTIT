#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,tmp,ans;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        tmp=0;
        ans=0;
        for(char x:s)
            if (isdigit(x)) tmp=tmp*10+x-'0';
            else{
                ans=max(ans,tmp);
                tmp=0;
            }
        ans+=tmp;
        cout << ans << "\n";
    }
}