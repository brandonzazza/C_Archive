// First cpp Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Also using // will create a comment which isnt read by the computer.

#include <iostream>
#include <string>
#include <list>

using namespace std; 
// doing this command removes the need to declare each object in the std library however you will still need to 
// namespace is " std:: " followed by the object for example -> std::cout << "Hello World" -> Hello World.

string name_grab() 
// This is a function -> notice we start with a data type like string, int, or char. 
// This tells the function what the expected outcome is in this case we return base which is a string type. 
// also using >> or << is known as an operator which is equivelent to operators in math.
{
    string name;
    // Variables Declared Above
    cout << "Hello World!\n";
    cout << "Type your Name: ";
    cin >> name;
    cout << "Your name is " << name << "\n";
    return name;
}

void name_spell(string name_imported)
// notice that we import name from the previous function i renamed it name_imported but you can chose whatever name you want
{
    // Creates list based on imported string
    // also this is a for loop meaning that for the input conditon keep doing a defined task until a defined cut off is reached.
    list<char> list_chars;
    for (char i : name_imported) {
        list_chars.push_back(i);
    }

    cout << "\nYour name is spelled\n";

    // Prints contents of list on new lines
    for (char c : list_chars) {
        cout << c << endl;
    }
}

void numbers()
{
    int number_1; int number_2;

    cout << "input a number: ";
    cin >> number_1;
    cout << "Input a second number: ";
    cin >> number_2;

    cout << " your numbers added are: " << number_1 + number_2 << endl;
    cout << " your numbers subtracted are: " << number_1 - number_2 << endl;
    cout << " your numbers multiplied are: " << number_1 * number_2 << endl;
    cout << " your numbers divided are: " << number_1 / number_2 << endl;
}

int main()
{
    string name;
    // Declared variables

    name = name_grab();
    name_spell(name);
    numbers();
    return 0;
}
