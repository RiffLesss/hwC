/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define _USE_MATH_DEFINES
#define M_PI
#include <iostream>
#include <cmath>

using namespace std;

// 1. Вычислить площадь трапеции с основаниями b1 и b2 и высотой h
double trapezearea(int b1, int b2, int h) {
    return ((b1 + b2) / 2) * h;
}

// 2. Вычислить площадь круга радиуса r.
double circlearea(int r) {
    return M_PI * pow(r, 2.0);
}

// 2. Вычислить длину окружности круга радиуса r.
double circumferencelength(int r) {
    return 2 * M_PI * r;
}

//3. Вычислить площадь прямоугольного треугольника
double trianglearea(int kat1, int kat2) {
    return kat1 * kat2 / 2;
}

// 3. Вычислить гипотенузу прямоугольного треугольника
double hypotenuse(int kat1, int kat2) {
    return pow((pow(kat1, 2.0) + pow(kat2, 2.0)), 0.5);
}

// 4. Дано десятичное четырехзначное число. Найти сумму его цифр.
int digitsum(int number) {
    return number % 10 + number / 10 % 10 + number / 100 % 10 + number / 1000;
}

//5. Выполнить переход от декартовых координат к полярным. (вычисление r)
double dectopolr(double x, double y) {
    return pow((pow(x, 2.0) + pow(y, 2.0)), 0.5);
}

// 5. Выполнить переход от декартовых координат к полярным. (вычисление fi)
double dectopolfi(double x, double y) {
    return atan(x / y);
}

// 6. Выполнить переход от полярных координат к декартовым. (вычисление x)
double poltodecx(double r, double fi) {
    return r * sin(fi);
}

// 6. Выполнить переход от полярных координат к декартовым. (вычисление y)
double poltodecy(double r, double fi) {
    return r * cos(fi);
}

// 9. Идет k-я секунда суток. Определить, сколько целых часов прошло с начала суток.
int timehour(int sec) {
    return sec / 3600;
}

//9. Идет k-я секунда суток. Определить, сколько целых часов прошло с начала суток.
int timemin(int sec) {
    return sec % 3600 / 60;
}

// 10. Определить, является ли треугольник со сторонами a, b, c равнобедренным.
bool ifisosceles(int a, int b, int c) {
    if (a == b | b == c | c == a)
        return true;
    else 
        return false;
}

// 11. Вычислить стоимость покупки с учётом скидки. Скидка в 10% предоставляется,
// если суммапокупки превышает 1000 рублей.
double sale(int price) {
    if (price > 1000)
        return price * 0.9;
    else 
        return price;
}

// 12. Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если
// идеальный вес определяется формулой (рост - 100 = идеальный вес).
string hightweight(int hight, int weight) {
    if (weight > hight - 100)
        return "lose weight";
    else 
        return "gain weight";
}

// 15. Ввести с клавиатуры номер месяца. 
// Выдать сообщение о названии месяца и времени года.
string month(int month) {
    switch (month) {
        case 1:
            return "январь зима";
        case 2:
            return "февраль зима";
        case 3:
            return "март весна";
        case 4:
            return "апрель весна";
        case 5:
            return "май весна";
        case 6:
            return "июнь лето";
        case 7:
            return "июль лето";
        case 8:
            return "август лето";
        case 9:
            return "сентябрь осень";
        case 10:
            return "октябрь осень";
        case 11:
            return "ноябрь осень";
        case 12:
            return "декабрь зима";
    }
}

// 16. Определить, является ли шестизначное число "счастливым"
string luckynumber(int number) {
    if (number / 100000 + number / 1000 % 10 + number / 10 % 10 == 
    number / 10000 % 10 + number / 100 % 10 + number % 10)
        return "lucky";
    else 
        return "unlucky";
}

// 18. Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом.
string pallindrome(int number) {
    if (number / 1000 == number % 10 & number / 10 % 10 == number / 100 % 10 )
        return "pallindrome";
    else 
        return "not pallindrome";
}

int main() {
    std::cout << trapezearea(10, 8, 6) << std::endl; //1
    std::cout << circlearea(5) << " " << circumferencelength(5)<< std::endl; //2
    std::cout << trianglearea(3, 4) << " " << hypotenuse(3, 4) << std::endl; //3
    std::cout << digitsum(1234) << std::endl; //4
    std::cout << dectopolr(5, 8) << " " << dectopolfi(5, 8)<< std::endl; //5
    std::cout << poltodecx(9.43398, 0.558599) << " " << poltodecy(9.43398, 0.558599)<< std::endl; //6
    std::cout << timehour(4732) << " " << timemin(4732)<< std::endl; //9
    std::cout << ifisosceles(1, 1, 2) << std::endl; //10 (1 - треугольник равнобедренныйб 0 - не равнобедренный)
    std::cout << sale(1231) << std::endl; //11
    std::cout << hightweight(175, 70) << std::endl; //12
    std::cout << month(9) << std::endl; //15
    std::cout << luckynumber(104357) << std::endl; //16
    std::cout << pallindrome(1221) << std::endl; //18
    return 0;
}
