// 1.Спидометр.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{ 
  float speed_value;
  float value=0;
    char speed_str[4];
    std::cout << "Speed delta:\n";
    std::cin >> value;
    speed_value = value;
    std::sprintf(speed_str, "%.1f", speed_value);
    std::cout << "Speed :\n";
    std::cout << speed_str<< std::endl;
    do
    {
    std::cout << "Speed delta:\n";
    std::cin >> value;
   
    speed_value+= value;
    if (speed_value > 0 && speed_value < 150)
    {

    

    
    std::sprintf(speed_str, "%.1f", speed_value);
    std::cout << "Speed :\n";
    std::cout << speed_str << std::endl;


    }
    else if(speed_value > 150)
    {
        std::cout << "You have exceeded the speed limit. Try again!!!!!" << std::endl;
        speed_value -= value;
    }
    else if (speed_value < 0)
    {
        std::cout << "You have exceeded the speed limit. Enter a number that is less than 0 to slow down. Try again!!!!!" << std::endl;
        speed_value += abs(value);
    }
    else if(speed_value == 0 )
    {
        std::cout << "You speed is 0 | The end!!"<< std::endl;
        break;
    }
    else if (speed_value == 150)
    {
        std::cout << "You speed is 150 | The end!!" << std::endl;
        break;
    }

    } while (true);
    return 0;
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
