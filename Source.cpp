#include <iostream>
#include <Windows.h>

using namespace std;

class Arrays
{
public:

	void Init();

};
void Arrays::Init(/* arguments */) {
	/* code */
	int n;
	cout<<"¬ведите значени€ количества экспериментов:"<<endl;
	cin>>n;
	int max;
	int *arrY=new int[n];
	int *arrX=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"¬ведите значени€ массива Y ["<<i<<"]: "<<endl;
		cin>>arrY[i];

	}
	for(int i=0;i<n;i++)
	{
		cout<<"¬ведите значени€ массива X ["<<i<<"]: "<<endl;
		cin>>arrX[i];
		max=arrY[0];
		if(arrY[i]>max)
		{
			max=i;
		
		}
	}

		
		cout<<"„исло в массиве X: \n "<<arrX[max]<<endl;
}
void main()
{
	setlocale(LC_ALL,"Russian");
	Arrays fl;
	fl.Init();
	system("pause");

}
