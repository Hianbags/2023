#include <iostream>

using namespace std;
int tong(int a, int b) {
	int tong = 0;
	tong = a + b;
	return tong;
}
int hieu(int a, int b);
int tich(int a, int b) {
	int tich = 0;
	tich = a * b;
	return tich;
}
float thuong(int a, int b);
int main()
{
	int a, b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT"<<endl;
	cout << "nhap a : ";
	cin >> a;
	cout << "nhap b : ";
	cin >> b;

	cout<<"tong la: " << tong(a, b)<<endl;
	cout << "tich la: " << tich(a, b)<<endl;
	system("pause");
	return 0;
}