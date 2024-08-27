#include <bits/stdc++.h>
using namespace std;
 
class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		friend ostream& operator << (ostream& out, SinhVien a){
			out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
			return out;
		}
 
		friend istream& operator >> (istream& in, SinhVien &a){
			in >> a.ma;
			in.ignore();
			getline(in, a.ten);
			in >> a.lop >> a.email;
			return in;
		}
 
		friend bool operator < (SinhVien a, SinhVien b){
			return a.ma < b.ma;
		}
		string getma(){
			return ma;
		}
		string getlop(){
			return lop;
		}
};
 
void viethoa(string &s){
	for(char &x : s){
		x = toupper(x);
	}
}
string tach(string s){
	stringstream ss(s);
	string w,res="";
	vector<string>v;
	while(ss>>w){
		v.push_back(w);
	}
	for(int i=0;i<2;i++){
		res+=toupper(v[i][0]);
	}
	return res;

}



int main(){
	map<string,vector<SinhVien>> mp;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		SinhVien tmp; cin >> tmp;
		string nganh = tmp.getma().substr(5, 2);
		mp[nganh].push_back(tmp);
	}
	int q; cin >> q;
	cin.ignore();
	while(q--){
		string ng;
		getline(cin, ng);
		viethoa(ng);
		cout << "DANH SACH SINH VIEN NGANH " << ng << ":\n";
		string ng2=tach(ng);
		cout<<ng2;

				if(ng2=="AT"||ng2=="CN"){
					for( SinhVien x : mp[ng2]){
						if(x.getma().find("E")==string::npos){
							cout<<x;
						}
					}
		
				}
				else{
					for(SinhVien x : mp[ng2]){
						cout<<x;
					}
				}

	
	}
	return 0;
}
 