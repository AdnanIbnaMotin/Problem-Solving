/*
Write a program that plays a word game with the user. The program should ask the user to enter the following:

His or her name
His or her age
The name of a city
The name of a college
A profession
A type of animal
A pet's name

After the user has entered these items, the program should display the following story inserting the user's input into
the appropriate locations:

There once was a person named NAME who lived in CITY. At the age of AGE, NAME went to college at COLLEGE. NAME graduated
and went to work as a PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They both lived happily ever after!
*/

#include <iostream>

int main(int argc, char* argv[])
{
    std::string
        name = "",
        age = "",
        city = "",
        college = "",
        profession = "",
        animal = "",
        petName = "";

    std::cout << "Your name: ";
    getline(std::cin, name);

    std::cout << "Your age: ";
    getline(std::cin, age);

    std::cout << "City you live: ";
    getline(std::cin, city);

    std::cout << "Which college you studied: ";
    getline(std::cin, college);

    std::cout << "What is your profession: ";
    getline(std::cin, profession);

    std::cout << "What kinds of animal you pet: ";
    std::cin >> animal;

    std::cout << "Your pet name: ";
    std::cin >> petName;


    std::cout << std::endl
                << "There once was a person named " << name
                << " who lived in " << city << ". At the age of " << age << ", " << name
                << " went to college at " << college << ". " << name
                << " graduated and went to work as a " << profession << ". Then, " << name
                << " adopted a(n) " << animal << " named " << petName << ". They both lived happily ever after!";
    return 0;
}
