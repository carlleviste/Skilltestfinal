#include <iostream>
#include <string>
using namespace std;

int main ()

{
	double rate, hour1, hour2, hour3, hour4, hour5, net;
	cout << "Amount of pay rate per hour" << endl;
	cin >> rate;
	cout << "Input No. of hours worked for week 1" << endl;
	cin >> hour1;
	cout << "Input No. of hours worked for week 2" << endl;
	cin >> hour2;
	cout << "Input No. of hours worked for week 3" << endl;
	cin >> hour3;
	cout << "Input No. of hours worked for week 4" << endl;
	cin >> hour4;
	cout << "Input No. of hours worked for week 5" << endl;
	cin >> hour5;
	cout << "Income without tax: "  << (hour1+hour2+hour3+hour4+hour5*rate) << endl;
	cout << "Income with tax: " << (hour1+hour2+hour3+hour4+hour5*rate) - (hour1+hour2+hour3+hour4+hour5*rate*.14) << endl;
		net=((hour1+hour2+hour3+hour4+hour5*rate) - (hour1+hour2+hour3+hour4+hour5*rate*.14));
	cout << "Money spent on clothes/accessories: " << (net*.1) << endl;
	cout << "Money spent on school supplies: " << (net*.01) << endl;
	cout << "Money spent on buying bonds: " << (net*.25) << endl;
	cout << "Money spent by parents additional bonds for you: " << (net*.25*.5) << endl;

	system("pause");
return 0;
}

