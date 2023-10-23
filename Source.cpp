#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b){
	return a-b;
}
int tich(int a, int b);
float thuong(int a, int b){
	return a/b;
}
int main()
{	
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT"<<endl;
	cout<<"cho nam nhap so a = ";
	cin>>a;
	cout<<"cho nam nhap so b = ";
	cin>>a;
	int hieu =hieu(a,b);
	int tong =tinh(a,b);
	cout<< "tong = "<<tong;
	cout<<"hieu = "<<hieu;
	system("pause");
	return 0;
}