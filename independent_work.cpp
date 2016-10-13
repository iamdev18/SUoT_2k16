/*

**
***
****
*****

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
	
	cout << "Input array size:" << endl;
	cin >> N;
	float *arr = new float[N];
	float sum=0.0;
	float mul=1.0;
	for (int i = 0; i<N; i++) 
	{
		cout << "Input arr[" << i << "] element of matrix: " << endl;
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
	cout<<"Упорядкований масив: \n";
	for(int i=0;i<N;i++)
	{
		
		cout<<arr[i]<<endl;	
		mul *= arr[i];
	
	}
	
	
	cout << "Сума додатніх елементів матриці: \n" << sum << endl;
	cout<<"Добуток елементів матриці : \n"<< mul <<endl;
	delete []arr;
  
}

void main()
{
	setlocale(LC_ALL, "Ukrainian");
	Arr func;
	func.Init();
	system("pause");


}
