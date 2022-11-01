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
    string getCls();
    friend istream& operator >>(istream &in,Student &a);
    friend ostream& operator <<(ostream &out,Student a);
private:
    string id,name,cls,email;
};

Student::Student(){}

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
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,1,n){
        cin >> tmp;
        a.push_back(tmp);
    }
    cin >> q;
    while(q--){
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
        foru(i,0,a.size()-1)
            if (a[i].getCls()==s) cout << a[i];
    }
}