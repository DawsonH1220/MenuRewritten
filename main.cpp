#include <iostream>

int main(){
    char choice1{};
    do{
        std::cout << "-----------------Main Menu-------------------" << std::endl;
        std::cout << "1. Math\n2. Words\nQ: Quit\n";
        std::cout <<"Enter Selection: ";
        std::cin >> choice1;
        switch(choice1){
            case '1':{
                char choice2{};
                char math{};
                double num1{};
                double num2{};
                double result{};
                do{
                std::cout << "-----------------Math Menu-------------------" << std::endl;
                std::cout << "1. Basic math\n2. Calculate how far an object traveled\n3. Calculate Area\nM: Main Menu\n";
                std::cout << "Enter Selection: ";
                std::cin >> choice2;
                switch(choice2){
                    case '1':
                    std::cout << "Enter a math symbol(+, -, /, *): ";
                    std::cin >> math;
                    switch(math){
                        case '+':
                        std::cout << "Enter two numbers you would like to add: ";
                        std::cin >> num1 >> num2;
                        result = num1 + num2;
                        std::cout << "Result: " << result << std::endl;
                        break;
                        case '-':
                        std::cout << "Enter two numbers you would like to subtract: ";
                        std::cin >> num1 >> num2;
                        result = num1 - num2;
                        std::cout << "Result: " << result << std::endl;
                        break;
                        case '/':
                        std::cout << "Enter two numbers you would like to divide: ";
                        std::cin >> num1 >> num2;
                        result = num1 / num2;
                        std::cout << "Result: " << result << std::endl;
                        break;
                        case '*':
                        std::cout << "Enter two numbers you would like to multiply: ";
                        std::cin >> num1 >> num2;
                        result = num1 * num2;
                        std::cout << "Result: " << result << std::endl;
                        break;
                        default:
                        std::cout << "Invalid input" << std::endl;
                        break;
                    }
                    break;
                case '2':{
                    double mph{};
                    double minutes{};
                    double traveled{};
                    std::cout << "Enter how fast the object traveled in MPH: ";
                    std::cin >> mph;
                    std::cout << "Enter how many minutes the object has taveled: ";
                    std::cin >> minutes;
                    traveled = (mph / 60) * minutes;
                    std::cout << "Distance traveled: " << traveled << " miles" << std::endl;
                }
                case '3':{
                    double width{};
                    double length{};
                    std::cout << "Enter width and length seperated by spaces: ";
                    std::cin >> width >> length;
                    result = width * length;
                    std::cout << "Area: " << result << std::endl;
                }
                case 'm':
                case 'M':
                std::cout << "Returning to main menu..." << std::endl;
                break;
                default:
                    std::cout << "invalid input" << std::endl;
                    break;
                }
                }while(choice2 != 'm' && choice2 != 'M');
                }
                break;
            case '2':{
            char choice3{};
            do{
            std::cout << "-----------------Word Menu-------------------" << std::endl;
            std::cout << "1. Reverse Word\nM: Main Menu\n";
            std::cout << "Enter Selection: ";
            std::cin >> choice3;
            switch(choice3){
                case '1':{
                    std::string word{};
                    std::cout << "Enter a word to be reversed: ";
                    std::cin >> word;
                    for(int i{word.size()}; i >= 0; i--){
                        std::cout << word[i];
                    }
                    std::cout << std::endl;
                    break;
                }
            case 'm':
            case 'M':
                std::cout << "Returning to main menu..." << std::endl;
                break;
            default:
                std::cout << "Invalid input" << std::endl;
            }
                }while(choice3 != 'm' && choice3 != 'M');
        }
    case 'q':
    case 'Q':
    std::cout << "Closing program..." << std::endl;
    break;
    }
    }while(choice1 != 'q' && choice1 != 'Q');
    return 0;
}