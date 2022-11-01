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

void in(PhanSo a){
    cout << a.ts << "/" << a.ms;
}

void rutgon(PhanSo &a){
    ll c=__gcd(a.ts,a.ms);
    a.ts/=c;
    a.ms/=c;
}

PhanSo tong(PhanSo a,PhanSo b){
    PhanSo c;
    rutgon(a);
    rutgon(b);
    c.ms=a.ms*b.ms;
    c.ts=a.ts*b.ms+a.ms*b.ts;
    rutgon(c);
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
}