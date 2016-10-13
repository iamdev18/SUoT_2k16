#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

class Math 
{
public:
	void Function();
	void Show();
	float a, b, c;
	float x_res;
	float y_res;
	~Math();

};
void Math::Function() 
{
	x_res=0.0;
	y_res=0.0;
	a = 0.816;
	b = 3.4;
	c = 16.7;
	x_res=(tan(pow(a,3))*tan(pow(a,3)))+pow((a+b),2)+(c/(sqrt(a+b)));
	y_res=((b*pow(a,2))-c)/((exp(a*c))-1);
	

}
void Math::Show() 
{
	cout << "Результат x: \n" << x_res << endl;
	cout << "Результат y: \n"<< fabs(y_res) <<endl;

}

Math::~Math() 
{
	cout << "Destructor is here!!!" << endl;
	



}
void main()
{
	setlocale (LC_ALL ,"Russian" );
	Math M;
	M.Function();
	M.Show();
	system("pause");
	M.~Math();
}