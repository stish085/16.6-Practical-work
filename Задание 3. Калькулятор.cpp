// Задание 3. Калькулятор.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
int main()
{
    std::cout << "input expressionn:\n";
    std::string expression;
    double valueOne,valueTwo,answer;

    std::cin >> expression;
  
    expression.find("");
    if (expression.find("/")!= std::string::npos)
    {

        valueOne = std::stod(expression);

        valueTwo = std::stod(expression.erase(0, expression.find("/") + 1));
        answer = valueOne / valueTwo;
        std::cout << "Answer " << answer;
    }
    else if(expression.find("+") != std::string::npos)
    {
        valueOne = std::stod(expression);

        valueTwo = std::stod(expression.erase(0, expression.find("+") + 1));
        answer = valueOne + valueTwo;
        std::cout << "Answer " << answer;
    }
    else if (expression.find("-") != std::string::npos)
    {
        valueOne = std::stod(expression);

        valueTwo = std::stod(expression.erase(0, expression.find("-") + 1));
        answer = valueOne - valueTwo;
        std::cout << "Answer " << answer;
    }
    else if (expression.find("*") != std::string::npos)
    {
        valueOne = std::stod(expression);
     
        valueTwo = std::stod(expression.erase(0, expression.find("*")+1));
        answer = valueOne * valueTwo;
    std::cout << "Answer "<< answer;
    }
    else
    {
        std::cout << "you entered the expression incorrectly!!! " ;
    }
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
