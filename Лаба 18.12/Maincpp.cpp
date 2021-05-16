#include <iostream>
#include"Pair.h"
#include "List.h"
#include <map>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	system("color F0");
	int n;
	cout << "Введите размер списка: ";
	cin >> n;
	List<Pair> list(n);
	list.Print();

	cout << "Среднее арифметическое списка: " << endl;
	Pair sr = list.SredneeAr();
	cout << sr << endl;
	cout << "На какую позицию поставить среднее арифметическое ?" << endl;
	int p;
	cin >> p;
	list.AddInList(sr, p);
	list.Print();

	list.Search();
	list.Print();

	List<Pair> list3(4);
	sr = list3.SredneeAr();
	list3.Decrease(sr);
	list3.Print();

}
/*
typedef map<int, Pair> TMap;
typedef TMap::iterator it;

TMap MakeMap(int n)
{
	TMap m;
	Pair p;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		m.insert(make_pair(i, p));
	}
	return m;
}
void PrintMap(TMap m)
{
	for (int i = 0; i < m.size(); i++)
	{
		cout << i << " элемент: " << m[i] << endl;
	}
}
//3
Pair SredneeAr(TMap m)
{
	Pair s;
	for (int i = 0; i < m.size(); i++) {
		s = s + m[i];
	}
	Pair n(m.size(), m.size());
	return s / n;
}
TMap AddInMap(TMap m, Pair element, int pos)
{
	m.insert_or_assign(pos, element);
	return m;
}
//4
TMap Surch(TMap m)
{
	TMap tmp;
	Pair k1, k2;
	cout << "Введите диапазон для поиска в виде двух пар[k1, k2]: ";
	cin >> k1 >> k2;
	int j = 0;
	for (int i = 0; i < m.size(); i++)
	{
		if (m[i] < k1 || m[i] > k2)
		{
			tmp.insert(make_pair(j,m[i]));
			j++;
		}
	}
	return tmp;
}
// 5
TMap Decrease(TMap m, Pair sr)
{
	for (int i = 0; i < m.size(); i++)
	{
		m[i] = m[i] - sr;
	}
	return m;
}*/