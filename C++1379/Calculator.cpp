/* [3�� �������� 10�� (1)�� �ۼ� ����]
*	�� ������ �����ڸ� �Է��ϼ���>> 3 4 *
*	��� = 12
*/
#include <iostream>
#include <string>
using namespace std;

class Add {

	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int Calculate() {
		return a + b;
	}
};
class Sub {

	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int Calculate() {
		return a - b;
	}
};
class Mul {

	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int Calculate() {
		return a * b;
	}
};
class Div {

	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int Calculate() {
		return a / b;
	}
};

int main()
{
	Add a; Sub s; Mul m; Div d;

	while (true) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>> ";
		int x, y;
		char c;
		cin >> x >> y >> c;
		switch (c) {
		case '+':
			a.setValue(x, y);	//Ŭ������ ������� a,b���� x,y �� ����
			cout << a.Calculate();
			break;
		case '-':
			s.setValue(x, y);	//Ŭ������ ������� a,b���� x,y �� ����
			cout << s.Calculate();
			break;
		case '*':
			m.setValue(x, y);	//Ŭ������ ������� a,b���� x,y �� ����
			cout << m.Calculate();
			break;
		case '/':
			d.setValue(x, y);	//Ŭ������ ������� a,b���� x,y �� ����
			cout << d.Calculate();
			break;
		default:
			cout << "�߸� �Է��Ͽ����ϴ�." << endl;
		}
	}

	return 0;
}