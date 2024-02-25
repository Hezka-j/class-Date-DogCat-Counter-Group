#include <iostream>
using namespace std;
class Cat;
class Dog{
public:
    string name;
    int age;
    Dog() : Dog("", 0) {}
    Dog(string name, int age)
    {
        SetName(name);
        SetAge(age);
    }
    void Bark()
    {
        cout << "Bark!\n";
    }
    void SetName(string name)
    {
        this->name = name;
    }
    string GetName()
    {
        return name;
    }
    void SetAge(int age)
    {
        if (age > 15)
            throw "error";
        this->age = age;
    }
    int GetAge()
    {
        return age;
    }
    operator Cat();
};
class Cat{
public:
    string name;
    int age;
    Cat() : Cat("", 0) {}
    Cat(string name, int age)
    {
        SetName(name);
        SetAge(age);
    }
    operator Dog ()
    {
        Dog temp;
        temp.SetName(this->name);
        temp.SetAge(this->age);
        return temp;
    }
    void Meow() 
    {
        cout << "Meow!\n";
    }
    void SetName(string name)
    {
        this->name = name;
    }
    void SetAge(int age)
    {
        if (age > 15)
            throw "erorr";
        this->age = age;
    }
    string GetName()
    {
        return name;

    }
    int GetAge()
    {
        return age;
    }
};
Dog::operator Cat()
{
    Cat temp;
    temp.SetName(this->name);
    temp.SetAge(this->age);
    return temp;
}
int main()
{
    Cat k("Barsik", 5);
    Dog d = k;
    cout << d.name;
    Dog g("Bars", 7);
    Cat z = g;
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
