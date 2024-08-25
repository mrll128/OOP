// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
class sV{
	private:
	string maSV,ten,lop,ngaysinh;
	float gpa;
	public:
	sV(){
		this->maSV="";
		this->ten="";
		this->lop="";
		this->ngaysinh="";
		this->gpa=0;
	}
	friend void nhap(sV&);
	friend void in(sV);

};

void nhap(sV &a){
	a.maSV="48.01.104.073";
	getline(cin,a.ten);
	getline(cin,a.lop);
	getline(cin,a.ngaysinh);
	if(a.ngaysinh[2]!='/')a.ngaysinh="0"+a.ngaysinh;
	if(a.ngaysinh[5]!='/') a.ngaysinh.insert(5, "0");
	cin>>a.gpa;
	cin.ignore();
}
void in(sV a){
	cout<<fixed<<setprecision(2)<<a.maSV<<" "<<a.ten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<a.gpa; 
}
int main() {
	sV a;
	nhap(a);
	in(a);
}
