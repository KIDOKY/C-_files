//152�� 7�� ����

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "SR7.h"
using namespace std;

int main()
{
	SelectableRandom r1(0);
	cout << "---0���� " << RAND_MAX << "������ ¦�� ���� ���� 10�� ���� ---" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r1.next();
		cout << n << ' ';
	}

	SelectableRandom r2(1);
	cout << endl << endl << "---2���� 9������ ���� Ȧ�� ���� 10�� ���� ---" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r2.nextinRange(2, 9);
		cout << n << ' ';
	}

	return 0;
}