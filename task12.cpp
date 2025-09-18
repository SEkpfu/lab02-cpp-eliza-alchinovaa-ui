#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	int n1, n2, n3;
	//int sum_10 = 0;
	cout << "Введите три числа:" << endl;
	cout << "n1 = "; cin >> n1;
	cout << "n2 = "; cin >> n2;
	cout << "n3 = "; cin >> n3;
	
	/*if (n1 > 10) sum_10 = sum_10 + n1;
	if (n2 > 10) sum_10 = sum_10 + n2;
	if (n3 > 10) sum_10 = sum_10 + n3;
	cout << "Сумма чисел, которые больше 10: " << endl<< sum_10;*/

	/*int kolvo_chet = 0;
	if (n1 % 2 == 0) kolvo_chet = kolvo_chet + 1;
	if (n2 % 2 == 0) kolvo_chet = kolvo_chet + 1;
	if (n3 % 2 == 0) kolvo_chet = kolvo_chet + 1;
	cout << "Количество чётных чисел = " << kolvo_chet;*/

	/*int middle;

	if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)) middle = n1;
	else if ((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3)) middle = n2;
	else middle = n3;
	cout << "Среднее число: " << middle << endl;*/
	
	/*int nomer_min;
	if (n1 < n2 && n1 < n3) nomer_min = 1;
	else if (n2 < n1 && n2 < n3) nomer_min = 2;
	else nomer_min = 3;
	cout << "Номер наименьшего числа: " << nomer_min;*/
	
	return 0;
}