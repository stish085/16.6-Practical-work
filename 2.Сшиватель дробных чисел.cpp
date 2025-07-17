// 2.Сшиватель дробных чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "string" 

int main()
{  
    std::string integer, fractional,split;
    std::cout << "Enter the integer part of the number\n";
    std::cin >> integer;
    std::cout << "Enter the fractional part of the number\n";
    std::cin >> fractional;
    split = integer + "." + fractional;
    double value = std::stod(split);
    std::cout << value;


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// std::string

//  std::cout << "\n";
//   double value = std::stod(split);
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
