#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Rectangle
{
public:
	
	void Show();
	int a, k, x;
};

void Rectangle::Show()
{
	
	cout << "Input size 2 Dimensions Array: \n";
	cin >> a >> k;
	cout << endl;
	cout << "Output stream: \n" << endl;
	for (int i = 0; i < a; i++)
	{
		for (int x = 0; x < i; x++)cout << "1" << " ";
		for (int j = 0; j < a - i; j++) cout << "0" << " ";
		cout << endl;
	}
	
}
void main()
{
	setlocale(LC_ALL, 0 );
	Rectangle rec;
	rec.Show();
	cout << endl;
	system("pause");

}
