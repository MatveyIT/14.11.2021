//Lizogub Matvey П13121
#include <iostream>
using namespace std;
int main() {
	/* 4/необходимо вывести на экран таблицу умножения на k(вводите k от 1 до 9).*/
	int k;
	cin >> k;
	for (int i = 1; i <= 10; i++)
	{
		cout << k << " * " << i << " = ";
		cout << k * i << endl;
	}
	return 0;
}
