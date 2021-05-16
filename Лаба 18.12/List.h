#pragma once
#include <iostream>
#include <map>
using namespace std;
template <class T>
class List
{
	map<int, T> l;
	int length;
public:
	List(void);
	List(int n);
	void Print();
	~List(void);

	T SredneeAr();
	void AddInList(T element, int pos);
	void Search();
	void Decrease(T sr);
};
template <class T>
List<T>::List()
{
	length = 0;
}
template <class T>
List<T>::List(int n)
{
	T a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		l[i] = a;
	}
}
template <class T>
void List<T>::Print()
{
	for (int i = 0; i < l.size(); i++)
	{
		cout << i << " элемент: " << l[i] << endl;
	}
	cout << endl;
}
template <class T>
List<T>::~List()
{
}
//3
template <class T>
T List<T>::SredneeAr()
{
	T s;
	for (int i = 0; i < l.size(); i++) {
		s = s + l[i];
	}
	T n(l.size(), l.size());
	return s / n;
}
template <class T>
void List<T>:: AddInList(T element, int pos)
{
	l.insert_or_assign(pos, element);
}
//4
template <class T>
void List<T>::Search()
{
	map <int,T> tmp;
	T k1, k2;
	cout << "¬ведите диапазон дл€ поиска в виде двух пар[k1, k2]: ";
	cin >> k1 >> k2;
	int j = 0;
	for (int i = 0; i < l.size(); i++)
	{
		if (l[i] < k1 || l[i] > k2)
		{
			tmp.insert(make_pair(j, l[i]));
			j++;
		}
	}
	l.clear();
	for (int i = 0; i < tmp.size(); i++)
	{
		l.insert(make_pair(i, tmp[i]));
	}
}
// 5
template <class T>
void List<T>::Decrease(T sr)
{
	for (int i = 0; i < l.size(); i++)
	{
		l[i] = l[i] - sr;
	}
}

