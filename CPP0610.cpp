#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

class PhanSo{
public:
    PhanSo();
    PhanSo(ll tu,ll mau);
    friend istream& operator >>(istream &in,PhanSo &a);
    friend ostream& operator <<(ostream &out,PhanSo a);
    void rutgon();
    friend PhanSo operator +(PhanSo a,PhanSo b);
private:
    ll tu,mau;
};

PhanSo::PhanSo(){}

PhanSo::PhanSo(ll tu,ll mau){
    this->tu=tu;
    this->mau=mau;
}

istream& operator >>(istream &in,PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}

ostream& operator <<(ostream &out,PhanSo a){
    out << a.tu << "/" << a.mau;
    return out;
}

void PhanSo::rutgon(){
    ll a=__gcd(tu,mau);
    tu/=a;
    mau/=a;
}

PhanSo operator +(PhanSo a,PhanSo b){
    a.rutgon();
    b.rutgon();
    PhanSo c;
    c.tu=a.tu*b.mau+a.mau*b.tu;
    c.mau=a.mau*b.mau;
    c.rutgon();
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
}