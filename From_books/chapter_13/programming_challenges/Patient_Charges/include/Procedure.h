#ifndef PROCEDURE_H
#define PROCEDURE_H

#include <iostream>

class Procedure
{
    public:
        Procedure();

        Procedure(std::string, std::string, std::string, double);

        // MUTATOR
        void setProcedureName(std::string procedureName) { this->procedureName = procedureName; }
        void setDate(std::string date) { this->date = date; }
        void setPracName(std::string practName) { this->practName = practName; }
        void setCharges(double charges) { this->charges = charges; }

        // ACCESSOR
        std::string getProcedureName() const { return procedureName; }
        std::string getdate() const { return date; }
        std::string getPracName() const { return practName; }
        double getCharges() const { return charges; }

        virtual ~Procedure();

    protected:

    private:
        std::string procedureName, date, practName;
        double charges;
};

#endif // PROCEDURE_H
