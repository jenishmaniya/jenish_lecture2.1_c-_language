#include<iostream>
using namespace std;
class student{
	private:
	int id;
	string name;
	int age;
	string brand_name;
	int mobile_no;
	string city;
	int simcard_validity;
	
	public:
		void setdata(){
			cout << "Enter the detail of student :" << endl;
			cout << "Enter the id:";
			cin >> id;
			cout << "Enter the name:";
			cin >> name;
			cout << "Enter the age:";
			cin >> age;
			cout << "Enter the brand name:";
			cin >> brand_name;
			cout << "Enter the mobile number :";
			cin >> mobile_no;
			cout << "Enter the city name:";
			cin >> city;
			cout << "Enter the simcard validity:" << endl;
			cin >> simcard_validity;
			
		}
		getdata(){
			cout <<  "ID:-" << id << endl;
			cout <<  "NAME:-" << name << endl;
			cout <<  "AGE:-" << age << endl;
			cout <<  "BRAND NAME:-" << brand_name << endl;
			cout <<  "MOBIL NUMBER:-" << mobile_no << endl;
			cout <<  "CITY NAME:-" << city << endl;
			cout <<  "SIMCARD VALIDITY:-" << simcard_validity << endl;
		}
		
		
};
int main(){
	student s[5];
	int i;
	for(i=0;i<=4;i++){
		s[i].setdata();
	}
	for(i=0;i<=4;i++){
		s[i].getdata();
	}
	return 0;
}









