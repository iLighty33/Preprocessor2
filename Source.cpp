// ������������ ������ ������� C++
#include <iostream>

using namespace std;

#define PI 3

#ifndef PI
#define PI 3.14
#else
#define E 2.72
#endif

#if 5 > 10
const int N = 10;
#elif 15 > 10
const int N = 15;
#else
const int N = 5;
#endif

// ��������� ������ ��� ����� �����
// ���������� ������ ��� ������� main()
#if PI > 5
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// ������

	return 0;
}
#else
#define elif else if
int main() {

	setlocale(LC_ALL, "Russian");
	int n;

	#define M 11
	#ifdef M
	cout << "M ����������\n";
	#else
	#error "M ������ ������������!"
	#endif

	cout << "Hello world!\n";

	return 0;
}
#endif