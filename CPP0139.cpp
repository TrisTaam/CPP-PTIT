#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,s1,s2;

bool nt(int n){
    if (n<2) return false;
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return false;
    return true;
}

int tongcs(int n){
    int ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        if (nt(n)) cout << "NO";
        else{
            s1=tongcs(n);
            s2=0;
            for(int i=2;i*i<=n;++i)
                while(n%i==0){
                    s2+=tongcs(i);
                    n/=i;
                }
            if (n>1) s2+=tongcs(n);
            cout << (s1==s2?"YES":"NO");
        }
        cout << "\n";
    }
}