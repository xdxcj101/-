#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

void test_vector1()
{
	vector<int> v1 = { 1,2,3,4,5,6 };
	/*vector<int> v2({ 1,2,3,4,5,6 });*/

	auto il1 = { 1, 2, 3, 4, 5, 6 };
	initializer_list<int> il2 = { 1, 2, 3, 4, 5, 6 };
	int a[] = { 1, 2, 3, 4, 5, 6 };

	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	//v1[10];

	/*v1.assign({ 10,20,30 });

	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	v1.insert(v1.begin(), 9);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	v1.insert(v1.begin() + 2, 200);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	v1.erase(v1.begin() + 2);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;*/
}

//void TestVectorExpand()
//{
//	size_t sz;
//	vector<int> v;
//	sz = v.capacity();
//	cout << "making v grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}

//void test_vector2()
//{
//	TestVectorExpand();
//}

//template<class T>
//class vector
//{
//public:
//	T& operator[](size_t i)
//	{
//		assert(i < _size);
//
//		return _a[i];
//	}
//
//private:
//	T*     _a;
//	size_t _size;
//	size_t _capacity;
//};

#include "vector.h"

int main()
{
	bit::test_vector1();

	return 0;
}