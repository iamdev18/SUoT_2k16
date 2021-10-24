#include <iostream> // Подключение библиотеки ввода/вывода
#include <Windows.h>

using namespace std; //Подключение std(для версий Visual Studio после 2005)

class Arrays
{
public:

	void Init(); //Инициализируем конструктор без параметров
	~Arrays(); // Деструктор (можешь дописать очистку кучи(heap) )

};
void Arrays::Init(/* arguments */) {
	/* code */
	int n;
	cout<<"Введите значения количества экспериментов:"<<endl;;
	cin>>n;
	int max;
	
	/*
		Я думаю что тут ясно что создаем массив X и Y (англ. Array) 
	*/
	
	int *arrY=new int[n];
	int *arrX=new int[n];
	
	//Создадим цикл, который будет принимать значения в массивы :)
	for(int i=0;i<n;i++)
	{
		ccout<<"Введите значения массива Y ["<<i<<"]: "<<endl;
		cin>>arrY[i];

	}
	for(int i=0;i<n;i++)
	{
		cout<<"Введите значения массива X ["<<i<<"]: "<<endl; //Вывод сообщения
		cin>>arrX[i]; //Ввод данных 
		
		max=arrY[0]; //Инициализируем переменную максимального числа чтобы было сравнивать с чем-то
		
		if(arrY[i]>max)
		{
			max=i; 
			/*
				Принимаем в переменную адрес самого большего числа в массиве Y после чего выберем число в массиве X 
				с адресом i 
			*/
		}
	}

		
		cout<<"Число в массиве X: \n "<<arrX[max]<<endl; // Выводим число по адресу 
}
void main() // Главная функция (не возвращает значений )
{
	/*
		Обьявим локализацию для нашей програмы ( Чтобы не было крякозябр! )
		Конечно можно использовать SetConsoleCP(1251) и SetConsoleOutputCP(1251), но зачем ... 
	*/
	setlocale(LC_ALL,"Russian");  
	Arrays fl; // Создали переменную для обращения к классу 
	fl.Init(); // Через точку расширения обращаемся к конструктору
	system("pause");

}
