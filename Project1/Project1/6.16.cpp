//#include<iostream>
//#include<fstream>
//
//int main()
//{
//	using namespace std;
//	 
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//	ofstream outFile;
//	outFile.open("carinfo.txt");
//
//	cout << "Enter the make and model of automobile: ";
//	cin.getline(automobile, 50);
//	cout << "Enter the modle year: ";
//	cin >> year;
//	cout << "Enter the original asking price: ";
//	cin >> a_price;
//	d_price = 0.913 * a_price;
//	
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);
//	cout << "Make and model: " << automobile << endl;
//	cout << "year: " << year << endl;
//	cout << "was saking $" << a_price << endl;
//	cout << "Now saking $" << d_price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "Make and model: " << automobile << endl;
//	outFile << "year: " << year << endl;
//	outFile << "was saking $" << a_price << endl;
//	outFile << "Now saking $" << d_price << endl;
//
//
//	outFile.close();
//	return 0;
//}