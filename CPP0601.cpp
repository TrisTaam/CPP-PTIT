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
    void nhap(){
        id="B20DCCN001";
        getline(cin,name);
        cin >> cls;
        cin >> dob;
        if (dob[1]=='/') dob.insert(0,"0");
        if (dob[4]=='/') dob.insert(3,"0");
        cin >> gpa;
    }

    void xuat(){
        cout << id << " " << name << " " << cls << " " << dob << " " << setprecision(2) << fixed << gpa;
    }

private:
    string id,name,cls,dob;
    double gpa;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}