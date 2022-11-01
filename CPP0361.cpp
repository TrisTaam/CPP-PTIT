#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e5+5;
int n,cnt,sz,ans;
string a[N];
pair<string,int> b[N];

bool cmp(string a,string b){
    if (a.size()<b.size()) return true;
    if (a.size()==b.size()&&a<b) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,0,n-1) cin >> a[i];
    sort(a,a+n,cmp);
    cnt=1;
    sz=0;
    foru(i,0,n-2)
        if (a[i]==a[i+1]) cnt++;
        else{
            b[sz++]={a[i],cnt};
            cnt=1;
        }
    b[sz++]={a[n-1],cnt};
    ans=0;
    foru(i,0,sz-1) ans+=b[i].se*(b[i].se-1);
    foru(i,0,sz-2)
        foru(j,i+1,sz-1) ans+=(b[j].fi.find(b[i].fi)!=string::npos)*b[j].se*b[i].se;
    cout << ans << "\n";
}