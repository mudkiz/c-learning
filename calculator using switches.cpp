#include <iostream>

int main(){
char number;
double num1;
double num2;
double result;

std::cout << "calculator:\n";

std::cout << "enter either ( + - * / ): ";
std::cin >> number;

std::cout << "enter #1: ";
std::cin >> num1;

std::cout << "Enter #2: ";
std::cin >> num2;

switch(number){
    case '+':
    result = num1 + num2;
    std::cout << "result: " << result << '\n';
    break;
    case '-':
    result = num1 - num2;
    std::cout << "result: " << result << '\n';
    break;
    case '*':
    result = num1 * num2;
    std::cout << "result: " << result << '\n';
    break;
    case '/':
    result = num1 / num2;
    std::cout << "result: " << result << '\n';
    break;


}

return 0;
}