//#include<iostream>
//const int Max = 5;
//int main()
//{
//	using namespace std;
//	int golf[Max];
//	cout << "PLs enter your golf scores.\n";
//	cout << "You must enter " << Max << " round.\n";
//	int i;
//	for (i = 0;i < Max;i++)
//	{
//		cout << "round #" << i + 1 << ":";
//		while (!(cin >> golf[i]))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Pls enter anumber: ";
//		}
//	}
//	double total = 0.0;
//	for (i = 0;i < Max;i++)
//		total += golf[i];
//	cout << total / Max << " = average score " << Max << " round\n";
//
//
//	return 0;
//}