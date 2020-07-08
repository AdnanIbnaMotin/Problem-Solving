/*
Write a class named Employee that has the following member variables:

    name - a string that hold the employee's name
    idNumber - an int variable that holds the employee's ID number
    department - a string that holds the name of the department where the employee works
    position - a string that holds the employee's job title

The class should have the following constructors:

    A constructor that accepts the following values as arguments and assign them to the appropriate member
    variables: employee's name, employee's ID number, department, and position.

    A constructor that accepts the following values as arguments and assigns them to the appropriate member
    variables: employee's name and ID number. The department and position fields should be assigned an empty string ("").

    A default constructor that assigns empty string ("") to the name, department, and position member variables, and 0
    to the idNumber member variable.

Write appropriate Mutator functions that store values in these member variables and Accessor functions that return the
values in these member variables. Once you have written the class, write a separate program that create three Employee object
to hold the following data:

                -------------------------------------------------------------------
                    Name            ID Number       Department      Position
                -------------------------------------------------------------------
                    Susan Meyers    47899           Accounting      Vice President
                -------------------------------------------------------------------
                    Mark Jones      39119           IT              Programmer
                -------------------------------------------------------------------
                    Joy Rogers      81774           Manufacturing   Engineer
                -------------------------------------------------------------------

The program should store this date in the three objects and then display the data for each employee on the screen.

*/

#include <iostream>
using std::string;

class Employee
{

private:
    string name, department, position;
    int idNumber;
public:
    Employee();
    Employee(string, int, string, string);

    // Mutator
    void setName(string);
    void setIDNumber(int);
    void setDepartment(string);
    void setPosition(string);

    // Accessor
    string getName() const;
    int getIDNumber() const;
    string getDepartment() const;
    string getPosition() const;

protected:


};

Employee::Employee() { }
Employee::Employee(string name = "", int idNumber = 0, string department = "", string position = "") :
    name(name), idNumber(idNumber), department(department), position(position) { }

/* ################### Mutator ########################## */

void Employee::setName(string name)
{
    this->name = name;
}
void Employee::setIDNumber(int idNumber)
{
    this->idNumber = idNumber;
}
void Employee::setDepartment(string department)
{
    this->department = department;
}
void Employee::setPosition(string position)
{
    this->position = position;
}

/* ################### Accessor ########################## */

string Employee::getName() const
{
    return this->name;
}
int Employee::getIDNumber() const
{
    return this->idNumber;
}
string Employee::getDepartment() const
{
    return this->department;
}
string Employee::getPosition() const
{
    return this->position;
}

/* #################### MAIN FUNCTION START ##################### */

int main(int argc, char* argv[])
{
    Employee employeeOne("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employeeTwo("Mark Jones", 39119, "IT", "Programmer");
    Employee employeeThree ("Joy Rogers", 81774, "Manufacturing", "Engineer");

    std::cout << "Employee One Information: " << std::endl;
    std::cout << "Name: " << employeeOne.getName() << std::endl;
    std::cout << "ID: " << employeeOne.getIDNumber() << std::endl;
    std::cout << "Department: " << employeeOne.getDepartment() << std::endl;
    std::cout << "Position: " << employeeOne.getPosition() << std::endl << std::endl;

    std::cout << "Employee Two Information: " << std::endl;
    std::cout << "Name: " << employeeTwo.getName() << std::endl;
    std::cout << "ID: " << employeeTwo.getIDNumber() << std::endl;
    std::cout << "Department: " << employeeTwo.getDepartment() << std::endl;
    std::cout << "Position: " << employeeTwo.getPosition() << std::endl << std::endl;


    std::cout << "Employee Three Information: " << std::endl;
    std::cout << "Name: " << employeeThree.getName() << std::endl;
    std::cout << "ID: " << employeeThree.getIDNumber() << std::endl;
    std::cout << "Department: " << employeeThree.getDepartment() << std::endl;
    std::cout << "Position: " << employeeThree.getPosition() << std::endl;


    return 0;
}

/* #################### MAIN FUNCTION END ####################### */
