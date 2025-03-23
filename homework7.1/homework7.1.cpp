#include <iostream>
#include <Windows.h>

int function(std::string str, int forbidden_length)
{
    try
    {
        if (str.length() == forbidden_length) throw str.length();
    }
    catch(size_t bad_length)
    {
        std::cerr << "Вы ввели слово запретной длины! До свидания";
        
    }
    return str.length();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string str{};
    int forbidden_length{}, length{};
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    while (true)
    {
        std::cout << "Введите слово: ";
        std::cin >> str;
        length = function(str, forbidden_length);
        if (length == forbidden_length) return EXIT_FAILURE;
        std::cout << "Длина слова " << "\"" << str << "\" " << length << std::endl;
    }
    return EXIT_SUCCESS;
}