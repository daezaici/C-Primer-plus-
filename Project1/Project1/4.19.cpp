//#include<iostream>
//int main()
//{
//	using namespace std;
//	double wages[3] = { 1000.0,2000.0,3000.0 };
//	short stacks[3] = { 3,2,1 };
//	double *pw = wages;
//	cout << "pw = " << pw << ", *pw = " << *pw << endl;
//	pw = pw + 1;
//	cout << "pw = " << pw << ", *pw = " << *pw << endl;
//
//	short* ps = &stacks[0];
//	cout << "ps = " << ps << ", *ps = " << *ps << endl;
//	ps = ps + 1;
//	cout << "ps = " << ps << ", *ps = " << *ps << endl;
//
//	cout << "stacks[0] = " << stacks[0] << " " << "stacks[1] = " << stacks[1];
//	cout << "stacks = " << stacks << "  " << &stacks[0] << endl;
//	cout << "stacks + 1 = " << stacks + 1 << endl;
//	cout << "*(stacks + 1) = " << *(stacks + 1) << endl;
//
//	cout << sizeof(wages) << endl;
//	cout << sizeof(pw) << endl;
//
//	cout << "stacks = " << stacks << "  " << &stacks[0] << endl;
//	cout << "&stacks = " << &stacks << endl;
//
//	return 0;
//}