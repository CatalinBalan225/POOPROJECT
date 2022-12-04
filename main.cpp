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


class ticket {
public:
	int ticketChoice;
	float noTickets;
	float ticketCost;
	static float lastticketCost;

	void ticketDetails() {
		cout << "These are the types of tickets you can choose for." << endl;

		cout << "1. Buy a standard ticket" << endl;
		cout << "2.Buy a VIP ticket" << endl;

		cout << "\n To calculate the cost of your ticket" << endl;
		cout << "Enter the type of ticket you prefer.";
		cin >> ticketChoice;
		cout << "Enter the number of tickets you want to buy. ";
		cin >> noTickets;

		int chooseTicket;
		if (ticketChoice == 1) {
			ticketCost = noTickets * 200;
			cout << "\nYour ticket cost" << ticketCost << " $ for standard ticket" << endl;
			cout << "Press 1 to confirm or ";
			cout << "Press 2 to select another type of ticket";
			cin >> chooseTicket;
			system("CLS");
			if (chooseTicket == 1) {
				lastticketCost = ticketCost;
				cout << "\nYou have succesfully purchased the standard ticket." << endl;
				cout << "Go to the menu and take the receipt" << endl;
			}
			else if (chooseTicket == 2) {
				ticketDetails();
			}
			else {
				cout << "Invalid Input! Redirecting to previous menu\nPlease Wait!" << endl;
				Sleep(999);
				system("CLS");
				ticketDetails();
			}
		}
		else if (ticketChoice == 2) {
			ticketCost = noTickets * 500;
			cout << "\nYour ticket cost is " << ticketCost << "$ for VIP ticket" << endl;

			cout << "Press 1 to confirm or ";
			cout << "Press 2 to select another cab";
			cin >> chooseTicket;
			system("CLS");
			if (chooseTicket == 1) {
				lastticketCost = ticketCost;
				cout << "\nYou have succesfully purchased the VIP ticket." << endl;
				cout << "Go to menu and take the receipt" << endl;
			}
			else if (chooseTicket == 2) {
				ticketDetails();
			}
			else {
				cout << "Invalid Input! Redirecting to previous menu\nPlease Wait!" << endl;
				Sleep(999);
				system("CLS");

			}
			cout << "\n Press 1 to redirect to main menu";
			cin >> chooseTicket;
			system("CLS");
			if (chooseTicket == 1) {

			}
			else {

			}
		}
	}
};




int main() {
	

	return 0;
}