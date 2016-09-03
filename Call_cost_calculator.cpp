//Christopher Teti	        Total Points : 10
//Due Date : 9 / 4 / 2016
//Course : C0P3014
//	Assignment : Assignment 1
//	Professor : Dr.Lofton Bullard
//
//	Description : (In the program we gathered the users phone number call length and number of relays 
//  and used it to calculate the net cost and the call tax which was used to calculate the total cost of the call.)
//
//		************************************************************* /
#include <iostream> //standard library for i/o
#include <string>

		using namespace std;

int main()
{
	cout.setf(ios::fixed);		
	cout.setf(ios::showpoint);		
	cout.precision(2);
	
	string user_response = "y";

	double net_cost, call_tax, total_cost, tax_rate;

	int relays, call_length;

	string cell_num;

	while (user_response == "y" || user_response == "Y")
	{
		

		cout <<"please enter your phone number"<< endl;

		cin >> cell_num;

		cout << "enter the number of relay stations" << endl;

		cin >> relays;

		cout << "Please enter call length in minutes" << endl;

		cin >> call_length;

		if ((relays >=1) && (relays <= 5)) {
			tax_rate = 1.00;
		}
		else if ((relays >= 6) && (relays <= 11)) {
			tax_rate = 3.00;
		}

		else if ((relays >= 12) && (relays<= 20)) {
			tax_rate = 5.00;
		}

		else if ((relays >=21) && (relays<= 50)){
			tax_rate = 8.00;
	}
		else {
			tax_rate = 12.00;
	}

		net_cost = relays / 50.0 * 0.40 * call_length;

		call_tax = (net_cost)*(tax_rate) / 100.00;

		total_cost = net_cost + call_tax;


		cout << "the net cost is "<< net_cost << endl;
		cout << "the tax on the call is " << call_tax << endl;
		cout << "the total cost comes to " << total_cost << endl;


		cout << "Would you like to do another calculation (Y or N): " << endl;
		cin >> user_response;
	}

	return  0;
}
