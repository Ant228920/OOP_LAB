//
// Created by Користувач on 07.04.2024.
//

#ifndef OOPLAB1_WRONG_H
#define OOPLAB1_WRONG_H
#include <iostream>
class Wrong: public std::exception{
public:
    Wrong()=default;
    ~Wrong()=default;
    const char *what() const noexcept override{
        return "Wrong choise!";
    };
};
#endif //OOPLAB1_WRONG_H
