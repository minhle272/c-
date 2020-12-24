#include<iostream>
#include<iomanip>
using namespace std;
void nhap(int a[], int& n)
{
	cout << " nhap so luong phan tu: " << " ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
//1
void taomang(int a[], int& n)
{
	cout << " nhap so luong phan tu: "<<" ";
	cin >> n;
	srand(time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;
}
//2
void xuat(int a[], int n)
{
	cout << " mang la: " << " ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
//3
float trungbinh(int a[], int n)
{
	int tong = 0, dem = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + a[i];
		dem++;
	}
	return (float)tong / dem;
}
//4
void vitri(int a[], int n)
{
	cout << "\n phan tu o vi tri chan la : " << " ";
	for (int i = 0; i < n; i++)
		if (i % 2 == 0)
			cout << a[i]<<" ";
}
//5
void demduong(int a[], int n)
{
	int demduong = 0;
	for (int i = 0; i < n; i++)
		if (a[i]>0)
			demduong++;
	cout << "\n so phan tu duong la: " << demduong << " ";
}
//6
void demphantuX(int a[], int n, int x)
{
	int dempt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dempt=dempt+1;
	cout << "\n so phan tu X xuat hien trong mang la: " << dempt << " ";
}
//7
int vitridau(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return i;
}
//8
int vitricuoi(int a[], int n, int x)
{
	int vitri;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			vitri = i;
	return vitri;
}
//9
void vitrigiatri(int a[], int n, int x)
{
	cout << "\n tat ca vi tri cua x la: ";
	for (int i = 0; i < n; i++)
		if (a[i] == x)
		cout<< i<<" ";
}
//10
int GTLN(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];
	return max;
}
//11
int GTNN(int a[], int n)
{
	int min = a[0];
	for (int i =1; i < n; i++)
		if (min > a[i])
			min = a[i];
	return min;
}
//12
int kiemtra(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] == 0)
			return 1;
	return -1;
}
//13
bool snt(int a)
{
	if (a % 2 == 0) return false;
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
			return false;
	}
	return true;
}
int snt(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (snt(a[i]))
		{
			dem++;
		}
	}
	return dem;
}
void main()
{
	int a[100], n ;
	int x;
	nhap(a, n);
	//cin >> x;
	//taomang(a, n);
	xuat(a, n);
	//cout<<"\n trung binh cac phan tu la: "<<trungbinh(a, n);
	//vitri(a, n);
	//demduong(a, n);
	//demphantuX(a, n, x);
	//cout << "\n vi tri dau tien la: " << vitridau(a, n, x);
	//cout << "\n vi tri cuoi la: " << vitricuoi(a, n, x);
	//vitrigiatri(a, n, x);
	//cout << " \n gia tri lon nhat la: " << GTLN(a, n) << " ";
	//cout << " \n gia tri nho nhat la: " << GTNN(a, n) << " ";
	cout <<"\n  kiem tra ton tai so 0 hay khong: "<< kiemtra(a, n);
	//cout << " \n dem so nguyen to la: " << snt(a, n) << " ";
	cout << endl;
	system("pause");
}