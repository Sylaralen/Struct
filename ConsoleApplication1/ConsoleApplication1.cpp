#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include <set>
#include <algorithm>
#include <queue>
#include <iomanip>

using namespace std;



int main() {
	setlocale(0, "rus");
	// Вектор
	cout << " Vector" << endl;
	vector<int> data(10, 1);
	data.push_back(2);
	for (auto now : data)
	{
		cout << now << " ";
	}
	cout << endl;
	//Работа с итераторами
	data.insert(data.begin() + 2, 2); //   O(teil) - сложность от teil(хвост)
	cout << "Итераторы, замена 3-его элемента на 2" << endl;
	for (auto now : data)
	{
		cout << now << " ";
	}
	cout << endl;
	// Cписки
	cout << "List" << endl;
	list<int> mylist(10, 3);
	mylist.insert(mylist.begin(), 2);
	mylist.push_back(1);
	cout << "Замена 1 элемента на 2" << endl;
	for (auto now : mylist)
	{
		cout << now << " ";
	}
	cout << endl;
	// Словари
	cout << "map" << endl;
	map<int, int> mymap;
	mymap[0] = 32;
	mymap[1] = 123;
	mymap[2] = 421;
	cout << "Вывод значений словаря" << endl;
	for (auto now : mymap)
	{
		cout << now.first << " " << now.second << endl;
	}
	// Cтек
	cout << "stack" << endl;
	stack<int> stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	cout << "Верхний элемент - " << stk.top() << endl;
	//Множества 
	cout << "set" << endl;
	set<int> myset;
	myset.insert(1);
	myset.insert(0);
	myset.insert(10);
	myset.insert(4);
	myset.insert(3);
	myset.insert(2);
	myset.insert(1);
	myset.insert(1);

	cout <<"Вывод элементов множества" << endl;
	for (auto now : myset)
	{
		cout << now << " ";
	}
	cout << endl;
	//Очередь
	cout << "queue" << endl;
	queue<int> q;
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);
	q.push(16);
	q.push(17);
	cout << "Начальный элемент - " << q.front() << " Конечный элемент - " << q.back() << endl;
	// Пара
	cout << "pair" << endl;
	pair<int, int> p;
	p.first = 1;
	p.second = 11;
	cout << "Первый элемент - " << p.first << " Второй элемент - " << p.second << endl;


	//Постоянная сложность


	//Линейная сложность алгоритма О(n) - Обход массива
	cout << " Линейная сложность алгоритма О(n)" << endl;
	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;

	//Квадратичная сложность О(n*n) - Обход двумерного массива
	cout << "Квадратичная сложность О(n*n)" << endl;
	int array[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			array[i][j] = i + j;
			cout <<setw(3) << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	//Логарифмическая сложность О(log n) - Бинарный поиск
	//Найдите такое число x, что x^2+√(x) = C, с точностью не менее 6 знаков после точки.
	cout << "Логарифмическая сложность О(log n)" << endl;
	int c = 30; // запрос
	double right = 1000000;
	double left = 0;
	double middle;
	double e = 1e-6;
	while (right > left + e)
	{
		middle = (left + right) / 2;
		if (middle * middle + sqrt(middle) < c)
		{
			left = middle;
		}
		else
		{
			right = middle;
		}
	}
	cout << setprecision(6) << fixed << middle << endl;



	//Корневая сложность O(sqrt(n))Дано натуральное число n,нужно вывести все его простые натуральные делители с учетом кратности. 
	cout << "Корневая сложность O(sqrt(n))" << endl;
	int n = 32;
	int i = 2;
	int tmp = n;
	bool flag = true;
	while (i < tmp)
	{
		if (n % i == 0)
		{
			cout << i << " ";
			n /= i;
			if (n % i != 0)
			{
				i++;
			}
			flag = false;
		}
		else
		{
			i++;
		}
	}
	if (flag)
	{
		cout << n;
	}
	cout << endl;
}
