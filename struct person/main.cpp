//
//  main.cpp
//  struct person
//
//  Created by Дмитрий Сергеевич on 03.10.2023.
//

#include <iostream>
#include <string>

struct Date {
    int day = 1;
    int month = 1;
    int year = 1970;
    std::string note = "empty";
};

void print_date(const Date& D) {
    std::cout << D.day << '.' << D.month << '.' << D.year << " - " << D.note << std::endl;
}

Date input_date() {
    Date tmp;
    
    std::cout << "Введите день -> ";
    std::cin >> tmp.day;
    std::cout << "Введите месяц -> ";
    std::cin >> tmp.month;
    std::cout << "Введите год -> ";
    std::cin >> tmp.year;
    std::cin.ignore();
    std::cout << "Введите запись ->";
    std::getline(std::cin, tmp.note);
    
    return tmp;
}

void fill_date(Date& D){
    std::cout << "Введите день -> ";
    std::cin >> D.day;
    std::cout << "Введите месяц -> ";
    std::cin >> D.month;
    std::cout << "Введите год -> ";
    std::cin >> D.year;
    std::cin.ignore();
    std::cout << "Введите запись ->";
    std::getline(std::cin, D.note);
}

struct myDate {
    int day = 1;
    int month = 1;
    int year = 1;
};
struct CoinKeeper {
    std::string name = "noname";
    myDate birthday;
    int coins_number = 0;
    int* coins = nullptr;
};


void print_keeper(const CoinKeeper& CK) {
    std::cout << "Имя: " << CK.name << std::endl;
    std::cout << "Дата рождения: " << CK.birthday.day << '.' << CK.birthday.month << '.' << CK.birthday.year << '.' << std::endl;
    std::cout << "Монеты: ";
    for (int i = 0; i < CK.coins_number; i++)
        std::cout << CK.coins[i] << ' ';
    std::cout << std::endl;
}

inline int age(const CoinKeeper& CK, int year) {
    return (year - CK.birthday.year);
}
int cash(CoinKeeper& CK, int coins){
    int sum = 0;
    for(int i = 0; i <CK.coins_number; i++)
        sum += CK.coins[i];
    return sum;
}

struct Point {
    double X{};
    double Y{};
};
int compare_distance( Point P1, Point P2){
    double dist1 =P1.X * P1.X + P1.Y * P1.Y;
    double dist2 =P2.X * P2.X + P2.Y * P2.Y;
    if (dist1 > dist2)
        return 1;
    return dist1 < dist2 ? -1 : 0;
}





int main(int argc, const char * argv[]) {
    setlocale (LC_ALL, "RU");
    int n;
    
    struct Person {
        std::string name;
        int age;
        std::string job;
        double salary;
    } p3, p4;
   //структуры создания, мгновенная иницилизация, работа с полями
    /*Person p1; // создание объекта на онове структуры person
    // инициализация полей объекта p1
    p1.name = "Tom Smith";
    p1.age = 25;
    p1.job = "progamer";
    p1.salary = 80000;
    // вывод полей объекта p1
    std::cout << "Имя: " << p1.name << std::endl;
    std::cout << "Возраст: " << p1.age << std::endl;
    std::cout << "Должность: " << p1.job << std::endl;
    std::cout << "Зарплата: " << p1.salary << std::endl;
    
    Person p2 {
       "Bob Thomas",
        45,
        "director",
        130000
    };
    std::cout << "Имя: " << p2.name << std::endl;
    std::cout << "Возраст: " << p2.age << std::endl;
    std::cout << "Должность: " << p2.job << std::endl;
    std::cout << "Зарплата: " << p2.salary << std::endl;
    
    p3 = p1; // копирование значений полей объекта p1 в поля объекта p3*/
    
    //Указатели и функции при работе со структурами
    /*Date d1;
    print_date(d1);
    
    Date* pd1 = &d1;
    std::cout << "День: " << pd1 -> day << std::endl; // Обращение к полю day через указатель на объект d1
    std::cout << std::endl;
    
    std::cout << "Ввод данных в объект:\n";
    //Date d2 = input_date();
    Date d2;
    fill_date(d2);
    
    print_date(d2);*/
    
    //task1 Храниетль монет
    /*std::cout << "Задача1.\n";
    CoinKeeper ck {
      "Robert Polson",
        { 11, 2, 2010 },
        5,
        new int [5]{ 10, 2, 5, 2, 1 }
    };
    print_keeper(ck);
    std::cout << "Возраст: " << age(ck,2023) << std::endl;
    std::cout << "Вся сумма денег: " << сash(ck) << std::endl;
    
    
    delete [] ck.coins;*/
    
    //task2 точки в плоскости
    std::cout << "Задача2.\n";
    Point A{ 2.2, 5.0 }, B{ 7.1, 6.8 };
    std::cout << compare_distance(A, B) << std::endl;
    std::cout << compare_distance({5.5, 1.1,}, {3.3, 0.77}) << std::endl;
    std::cout << compare_distance({5.5, 1.1,}, {-5.5, -1.1}) << std::endl;
    
    
    
    
    
    return 0;
}
