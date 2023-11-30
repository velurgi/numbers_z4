// Циферки
#include <iostream>
#include <string>
#include <vector>

int main()
{
    setlocale(LC_ALL, "Ru");
    using std::string;
    std::cout << "Введите строку: " << std::endl;
    string str;
    std::cin >> str;
    int length = str.length();
    std::vector <string> chars;
    for (int i = 0; i < length; i++) {
        switch (str[i]) { //Проверка на все цифры
        case ' ':
            std::cout << "space out of spaces =)))" << std::endl<< std::endl<< std::endl<< std::endl;
            break;
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
        default:
            std::cout << "default";
            continue;
        } //Проверка на цифры и добавление их в массив chars // ЭТО ДЕРЬМО ЛОМАЕТСЯ ОБ ПРОБЕЛ, НАЙТИ СПОСОБ ЕГО УДАЛИТЬ

    }
    std::cout << "Номер цифры, которую желаете вывести: " << std::endl;
    int askedNumber;
    std::cin >> askedNumber;
    std::cout << "Цифровой номер " << askedNumber << " является " << chars[askedNumber-1] << std::endl;





    //std::cout << length;


}
