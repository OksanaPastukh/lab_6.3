//Lab_6.3
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Random(int* p, int n, int Low, int High)
{
	for (int i = 0; i < n; i++)
		p[i] = rand() % (High - Low + 1) + Low;
}
void Print(int* p, int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(3) << p[i] << " ";
	cout << "\n";
}
int Count(int* p, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (p[i]<0)
			count++;
	return count;
}


// 2 cпосіб використовуючи шаблони функції

template <typename T>
void Random_1(T* p, int n, T Low, T High)
{
	for (int  i = 0; i < n; i++)
		p[i] = rand() % (High - Low + 1) + Low;
}
template <typename T>
 void Print_1(T* p, int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(3) << p[i] << " ";
	cout << "\n";
}
template <typename T>
int Count_1(T* p, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (p[i] < 0)
			count++;
	return count;
}
int main()
{
	srand((unsigned)time(NULL));

	const int n = 10;
	int p[n];
	int Low;
	int High;
	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;
	Random(p, n, Low, High);
	Print(p, n);
	cout << "Count = " << Count(p, n) << endl;
	Random_1(p, n, Low, High);
	Print_1(p, n);
	cout << "Count 2 = " << Count_1(p, n) << endl;
	return 0;
}