#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

class Student{
public:
    Student();
    string getId();
    string getCls();
    friend istream& operator >>(istream &in,Student &a);
    friend ostream& operator <<(ostream &out,Student a);
private:
    string id,name,cls,email;
};

Student::Student(){}

string Student::getId(){
    return id;
}

string Student::getCls(){
    return cls;
}

istream& operator >>(istream &in,Student &a){
    in >> a.id;
    in.ignore();
    getline(in,a.name);
    in >> a.cls;
    in >> a.email;
    return in;
}

ostream& operator <<(ostream &out,Student a){
    out << a.id << " " << a.name << " " << a.cls << " " << a.email << "\n";
    return out;
}

int n,q;
vector<Student> a;
Student tmp;
string s,s1;

string res(string s){
    if (s=="KE TOAN") return "DCKT";
    if (s=="CONG NGHE THONG TIN") return "DCCN";
    if (s=="AN TOAN THONG TIN") return "DCAT";
    if (s=="VIEN THONG") return "DCVT";
    return "DCDT";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,1,n){
        cin >> tmp;
        a.push_back(tmp);
    }
    cin >> q;
    cin.ignore();
    while(q--){
        getline(cin,s);
        foru(i,0,s.size()) s[i]=toupper(s[i]);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        s=res(s);
        foru(i,0,a.size()-1){
            s1=a[i].getId().substr(3,4);
            if (s1==s){
                if (s1=="DCCN"||s1=="DCAT"){
                    if (a[i].getCls()[0]!='E') cout << a[i];
                }
                else cout << a[i];
            }
        }
    }
}