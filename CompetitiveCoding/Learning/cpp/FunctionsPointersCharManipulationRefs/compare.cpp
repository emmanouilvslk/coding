#include <iostream>
//Definition

template <typename T>

T maximum(T a, T b){
    if(a>b)
        return a;
    else
        return b;
}

//pass by value
// void say_age(int age){
//     std::cout << "Inside function say_age " << age << std::endl;
// }

// pass by pointer
void say_age(int* age){
    std::cout <<  "Inside function say_age " << ++(*age) << std::endl;
}

//pass by reference
void say_age(int& age){
    std::cout <<  "Inside function say_age " << ++(age) << std::endl;
}


