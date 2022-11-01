#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,x,a,maxa;
map<int,bool> b;
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> x;
        b.clear();
        maxa=INT_MIN;
        while(n--){
            cin >> a;
            maxa=max(maxa,a);
            b[a]=true;
        }
        kt=false;
        foru(i,1,maxa)
            if (b[i]&&b[i+x]){
                kt=true;
                break;
            }
        cout << (kt?1:-1) << "\n";
    }
}