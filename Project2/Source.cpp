#include<iostream>
using namespace std;
void main()
{
	int a, b, c;
	cout << "nhap 3 so: " << " ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		cout << " so lon nhat " << a << endl;
	else 	if (b > a && b > c)
		cout << " so lon nhat " << b << endl;
	else 	cout << " so lon nhat " << c << endl;

	if (b > a && a > c)
		cout << " so lon nhi " << a << endl;
	else if (a > b && b > c)
		cout << " so lon nhi " << b << endl;
	else 	cout << " so lon nhi " << c << endl;
	system("pause");
}