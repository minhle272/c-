#include<iostream>
using namespace std;
void main()
{
	int a, b, c;
	cout << "nhap: " << " ";
	cin >> a >> b >> c;
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	cout << a + b + c - max - min;
	system("pause");
}