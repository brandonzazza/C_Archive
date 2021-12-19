// First cpp Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Using // will create a comment which isnt read by the computer.

#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std; 
// namespace help define specific objects (function) we want ot use as to avoid naming conflicts.
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
    float number_1; int number_2;
    // you can have two different numbers but will conform to their data type ex int(3.5) -> 3 or float(2.5) -> 2.5


    cout << "input a Float number ex(3.5): ";
    cin >> number_1;
    cout << "Input a Int number ex(3): ";
    cin >> number_2;

    cout << " your numbers added are: " << number_1 + number_2 << endl;
    cout << " your numbers subtracted are: " << number_1 - number_2 << endl;
    cout << " your numbers multiplied are: " << number_1 * number_2 << endl;
    cout << " your numbers divided are: " << number_1 / number_2 << endl;
}


// Vectors are fun
void vector_create() 
{
    vector<int> numb_list(3);
    // vectors act liks lists and can store multiple items like numbers or strings. however it can only keep the same data type
    // keep in mind all vectors start with 0 instead of 1 so a vector size of 3 will count up to 2
    numb_list[0] = 10;
    numb_list[1] = 5;
    numb_list[2] = 0;

    cout << "First value is " << numb_list[0] << endl;
    // will print out 10 since we assigned it the number 10
    cin;
    cout << "Size of vector is " << numb_list.size() << endl;
    // print out 3 since we have three items in our list
    cin;
    numb_list.push_back(8);
    // .pushback  will add a value to the list without manually filling it in.   ex ->  "vector name".pushback("Value")
    cout << "We added " << numb_list[3] << " to the vector" << endl;
    cin;
    cout << "The new size is " << numb_list.size() << endl;
    cin;
    

    numb_list.pop_back();
    cout << "We removed the last item and the new size is " << numb_list.size() << endl;
}

// if statements

void if_statement() 
{
    // if statements consist of three components if, else if, and else. you can include however many else if statements but you should always end with an else statement.
    string answer;
    cout << endl << "Input yes or no: \n";
    cin >> answer;
    if (answer == "yes") {
        cout << "You input yes! \n";
    }
    else if (answer == "no") {
        cout << "You input no! \n";
    }
    else{ 
        cout << "You didn't type yes or no! \n";
    }
       
    // logical operators can also be used in if statements. what better way then to use bagles and cream cheese

    int bagles = 5;
    bool has_cream_cheese = true;

    if (bagles > 5) {
        cout << "More than 5 bagles:" << endl;
    }
    else if (bagles > 5 && has_cream_cheese == true) {
        cout << "more than 5 bagles and with cream cheese" << endl;
    }
    else if (bagles <= 5) {
        cout << "Less than 5 bagles but no cream cheese " << endl;
    }
    else if (bagles <= 5 || has_cream_cheese == true) {
        cout << "Less than 5 bagles or has cream cheese" << endl;
    }
}

void switch_statement() 
{
    int case_number = 2;
    // switch cases are intresting in that they make programs faster however they can only use numerical cases to jump to the proper points. No strings or floats sadly.
    switch (case_number) {
        case 1:
            cout << "You Chose 1";
            break;
        case 2:
            cout << "You Chose 2";
            break;
        case 3:
            cout << "You Chose 3";
            break;
        default:
            cout << "Why you no like number :(";
            break;
    
    }
}

void while_for_loops() 
{
    // here you can see the two main loops used for programs. either works but some are more suited for other situations.
    int number = 0;
    int loops = 0;


    while (number != 1234) {
        cout << "Type 1234 to exit the loop \n";
        cin >> number;
    }

    for (int i = 0; loops < 10; loops++) {
        cout << "You have completed " << loops << " loops " << "\n";
    }

}

int main()
{
    string name;
    // Declared variables
    name = name_grab();
    name_spell(name);
    numbers();
    vector_create();
    if_statement();
    while_for_loops();
    switch_statement();
    return 0;
}
