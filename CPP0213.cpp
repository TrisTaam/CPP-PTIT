#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=105;
int t,n;
ll a,b[N];
 
bool check(ll n){
    foru(i,0,92)
        if (b[i]==n) return true;
    return false;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    b[0]=0;
    b[1]=1;
    foru(i,2,92) b[i]=b[i-1]+b[i-2];
    while(t--){
        cin >> n;
        while(n--){
            cin >> a;
            if (check(a)) cout << a << " ";
        }
        cout << "\n";
    }
}