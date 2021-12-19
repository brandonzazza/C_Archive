// Fun C++ Machine
// Author Brandon Zazza

#include <iostream>
#include <stdlib.h>

void color_gen() {
    char R[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    char color_string[20];

    int Ra = 0;
    int Rb = rand() % 16;

    sprintf_s(color_string, "color %c%c", R[Ra], R[Rb]);
    system(color_string);
}

void menu() {
    std::cout << "Here is the menu as follows" << std::endl;
    std::cout << "1 -> beep machine\n" << "2 -> color text machine\n" << "3 -> secret message\n" << "'not listed number'-> exit" << std::endl;
}

int main()
{
    int choice;
    std::cout << "Type a number from the list to do something cool or press 0 for menu: " << std::endl;
    std::cin >> choice;
    switch (choice) {
    case 0:
        menu();
        main();
        break;
    case 1:
        system("cls");
        std::cout << "I make beep noise\a" << std::endl;
        main();
        break;
    case 2:
        system("cls");
        color_gen();
        std::cout << "Random Color Time" << std::endl;
        main();
        break;
    case 3:
        std::cout << "I like secrets" << std::endl;
        main();
        break;
    default:
        std::cout << "Thanks for playing! " << std::endl;
        break;
    }
}


