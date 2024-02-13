#include <iostream>
#include "compare.h" // Preprocessor

template <typename T>

T maximum(T a, T b){
    if(a>b)
        return a;
    else
        return b;
}


int main(){

    int x{5};
    int y{10};

    int maximum1 = maximum(x,y);
    std::cout << "max : " << maximum1 << std::endl;


    int age {25};

    say_age(age);
    std::cout <<  "Inside main " << age << std::endl;



    // say_age(&age);

    // std::cout <<  "Inside main " << age << std::endl;



    //lambda function
    auto my_func =  [](std::string name) -> std::string{
        return name;
    };   

    std::cout << my_func("hey") << std::endl;


    // lambda fun called directly just by passing arguments
    [](int number1,int number2){
        std::cout << number1 + number2 << std::endl;
    }(100,100);
    
    return 0;
}