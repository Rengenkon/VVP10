#include <iostream>
#include <math.h>
/*
Задание 10

1. Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»
2. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».
3. Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».
4. Дано трехзначное число. Проверить истинность высказывания: «Цифры данного числа образуют возрастающую или убывающую последовательность».
5. Дано четырехзначное число. Проверить истинность высказывания: «Данное число читается одинаково слева направо и справа налево».
6. Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».
7. Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».


Каждая задача решена в отдельном классе
*/


class z1
{
private:
    int a, b;

public:

    z1(int aa = 1, int bb = 1) {
        a = aa;
        b = bb;
    }

    void test() {
        std::cout << "Задача 1\n";
        std::cout << a << " и " << b << "\n";
        if (a > 2 && b <= 3) {
            std::cout << "Высказывание истино";
        }else{
                std::cout << "Высказывание ложно";
        }
    }
};

class z2
{
private:
    int a, b, c;

public:

    z2(int aa = 1, int bb = 2, int cc = 3) {
        a = aa;
        b = bb;
        c = cc;
    }

    void test() {
        std::cout << "\nЗадача 2\n";
        std::cout << a << " и " << b << " и " << c << "\n";
        if (a < b && b < c) {
            std::cout << "Высказывание истино";
        }
        else {
            std::cout << "Высказывание ложно";
        }
    }
};

class z3
{
private:
    int a;
public:

    z3(int aa = 12) {
        a = aa;
    }

    void test() {
        std::cout << "\nЗадача 3\n" << a << "\n";
        if (a > 9 && a < 100 && a % 2 == 0) {
            std::cout << "Высказывание истино";
        }
        else {
            std::cout << "Высказывание ложно";
        }
    }
};

class z4
{
private:
    int a;
public:

    z4(int aa = 123) {
        a = aa;
    }

    void test() {
        std::cout << "\nЗадача 4\n"<< a << "\n";
        if (a % 10 - (a / 10) % 10 == (a / 10) % 10 - a / 100)  {
            std::cout << "Высказывание истино";
        }
        else {
            std::cout << "Высказывание ложно";
        }
    }
};

class z5
{
private:
    int a;

public:

    z5(int aa = 1221) {
        a = aa;
    }

    void test() {
        std::cout << "\nЗадача 5\n" << a << "\n";
        if (a % 10 == a / 1000 && (a/100)% 10 == (a / 10) % 10){
            std::cout << "Высказывание истино";
        }
        else {
            std::cout << "Высказывание ложно";
        }
    }
};

class z6
{
private:
    int a, b, c;

public:

    z6(int aa = 3, int bb = 4, int cc = 5) {
        a = aa;
        b = bb;
        c = cc;
    }

    void test() {
        std::cout << "\nЗадача 6\n" << a << ' ' << b << ' ' << c << "\n";
        if (a*a == b*b + c*c ||
            b*b == a*a + c*c ||
            c*c == a*a + b*b) {
            std::cout << "Высказывание истино";
        }
        else {
            std::cout << "Высказывание ложно";
        }
    }
};

class z7
{
private:
    int a, b, c;

public:

    z7(int aa = 3, int bb = 4, int cc = 5) {
        a = aa;
        b = bb;
        c = cc;
    }

    void test() {
        std::cout << "\nЗадача 7\n" << a << ' ' << b << ' ' << c << "\n";
        if (a + b > c && a + c > b && c + b > a) {
            std::cout << "Высказывание истино";
        }
        else {
            std::cout << "Высказывание ложно";
        }
    }
};


int main()
{
    setlocale(LC_ALL, "rus");

    z1 first;
    z2 second;
    z3 third;
    z4 fourth;
    z5 fifth;
    z6 fifth6;
    z7 fifth7;

    first.test();
    second.test();
    third.test();
    fourth.test();
    fifth.test();
    fifth6.test();
    fifth7.test();

    return 0;
}
