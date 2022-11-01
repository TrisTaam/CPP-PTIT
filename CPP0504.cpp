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
    string id,name,cls,dob;
    float gpa;
};

void nhap(SinhVien &a){
    a.id="B20DCCN001";
    getline(cin,a.name);
    cin >> a.cls;
    cin >> a.dob;
    cin >> a.gpa;
}

void in(SinhVien a){
    cout << a.id << " " << a.name << " " << a.cls << " ";
    int b=a.dob.find("/");
    if (b==1) a.dob.insert(0,"0");
    b=a.dob.find("/",3);
    if (b==4) a.dob.insert(3,"0");
    cout << a.dob << " " << setprecision(2) << fixed << a.gpa;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}