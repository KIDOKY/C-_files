/* [3�� �������� 10�� (2)�� �ۼ� ����]
*	�� ������ �����ڸ� �Է��ϼ���>> 3 4 *
*	��� = 12
*/
#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
using namespace std;

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