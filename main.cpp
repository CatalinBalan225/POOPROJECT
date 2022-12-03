#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>


using namespace std;

class Customers {
public:
	string name, gender, address;
	int age, mobileNo;
	static int cusID;
	char all[999];
	void getDetails() {
		ofstream out("old-customers.txt", ios::app);
		{
			cout << "Enter customer ID";
			cin >> cusID;
			cout << "Enter name";
			cin >> name;
			cout << "Enter age";
			cin >> age;
			cout << "Enter phone number";
			cin >> mobileNo;
			cout << "Enter Address";
			cin >> address;
			cout << "Enter Gender";
			cin >> gender;
		}
		out << "\nCustomer ID:" << cusID << "\nName" << name << "\nAge" << age << "\nMobile Number" << mobileNo << "\nAddress: " << address << endl;
		out.close();
		cout << "\nSaved \n your data is processed in order to provide you with the best quality services..." << endl;



	}
	void showDetails() {
		ifstream in("old-customers.txt"); {
			if (!in) {
				cout << "File Error!" << endl;
			}
			while (!(in.eof())) {
				in.getline(all, 999);
				cout << all << endl;
			}
			in.close();
		}
	}
};







int main() {
	cout << "Hello World!" << endl;

	return 0;
}