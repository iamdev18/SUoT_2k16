#include <iostream>
#include <math.h>
using namespace std;
class A
{
public:
	void Init();
	int a, b;
	int c;
	int res;
	void Show();
	
};
void A::Init() 
{
	cout << "������� ������ ����������� �����:" << endl;
	cin >> a;
	cout << "������� ������ ����������� �����:" << endl;
	cin >> b;
	c = a + b;
	cout << "���� ����������� ����� ����� \n" << c << endl;
	if (c!= 0)
	{
		res += c % 10;
		c /=10;
		
		/*for(int i=0;i<5;i++)
		{
			cout<<"Result: \n"<<c[i]<<endl;
		}
				*/
	}
	else
	{
		cout << "����� ����� �� �����������" << endl;
	}
}
void A::Show() 
{
	
	if (res%2) {
		cout << "��������� ������ � ����� \n" << c << endl;

	}
	else{
		cout << "��������� ��������" << endl;
	}
}
void main() 
{
	setlocale(LC_ALL,"Russian" );
	A task;
	task.Init();
	task.Show();
	system("pause");


}
