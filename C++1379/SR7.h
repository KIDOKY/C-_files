//152�� 7�� ����

#include <iostream>
using namespace std;

class SelectableRandom {
	int num;
public:
	SelectableRandom(int _num);
	int next();
	int nextinRange(int i, int h);
};
