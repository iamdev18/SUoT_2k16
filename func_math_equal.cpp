#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;
class Math 
{
public:
	
	void Init();
	float a;
	int c;
	//void Show();
	float y_res , y1 , y2;
	int x;
	
};
void Math::Init() 
{
	cout<<"Input values ranging 1 .. 10 \n"<<endl;
	cin>>x;
	
	y1=0.0;
	y2=0.0;
	a=0.3;
	c=10;
	if (x > 0 && x<11)
	{
		if (sin((pow(x, 2) + 1) / c) > 0) {
			y1 = a*sin(pow(x, 2) + 1);
			cout << y1;
			cout << endl;
		}
		else
		{
			if (sin((pow(x, 2) + 1) / c))
			{
				y2 = cos(x + (1 / c));
				cout << y2;
				cout << endl;
			}
		}

		
	}
	else
	{
		cout << "Wrong number. Try again!" << endl;
		return;
		
	}
}
void main() 
{
	setlocale(LC_ALL, 0);
	Math m;
	m.Init();
	system("pause ");
}
