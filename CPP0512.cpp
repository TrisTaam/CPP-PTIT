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
    ll tu,mau;
};

void rutgon(PhanSo &a){
    ll c=__gcd(a.tu,a.mau);
    a.tu/=c;
    a.mau/=c;
}

PhanSo add(PhanSo a,PhanSo b){
    rutgon(a);
    rutgon(b);
    PhanSo c;
    c.mau=a.mau*b.mau;
    c.tu=a.tu*b.mau+a.mau*b.tu;
    rutgon(c);
    return c;
}

PhanSo multi(PhanSo a,PhanSo b){
    rutgon(a);
    rutgon(b);
    PhanSo c;
    c.tu=a.tu*b.tu;
    c.mau=a.mau*b.mau;
    rutgon(c);
    return c;
}

void display(PhanSo a){
    cout << a.tu << "/" << a.mau << " ";
}

void process(PhanSo a, PhanSo b){
    PhanSo c=add(a,b);
    c=multi(c,c);
    display(c);
    display(multi(multi(a,b),c));
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}