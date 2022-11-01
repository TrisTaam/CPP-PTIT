#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct PhanSo{
    ll ts,ms;
};

void nhap(PhanSo &a){
    cin >> a.ts >> a.ms;
}

void rutgon(PhanSo &a){
    ll c=__gcd(a.ts,a.ms);
    a.ts/=c;
    a.ms/=c;
}

void in(PhanSo a){
    cout << a.ts << "/" << a.ms;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
}