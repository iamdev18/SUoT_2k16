#include <iostream>
#include<cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;
class Arrays
{
public:
	
	int n;
	int k;
	void Show();
	~Arrays();

};
void Arrays::Show()
{
	cout<<"Define cols and rows in array: \n";
	const int n = 5;
	cin>>k;
	
	int arr[n][n];
	
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		for(int j=0;j<n;j++)
		{
			cout<<"Input in array [ "<<n<<" ][ "<<k<<" ] : \n";
			
			cin>>arr[i][j];

		}
	}

	delete []arr;
}

Arrays::~Arrays()
{
	cout << "Destructor is here!!! \n ";

}

void main()
{
	setlocale (LC_ALL, 0 );

	Arrays arr;
	arr.Show();
	cout<<endl;
	system("pause");

}