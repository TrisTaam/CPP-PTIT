#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

class Company{
public:
    Company();
    string getId();
    int getNumOfStudent();
    friend istream& operator >>(istream &in,Company &a);
    friend ostream& operator <<(ostream &out,Company a);
private:
    string id,name;
    int numOfStudent;
};

Company::Company(){}

string Company::getId(){
    return id;
}

int Company::getNumOfStudent(){
    return numOfStudent;
}

istream& operator >>(istream &in,Company &a){
    in >> a.id;
    in.ignore();
    getline(in,a.name);
    cin >> a.numOfStudent;
    return in;
}

ostream& operator <<(ostream &out,Company a){
    out << a.id << " " << a.name << " " << a.numOfStudent << "\n";
    return out;
}

bool cmp(Company a,Company b){
    if (a.getNumOfStudent()>b.getNumOfStudent()) return true;
    if (a.getNumOfStudent()==b.getNumOfStudent()&&a.getId()<b.getId()) return true;
    return false;
}

int n,q,l,r;
vector<Company> a;
Company tmp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,1,n){
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end(),cmp);
    cin >> q;
    while(q--){
        cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
        foru(i,0,n-1)
            if (l<=a[i].getNumOfStudent()&&a[i].getNumOfStudent()<=r) cout << a[i];
    }
}