#include <iostream>

using namespace std;


int hieu(int a, int b){
	return a-b;
}

float thuong(int a, int b){
	return a/b;
}

int tong(int a, int b) {
	int tong = 0;
	tong = a + b;
	return tong;
}

int tich(int a, int b) {
	int tich = 0;
	tich = a * b;
	return tich;
}

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
	int hieu =hieu(a,b);
	int tong =tinh(a,b);
	cout<< "tong = "<<tong;
	cout<<"hieu = "<<hieu;
	system("pause");
	return 0;
}