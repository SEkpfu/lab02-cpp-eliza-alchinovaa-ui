//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(0, "");
//    int birthDay, birthMonth, birthYear;
//
//    int currentDay, currentMonth, currentYear;
//    
//    string slovo;
//    
//    cout << "������� ���� ��������:" << endl;
//    cout << "����: "; cin >> birthDay;
//    cout << "�����: "; cin >> birthMonth;
//    cout << "���: "; cin >> birthYear;
//   
//    cout << "\n������� ������� ����:" << endl;
//    cout << "����: "; cin >> currentDay;
//    cout << "�����: "; cin >> currentMonth;
//    cout << "���: "; cin >> currentYear;
//
//    int age = currentYear - birthYear;
//    
//    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
//        age;
//    }
//    
//    if (age % 100 >= 11 && age % 100 <= 14) {
//        slovo = " ���";
//    }
//    else {
//        switch (age % 10) {
//        case 1: slovo = " ���"; break;
//        case 2: case 3: case 4: slovo = " ����"; break;
//        default: slovo = " ���";
//        }
//    }
//
//    cout << "\n��� " << age << slovo << endl;
//
//    return 0;
//}
