// lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");
	int* array;
	cout << "Введите кол-во элементов в массиве: ";
		int count; cin >> count;
		array = new int[count];
		for (int i = 0; i < count; i++)
		{
			cout << "Элемент Массива[" << i << "]: ";
			cin >> array[i];
		}

		int countmin = 0;

		for (int i = 0; i < count; i++)
			if (array[i] < 0) countmin++;

		int* arraymin;
		arraymin = new int[countmin];

		int j = 0;
		for(int i = 0; i<count; i++)
			if (array[i] < 0)
			{
				arraymin[j] = array[i];
				j++;
			}

		cout << "Массив после преобразования: ";
		for (int i = 0; i < countmin; i++)
			cout << arraymin[i] << " ";
}

