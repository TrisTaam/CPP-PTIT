#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int n,cnt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=2;i*i<=n;++i){
        cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if (cnt) cout << i << " " << cnt << "\n";
    }
    if (n>1) cout << n << " 1";
}