#include <iostream>
#include <string>
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
                        break;
                        case '-':
                        std::cout << "Enter two numbers you would like to subtract: ";
                        std::cin >> num1 >> num2;
                        result = num1 - num2;
                        break;
                        case '/':
                        std::cout << "Enter two numbers you would like to divide: ";
                        std::cin >> num1 >> num2;
                        result = num1 / num2;
                        break;
                        case '*':
                        std::cout << "Enter two numbers you would like to multiply: ";
                        std::cin >> num1 >> num2;
                        result = num1 * num2;
                        break;
                        default:
                        std::cout << "Invalid input" << std::endl;
                        break;
                    }
                    std::cout << "Result: " << result << std::endl;
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
                    break;
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
            std::cout << "1. Reverse Word\n2. Count Characters\n3. Find something in a word\nM: Main Menu\n";
            std::cout << "Enter Selection: ";
            std::cin >> choice3;
            switch(choice3){
                case '1':{
                    std::string word;
                    std::cout << "Enter a word to be reversed: ";
                    std::cin >> word;
                    std::cout << "Reversed word: ";
                    for(int i{word.size()}; i >= 0; i--){
                        std::cout << word[i];
                    }
                    std::cout << std::endl;
                    break;
                }
                case '2':{
                    std::cout << "Enter word: ";
                    std::string word;
                    std::cin >> word;
                    std::cout << "Character count: " << word.length() << std::endl;
                    break;
                }
                case '3':{
                    std::string word;
                    std::cout << "What word would you like to search: ";
                    std::cin >> word;
                    std::cout << "What would you like to find in this word: ";
                    std::string find;
                    std::cin >> find;
                    size_t wordpos{word.find(find)};
                    if(wordpos != std::string::npos){
                        std::cout << "Found " + find + " at position " << wordpos + 1<< std::endl;
                    }else{
                        std::cout << find + " was not found." << std::endl;
                    }
                break;
                }
            case 'm':
            case 'M':
                std::cout << "Returning to main menu..." << std::endl;
                break;
            default:
                std::cout << "Invalid input" << std::endl;
                break;
            }
                }while(choice3 != 'm' && choice3 != 'M');
        }
        break;
    case 'q':
    case 'Q':
    std::cout << "Closing program..." << std::endl;
    break;
    }
    }while(choice1 != 'q' && choice1 != 'Q');
    return 0;
}