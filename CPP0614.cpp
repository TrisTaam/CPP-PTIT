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
    static int NUM_NV;
    friend istream& operator >>(istream &in,NhanVien &a);
    friend ostream& operator <<(ostream &out,NhanVien a);
private:
    string id,name,gender,dob,address,code,date;
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

int NhanVien::NUM_NV=0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
}