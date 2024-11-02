#include <iostream>

using namespace std;
int tong(int a, int b)
{
	return a+b;
}
int hieu(int a, int b)
{
	return a - b;
}
int tich(int a, int b)
{
	return a*b;
}
float thuong(int a, int b)
{
	return a/b;
}
int main()
{	
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	cout << "Tong: " << tong(a,b);
	cout << "Hieu: " << hieu(a,b);
	cout << "Tich: " << tich(a,b);
	cout << "thuong: " << thuong(a,b);
	system("pause");
	return 0;
}