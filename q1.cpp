#include<iostream>
using namespace std;
class student{
	private:
	int id;
	string name;
	int age;
	string cource;
	string email;
	string city;
	string college;
	
	public:
		void setdata(int id,string name,int age,string cource,string email,string city,string college){
		this->id=id;
		this->name=name;
		this->age=age;
		this->cource=cource;
		this->email=email;
		this->city=city;
		this->college=college;
	}
	getdata(){
		cout << "ID:"<< id << endl;
		cout << "NAME:"<< name << endl;
		cout << "AGE:"<< age << endl;
		cout << "COURCE:"<< cource << endl;
		cout << "EMAIL:"<< email << endl;
		cout << "CITY:"<< city << endl;
		cout << "COLLEGE:"<< college << endl << endl;
	}
};
int main(){
	student s1,s2,s3,s4,s5;
	
	s1.setdata(1,"jenish",18,"c++","jenihmaniya@gamil.com","surat","DRB");
	s2.setdata(2,"prerin",5,"animal expert","preringajera@gamil.com","godhra","bhagvan mahavir");
	s3.setdata(3,"vrund",70,"c--","vrund@gamil.com","rajkot","moti colloge");
	s4.setdata(4,"gaurav",18,"c//","gaurav@gamil.com","surat","cb");
	s5.setdata(5,"kitran",18,"c**","kirtan@gamil.com","surat","r&w");
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
	return 0;
}















