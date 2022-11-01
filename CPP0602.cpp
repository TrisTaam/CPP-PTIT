#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

class SinhVien{
public:
    friend istream& operator >>(istream &in,SinhVien &a);
    friend ostream& operator <<(ostream &out,SinhVien a);

private:
    string id,name,cls,dob;
    double gpa;
};

istream& operator >>(istream &in,SinhVien &a){
    a.id="B20DCCN001";
    getline(in,a.name);
    in >> a.cls;
    in >> a.dob;
    if (a.dob[1]=='/') a.dob.insert(0,"0");
    if (a.dob[4]=='/') a.dob.insert(3,"0");
    in >> a.gpa;
    return in;
}

ostream& operator <<(ostream &out,SinhVien a){
    out << a.id << " " << a.name << " " << a.cls << " " << a.dob << " " << setprecision(2) << fixed << a.gpa;
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}