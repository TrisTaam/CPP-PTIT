#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

class NhanVien{
public:
    string id,name,gender,dob,address,code,date;
    static int NUM_NV;
    friend istream& operator >>(istream &in,NhanVien &a);
    friend ostream& operator <<(ostream &out,NhanVien a);
};

istream& operator >>(istream &in,NhanVien &a){
    a.id=to_string(++NhanVien::NUM_NV);
    while(a.id.size()<5) a.id="0"+a.id;
    in.ignore();
    getline(in,a.name);
    in >> a.gender;
    in >> a.dob;
    in.ignore();
    getline(in,a.address);
    in >> a.code;
    in >> a.date;
    return in;
}

ostream& operator <<(ostream &out,NhanVien a){
    out << a.id << " " << a.name << " " << a.gender << " " << a.dob << " " << a.address << " " << a.code << " " << a.date << "\n";
    return out;
}

bool cmp(NhanVien a,NhanVien b){
    string s1="";
    foru(i,a.dob.size()-4,a.dob.size()-1) s1+=a.dob[i];
    foru(i,a.dob.size()-10,a.dob.size()-9) s1+=a.dob[i];
    foru(i,a.dob.size()-7,a.dob.size()-6) s1+=a.dob[i];
    string s2="";
    foru(i,b.dob.size()-4,b.dob.size()-1) s2+=b.dob[i];
    foru(i,b.dob.size()-10,b.dob.size()-9) s2+=b.dob[i];
    foru(i,b.dob.size()-7,b.dob.size()-6) s2+=b.dob[i];
    return s1<s2;
}

void sapxep(NhanVien a[50],int n){
    sort(a,a+n,cmp);
}

int NhanVien::NUM_NV=0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
}