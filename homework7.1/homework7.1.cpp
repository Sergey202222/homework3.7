#include <iostream>
#include <Windows.h>

int function(std::string str, int forbidden_length)
{
    return str.length();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string str{};
    int forbidden_length{};
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    while (true)
    {
        std::cout << "Введите слово: ";
        std::cin >> str;
        try
        {
            if (str.length() == forbidden_length) throw std::runtime_error("Вы ввели слово запретной длины! До свидания");
        }
        catch (std::exception& exp)
        {
            std::cerr << exp.what();
            break;
        }
        std::cout << "Длина слова " << "\"" << str << "\" " << function(str, forbidden_length) << std::endl;
    }
    return EXIT_SUCCESS;
}