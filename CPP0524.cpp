#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct SinhVien{
    string id,name,cls;
    double a,b,c;
};

int cnt;

void nhap(SinhVien &x){
    cin >> x.id;
    cin.ignore();
    getline(cin,x.name);
    cin >> x.cls;
    cin >> x.a >> x.b >> x.c;
}

bool cmp(SinhVien u,SinhVien v){
    return u.id<v.id;
}

void sap_xep(SinhVien *x,int n){
    sort(x,x+n,cmp);
}

void in(SinhVien x){
    cout << ++cnt << " " << x.id << " " << x.name << " " << x.cls << " " << x.a << " " << x.b << " " << x.c << "\n";
}

void in_ds(SinhVien *x,int n){
    cout << setprecision(1) << fixed;
    foru(i,0,n-1) in(x[i]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}