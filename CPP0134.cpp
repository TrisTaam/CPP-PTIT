#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,k;
vector<int> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        a.clear();
        for(int i=2;i*i<=n;++i)
            while(n%i==0){
                a.push_back(i);
                n/=i;
            }
        if (n>1) a.push_back(n);
        cout << (k>a.size()?-1:a[k-1]) << "\n";
    }
}