// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <istream>
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
	friend istream &operator >>(istream & , sV &);
	friend ostream &operator <<(ostream & , sV );


	

};
istream &operator >>(istream &in , sV &a){
	a.maSV="48.01.104.073";
	getline(in,a.ten);
	getline(in,a.lop);
	getline(in,a.ngaysinh);
	if(a.ngaysinh[2]!='/')a.ngaysinh="0"+a.ngaysinh;
	if(a.ngaysinh[5]!='/') a.ngaysinh.insert(5, "0");
	in>>a.gpa;
	in.ignore();
	return in;

}
ostream &operator <<(ostream &out , sV a){
	out<<fixed<<setprecision(2)<<a.maSV<<" "<<a.ten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<a.gpa; 
	return out;
}


int main() {
	sV a;
	cin>>a;
	cout<<a;
}