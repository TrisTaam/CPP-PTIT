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
    double gpa;
};

string chuanhoa(string s){
    s[0]=toupper(s[0]);
    foru(i,1,s.size()-1) s[i]=tolower(s[i]);
    return s;
}

void nhap(SinhVien a[50],int n){
    int b;
    string s;
    foru(i,0,n-1){
        cin.ignore();
        a[i].id=to_string(i+1);
        while(a[i].id.size()<3) a[i].id="0"+a[i].id;
        a[i].id.insert(0,"B20DCCN");
        getline(cin,s);
        stringstream ss(s);
        a[i].name="";
        while(ss >> s) a[i].name+=(chuanhoa(s)+" ");
        a[i].name.pop_back();
        cin >> a[i].cls;
        cin >> a[i].dob;
        b=a[i].dob.find("/");
        if (b==1) a[i].dob.insert(0,"0");
        b=a[i].dob.find("/",3);
        if (b==4) a[i].dob.insert(3,"0");
        cin >> a[i].gpa;
    }
}

bool cmp(SinhVien a,SinhVien b){
    return a.gpa>b.gpa;
}

void sapxep(SinhVien a[50],int n){
    sort(a,a+n,cmp);
}

void in(SinhVien a[50],int n){
    cout << setprecision(2) << fixed;
    foru(i,0,n-1) cout << a[i].id << " " << a[i].name << " " << a[i].cls << " " << a[i].dob << " " << a[i].gpa << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}