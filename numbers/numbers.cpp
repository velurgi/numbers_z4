// Циферки
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

int megacheck(int zzz, int sizzzze) {
    while (std::cin.fail() || zzz < 1 || zzz > sizzzze) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода данных." << std::endl << "Введите число заново: ";
        std::cin >> zzz;
    }
    return zzz;
}
int onetwocheck(int zzz) {
    while (std::cin.fail() || zzz < 1 || zzz > 2 ) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода данных." << std::endl << "Введите число заново: ";
        std::cin >> zzz;
    }
    return zzz;
}

int main()
{
    setlocale(LC_ALL, "Ru");
    using std::string;
    std::cout << "Введите строку: " << std::endl;
    string str;
    getline(std::cin, str);
    int length = str.length();
    std::vector <string> chars;
    for (int i = 0; i < length; i++) {
        switch (str[i]) { //Проверка на все цифры
        case '1':
            chars.push_back("1");
            continue;
        case '2':
            chars.push_back("2");
            continue;
        case '3':
            chars.push_back("3");
            continue;
        case '4':
            chars.push_back("4");
            continue;
        case '5':
            chars.push_back("5");
            continue;
        case '6':
            chars.push_back("6");
            continue;
        case '7':
            chars.push_back("7");
            continue;
        case '8':
            chars.push_back("8");
            continue;
        case '9':
            chars.push_back("9");
            continue;
        case '0':
            chars.push_back("0");
            continue;

        } 

    }
    std::cout << "Вы хотите вывести одну цифру, или диапазон? (1 - одна, 2 - диапазон) :" << std::endl;
    bool checkbox = false;
    int checkn;
    std::cin >> checkn;
    checkn = onetwocheck(checkn);
    if (checkn == 1) {
        checkbox = true;
    }
    else
    {
        checkbox = false;
    }
    if (checkbox) {
        std::cout << "Введите номер цифры, которую желаете вывести: " << std::endl;
        int askedNumber;
        std::cin >> askedNumber;
        askedNumber = megacheck(askedNumber, chars.size());
        std::cout << "Цифровой номер " << askedNumber << " является " << chars[askedNumber - 1] << std::endl;
    }
    else {
        std::cout << "Введите начало диапазон цифр, которые желаете вывести: " << std::endl;
        int askedNumber1;
        std::cin >> askedNumber1;
        askedNumber1 = megacheck(askedNumber1, chars.size());
        while (askedNumber1 <= 0 || askedNumber1 > chars.size()) {
            std::cout << "Первое число должно быть больше 0 и меньше количества всех чисел." << std::endl << "Введите его снова: ";
            std::cin >> askedNumber1;
        }

        std::cout << "Введите конец диапазон цифр, которые желаете вывести: " << std::endl;
        int askedNumber2;
        std::cin >> askedNumber2;
        askedNumber2 = megacheck(askedNumber2, chars.size());
        while (askedNumber2 > chars.size()) {
            std::cout << "Второе число должно быть меньше количества всех чисел." << std::endl << "Введите его снова: ";
            std::cin >> askedNumber2;
        }
        if (askedNumber1 > askedNumber2) {
            int x = askedNumber1;
            askedNumber1 = askedNumber2;
            askedNumber2 = x;
        }
            
        std::cout << "Цифровой диапазон " << askedNumber1 << "-" << askedNumber2 << " соответствуем цифрам: " << std::endl;
        for (unsigned int f = askedNumber1 - 1; f < askedNumber2; f++) {
            std::cout << chars[f] << " ";
        }
    }

    return 0;
}
