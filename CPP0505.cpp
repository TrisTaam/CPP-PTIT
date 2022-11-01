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
    string id,name,gender,dob,address,code,date;
};

void chuanhoa(string &s){
    int b=s.find("/");
    if (b==1) s.insert(0,"0");
    b=s.find("/",3);
    if (b==4) s.insert(3,"0");
}

void nhap(NhanVien &a){
    a.id="00001";
    getline(cin,a.name);
    cin >> a.gender;
    cin >> a.dob;
    chuanhoa(a.dob);
    cin.ignore();
    getline(cin,a.address);
    cin >> a.code;
    cin >> a.date;
    chuanhoa(a.date);
}

void in(NhanVien a){
    cout << a.id << " " << a.name << " " << a.gender << " " << a.dob << " " << a.address << " " << a.code << " " << a.date;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}