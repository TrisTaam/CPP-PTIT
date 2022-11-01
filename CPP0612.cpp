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
    SinhVien();
    static int NUM_SV;
    friend istream& operator >>(istream &in,SinhVien &a);
    friend ostream& operator <<(ostream &out,SinhVien a);

private:
    string id,name,cls,dob;
    double gpa;
};

SinhVien::SinhVien(){}

istream& operator >>(istream &in,SinhVien &a){
    a.id=to_string(++SinhVien::NUM_SV);
    while(a.id.size()<3) a.id="0"+a.id;
    a.id="B20DCCN"+a.id;
    in.ignore();
    string s;
    getline(in,s);
    stringstream ss(s);
    a.name="";
    while(ss >> s){
        foru(i,0,s.size()-1) s[i]=tolower(s[i]);
        s[0]=toupper(s[0]);
        a.name+=(s+" ");
    }
    a.name.pop_back();
    in >> a.cls;
    in >> a.dob;
    if (a.dob[1]=='/') a.dob.insert(0,"0");
    if (a.dob[4]=='/') a.dob.insert(3,"0");
    in >> a.gpa;
    return in;
}

ostream& operator <<(ostream &out,SinhVien a){
    out << a.id << " " << a.name << " " << a.cls << " " << a.dob << " " << setprecision(2) << fixed << a.gpa << "\n";
    return out;
}

int SinhVien::NUM_SV=0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
}