#pragma once
#include <iostream>
#include <typeinfo>

class Vehicle {
public:
    Vehicle();
    Vehicle(const std::string& type);
    Vehicle(const Vehicle& other);
    virtual std::string getType() const = 0;
    virtual ~Vehicle();
    virtual void start() = 0; //pure virtual

protected:
    std::string m_type;
};

//ключевое слово pure virtual используетс€
//дл€ объ€влени€ чисто виртуальных функций
//в базовом классе.„исто виртуальна€ функци€ Ч это функци€,
//котора€ не имеет реализации в базовом классе и должна быть
//переопределена в производных классах. ласс,
//содержащий хот€ бы одну чисто виртуальную функцию,
//называетс€ абстрактным классом и не может быть инстанцирован.