//#include <iostream>
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	int x;
//	double massa, massa_2  = 0;
//	
//	cout << "������� ����� ������� ����� (1-5): "; cin >> x;
//	cout << "������� ����� ����: "; cin >> massa;
//
//	switch (x) {
//	case(1): massa_2 = massa; break;
//	case(2): massa_2 = massa / (1000.0 * 1000.0); break;
//	case(3): massa_2 = massa / 1000.0; break;
//	case(4): massa_2 = massa * 1000.0; break;
//	case(5): massa_2 = massa * 100.0; break;
//	default: cout << "�������� ������!"; return 1;
//	}
//
//	cout << "����� ���� � �����������: " << massa_2;
//
//	return 0;
//}