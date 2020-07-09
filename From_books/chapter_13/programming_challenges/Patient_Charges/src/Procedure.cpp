#include "Procedure.h"

Procedure::Procedure()
{
    //ctor
}

Procedure::Procedure(std::string procedureName, std::string date, std::string practName, double charges)
{
    this->procedureName = procedureName;
    this->date = date;
    this->practName = practName;
    this->charges = charges;
}
Procedure::~Procedure()
{
    //dtor
}
