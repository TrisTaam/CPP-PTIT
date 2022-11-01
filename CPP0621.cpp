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
    friend istream& operator >>(istream &in,Student &a);
    friend ostream& operator <<(ostream &out,Student a);
private:
    string id,name,cls,email;
};

Student::Student(){}

string Student::getId(){
    return id;
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

bool cmp(Student a,Student b){
    return a.getId()<b.getId();
}

vector<Student> a;
Student tmp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> tmp) a.push_back(tmp);
    sort(a.begin(),a.end(),cmp);
    foru(i,0,a.size()-1) cout << a[i];
}