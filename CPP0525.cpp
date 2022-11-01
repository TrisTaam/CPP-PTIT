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

const int N=105;
int n;
SinhVien x[N];

bool cmp(SinhVien u,SinhVien v){
    return u.name<v.name;
}

int main(){
    cin >> n;
    foru(i,0,n-1){
        cin.ignore();
        getline(cin,x[i].id);
        getline(cin,x[i].name);
        getline(cin,x[i].cls);
        cin >> x[i].a >> x[i].b >> x[i].c;
    }
    sort(x,x+n,cmp);
    cout << setprecision(1) << fixed;
	foru(i,0,n-1){
        cout << i+1 << " " << x[i].id << " " << x[i].name << " " << x[i].cls << " ";
        printf("%.1lf %.1lf %.1lf\n",x[i].a,x[i].b,x[i].c);
    }
}