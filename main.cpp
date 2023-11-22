#include <iostream>
using namespace std;
// Декларація функції
double RadToDeg(double R);
bool AtLeastOnePositive(int A, int B, int C);
void boolean13();
void proc32();
bool Input(int& number);
int CalculateThousandDigit(int number);
void Output(int digit);
void Integer18();
int main()
{

    cout << "Enter task number:" << endl;
    int menu;
    cin >> menu;
   
        switch (menu)
        {
        case 1:
            proc32();
            break;
        case 2:
            boolean13();
            break;
        case 3:
            Integer18();
            break;
        default:
            cout << "Only 1,2 and 3" << endl;
            break;
        }
   
    system("pause");
    return 0;
}
double RadToDeg(double R) {
    // Використання співвідношення для перетворення радіанів в градуси
    const double PI = 3.14;
    return R * (180.0 / PI);
}
void proc32() {

    double angle1 = 0;
    double angle2 = 0;
    double angle3 = 0;
    double angle4 = 0;
    double angle5 = 0;
    cout << "Enter angle:" << endl;
    cin >> angle1;
    cin >> angle2;
    cin >> angle3;
    cin >> angle4;
    cin >> angle5;
    // Виведення результатів
    cout << "Angle 1 in degrees: " << RadToDeg(angle1) << endl;
    cout << "Angle 2 in degrees: " << RadToDeg(angle2) << endl;
    cout << "Angle 3 in degrees: " << RadToDeg(angle3) << endl;
    cout << "Angle 4 in degrees: " << RadToDeg(angle4) << endl;
    cout << "Angle 5 in degrees: " << RadToDeg(angle5) << endl;

}


// Функція для розрахунку результату
bool AtLeastOnePositive(int A, int B, int C) {
    return (A > 0  B > 0  C > 0);
}
void boolean13() {
    int A, B, C;
    cout << "Enter three integers A, B, C:\n";
    cin >> A >> B >> C;

   
    if (AtLeastOnePositive(A, B, C)) {
        cout << "At least one of the numbers A, B, C is positive.\n";
    }
    else {
        cout << "All numbers A, B, C are negative.\n";
    }
}
int CalculateThousandDigit(int number) {
    // Знаходимо цифру розряду тисяч за допомогою операцій ділення та взяття остачі
    return (number / 1000) % 10;
}

// Функція виведення результату в консоль
void Output(int digit) {
    std::cout << "Number in thousands: " << digit << std::endl;
}
bool Input(int& number) {
cout << "Enter number(>999)" << endl;
    cin >> number;
    if (number<=999)
    {
        return false;
    }
    return true;
}
void Integer18() {
    int num = 0;
    ;
    if (Input(num))
    {
        int digit = CalculateThousandDigit(num);

        // Виклик функції виведення результату
        Output(digit);
    }
}}
