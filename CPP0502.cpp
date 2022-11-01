#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct ThiSinh{
    string name,dob;
    double a,b,c,s;
};

void nhap(ThiSinh &x){
    getline(cin,x.name);
    cin >> x.dob;
    cin >> x.a >> x.b >> x.c;
    x.s=x.a+x.b+x.c;
}

void in(ThiSinh x){
    cout << x.name << " " << x.dob << " " << setprecision(1) << fixed << x.s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}