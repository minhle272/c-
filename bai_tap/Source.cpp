#include<iostream>
using namespace std;
//bai 1
//void nhap(int& t)
//{
//	cout << " nhap thang: " << " ";
//	cin >> t;
//	switch (t)
//	{
//	case 1: case 2: case 3: cout << " qui 1 "; break;
//	case 4: case 5: case 6: cout << " qui 2 "; break;
//	case 7: case 8: case 9: cout << " qui 3 ";  break;
//	case 10: case 11: case 12: cout << " qui 4 ";  break;	
//    }
//}

//bai 2
//void nhap(int& n)
//{
//	cout << " nhap so nguyen duong: " << " ";
//	cin >> n;
//	while (n < 0)
//	{
//		if (n < 0)	
//		cout << "nhap sai nhap lai: " << " ";
//		cin >> n;
//	}
//}
//int uocso(int& n)
//{
//	int s = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0 && i % 2 != 0)
//			s = s + i;
//	}
//	return s;
//}

//bai 3
//void nhap(int a[], int n)
//{
//	for (int i = 1; i < n; i++)
//		cin >> a[i];
//}
//void xuat(int a[], int n)
//{
//	cout << " mang a la: " << " ";
//	for (int i = 1; i < n; i++)
//		cout<< a[i]<<" ";
//}
//void kiemtra(int a[], int n)
//{
//	bool tam = true;
//	{
//		for (int i = 1; i < n; i++)
//		{
//			if (a[i - 1] > a[i])
//			{
//				tam = false;
//				break;
//			}
//		}
//	}
//	if (tam == false) cout << " khong tang "<<endl;
//	else cout << " tang "<<endl;
//}

//bai 4
void nhapmang(int a[], int& n)
{
	cout << " nhap so luong phan tu: " << " ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void xuatmang(int a[], int n)
{
	cout << " mang la: " << " " ;
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
}
void taomang(int a[], int& n)
{
	cout << " nhap so luonng phan tu: " << " ";
	cin >> n;
	srand(time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;
}
void boi(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] % 5 == 0)
			cout << a[i] << " ";
}
int tong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + a[i];
	}
	return s;
}
void main()
{
	//int t; 
	//int n, s = 0;
	//int a[4], n = 4;
	int a[100], n;
	//nhap(t);
	//nhap(n);
	//cout << "tong cac uoc so le la: " << uocso(n) << " ";
	//nhap(a, n);
	//xuat(a, n);
	//kiemtra(a, n);
	nhapmang(a, n);
	//taomang(a, n);
	xuatmang(a, n);
	boi(a, n);
	cout << "\n tong cac phan tu cua a la: " << tong(a, n);
	cout << endl;
	system("pause");
}