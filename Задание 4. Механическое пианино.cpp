﻿// Задание 4. Механическое пианино.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
int main()
{

    enum note
    {
        DO = 1,
        RE = 2,
        MI = 4,
        FA = 8,
        SOL = 16,
        LA = 32,
        SI = 64
    };
    std::cout << "Input accord : (1 - do, 2 - re, 3 - mi, 4 - fa, 5 - sol, 6 - la, 7 - si) \n";
    std::string accord,acc;
    int notes, notesS;
    std::cin >> accord;
    for (int i = 0; i < accord.size(); i++)
    {
        acc = accord[i];
        notes = stoi(acc);
        notes = 1 << notes-1;
        if ( notes & DO)
        {
            std::cout << "DO"<< std::endl;

        }else if(notes & RE)
        {
            std::cout << "RE" << std::endl;
        }
        else if (notes & MI)
        {
            std::cout << "MI" << std::endl;
        }
        else if (notes & FA)
        {
            std::cout << "FA" << std::endl;
        }
        else if (notes & SOL)
        {
            std::cout << "SOL" << std::endl;
        }
        else if (notes & LA)
        {
            std::cout << "LA" << std::endl;
        }
        else if (notes & SI)
        {
            std::cout << "SI" << std::endl;
        }
    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
