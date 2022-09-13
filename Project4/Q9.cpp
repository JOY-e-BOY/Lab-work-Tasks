//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char ch;
//	int n1, n2;
//	float  sum, sub, mult, div, mod;
//	cout << "Enter The First Number =\t ";
//	cin >> n1;
//	cout << "Enter The Second Number =\t ";
//	cin >> n2;
//	cout << "\n____________\nEnter The following Charcter for\n____________";
//	cout << "\n Division(/) ,Multiply(*), Sum(+),\n Subtraction(-) ,Mod(%) =  \t";
//	cin >> ch;
//	cout << "_________________________\n  ";
//	if (ch == '+')
//	{
//		sum = n1 + n2;
//		cout << "Sum  =\t" << sum;
//	}
//	else if (ch == '-')
//	{
//		sub = n1 - n2;
//		cout << "Subtraction =\t" << sub;
//	}
//	else if (ch == '*')
//	{
//		mult = n1 * n2;
//		cout << "Multiplication =\t" << mult;
//	}
//	else if (ch == '/')
//	{
//		if (n2 != 0)
//		{
//			div = n1 / n2;
//			cout << "Division =\t" << div;
//		}
//		else
//			cout << "undefined (Not Divisible By Zero)";
//	}
//	else if (ch == '%')
//	{
//		mod = n1 % n2;
//		cout << "Mod =\t" << mod;
//	}
//	else
//		cout << "Not Valid Character";
//	cout << "\n";
//	system("pause");
//	return 0;
//}