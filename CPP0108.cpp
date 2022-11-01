#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,a[10],ans;

bool nt(int n){
    if (n<2) return false;
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return false;
    return true;
}

bool res1(int n){
    int b=n%10,c;
    n/=10;
    while(n){
        c=n%10;
        if (b<=c) return false;
        b=c;
        n/=10;
    }
    return true;
}

bool res2(int n){
    int b=n%10,c;
    n/=10;
    while(n){
        c=n%10;
        if (b>=c) return false;
        b=c;
        n/=10;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    a[0]=1;
    foru(i,1,9) a[i]=a[i-1]*10;
    while(t--){
        cin >> n;
        ans=0;
        foru(i,a[n-1],a[n]-1)
            if (res1(i)) ans+=nt(i);
            else if (res2(i)) ans+=nt(i);
        cout << ans << "\n";
    }
}