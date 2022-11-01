#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int A=1005;
int t,n,a,maxa,mina;
set<int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b.clear();
        maxa=INT_MIN;
        mina=INT_MAX;
        while(n--){
            cin >> a;
            b.insert(a);
            maxa=max(maxa,a);
            mina=min(mina,a);
        }
        cout << maxa-mina+1-b.size() << "\n";
    }
}