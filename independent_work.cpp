/*

** В одномірному массиві , що складається з N дійсних елементів, обчислити **
 ** - суму додатних елементів массиву 
 ** - добуток елементів массиву , що розташовані між максимальним за модулем і мінімальним за модулем елементами.
 **



*/

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;
class Arr
{
public:

	void Init();
	int N;
	float sum; 
	float mul;


};
void Arr::Init()
{
	
	cout << "Введите размерность массива:" << endl;
	cin >> N;
	float *arr = new float[N];
	float sum=0.0;
	float mul=1.0;
	for (int i = 0; i<N; i++) 
	{
		cout << "Введите arr[" << i << "] элемент массива: " << endl;
		cin >> arr[i];
		if (arr[i]>0) 
		{
			sum += arr[i];

		}

		
		
	}
	for(int j=1;j<N; j++)
	
	{
		for(int i=0; i<N-j;i++)
		{
			if(arr[i]>arr[i+1])		
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
					
			}

			
		}
	}
	cout<<"Упорядоченный массив: \n";
	for(int i=0;i<N;i++)
	{
		
		cout<<arr[i]<<endl;	
		mul *= arr[i];
	
	}
	
	
	cout << "Сума положительных элементов: \n" << sum << endl;
	cout<<"Произведение элементов массива : \n"<< mul <<endl;
	delete []arr;
  
}

void main()
{
	setlocale(LC_ALL, "Russian");
	Arr func;
	func.Init();
	system("pause");


}