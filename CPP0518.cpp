#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct NhanVien{
    string id,name,gender,dob,address,code,date,d,m,y;
};

int cnt;

bool cmp(NhanVien a,NhanVien b){
    if(a.y==b.y){
        if(a.d==b.d) return a.m<b.m;
        else return a.d<b.d;
    }
    return a.y<b.y;
}

void nhap(NhanVien &p){
    cin.ignore();
    getline(cin,p.name);
    cin >> p.gender >> p.dob;
    cin.ignore();
    getline(cin, p.address);
    cin >> p.code >> p.date;
    if(p.dob[1]=='/') p.dob="0"+p.dob;
    if(p.dob[4]=='/') p.dob.insert(p.dob.begin()+3,'0');
    p.d+=p.dob[0];p.d+=p.dob[1];
    p.m+=p.dob[3];p.m+=p.dob[4];
    p.y+=p.dob[6];p.y+=p.dob[7];
    p.y+=p.dob[8];p.y+=p.dob[9];
    if(p.date[1]=='/') p.date="0"+p.date;
    if(p.date[4]=='/') p.date.insert(p.date.begin()+3,'0');
    cnt++;
    if(cnt>9) p.id="000"+to_string(cnt);
    else p.id="0000"+to_string(cnt);
}
void sapxep(NhanVien p[],int n){
    sort(p,p+n,cmp);
}
void inds(NhanVien p[],int n){
    foru(i,0,n-1) cout << p[i].id << " " << p[i].name << " "<< p[i].gender << " " << p[i].dob << " " <<p[i].address << " " << p[i].code << " " << p[i].date << "\n";
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}