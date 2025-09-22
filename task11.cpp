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
//    cout << "Введите дату рождения:" << endl;
//    cout << "День: "; cin >> birthDay;
//    cout << "Месяц: "; cin >> birthMonth;
//    cout << "Год: "; cin >> birthYear;
//   
//    cout << "\nВведите текущую дату:" << endl;
//    cout << "День: "; cin >> currentDay;
//    cout << "Месяц: "; cin >> currentMonth;
//    cout << "Год: "; cin >> currentYear;
//
//    int age = currentYear - birthYear;
//    
//    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
//        age;
//    }
//    
//    if (age % 100 >= 11 && age % 100 <= 14) {
//        slovo = " лет";
//    }
//    else {
//        switch (age % 10) {
//        case 1: slovo = " год"; break;
//        case 2: case 3: case 4: slovo = " года"; break;
//        default: slovo = " лет";
//        }
//    }
//
//    cout << "\nВам " << age << slovo << endl;
//
//    return 0;
//}
