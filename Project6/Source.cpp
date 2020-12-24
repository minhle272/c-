#include<iostream>
using namespace std;
#define max 100
void nhapmang(int a[][max], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void xuatmang(int a[][max], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
int tongduongcheo(int a[][max], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i == j || i + j == n - 1)
				tong += a[i][j];
	return tong;
}
void vitrix(int a[][max], int n, int x)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == x)
				cout <<" hang "<< i <<" cot "<< j << " ";
}
void main()
{
	int a[max][max];
	int n,x;
	cout << " nhap vao chieu dai mang: ";
	cin >> n;
	cout << "\n nhap mot mang 2 chieu: ";
	nhapmang(a, n);
	cout << "\n mang vua nhap la:\n";
	xuatmang(a, n);
	//cout << "\n tong 2 duong cheo la: " << tongduongcheo(a, n);
	cout << "\ngia tri x: ";
	cin >> x;
	vitrix(a, n, x);
}