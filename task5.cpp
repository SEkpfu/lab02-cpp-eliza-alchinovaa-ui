//#include <iostream>
//#include <cmath>    
//
//using namespace std;
//
//int main() {
//    setlocale(0, "");
//    
//    double r, a, b, z, c;
//
//    cout << "������� ������ ����� r: ";
//    cin >> r;
//    cout << "������� ������ ����� z: ";
//    cin >> z;
//    cout << "������� ������� ������� a � b: ";
//    cin >> a >> b;
//    cout << "������� ������ ������� c: ";
//    cin >> c;
//
//    if (2*r <= a && 2*r <= b && z <= c) cout << "���� ��������� � �������!";
//    
//    else cout << "���� �� ��������� � �������!";
//    return 0;
//}



//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    
//    setlocale(0, "");
//    
//    double x, y, z, a, b;
//    cout << "������� ����� �������: "; cin >> x;
//    cout << "������� ������ �������: "; cin >> y;
//    cout << "������� ������ �������: "; cin >> z;
//    cout << "������� ������� ��������������:\na = "; cin >> a; cout << "b = "; cin >> b;
//    
//    if ((x <= a && y <= b) || (y <= a && x <= b)) cout << "������ ������ ������ ����� �������������";
//    
//    else if ((y <= a && z <= b) || (z <= a && y <= b)) cout << "������ ������ ������ ����� �������������";
//    
//    else if ((x <= a && z <= b) || (z <= a && x <= b)) cout << "������ ������ ������ ����� �������������";
//    
//    else cout << "������ �� ������ ������ ����� �������������!";
//    
//    return 0;
//}