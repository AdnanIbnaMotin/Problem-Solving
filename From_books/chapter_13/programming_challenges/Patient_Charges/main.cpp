#include <iostream>
#include "Patient.h"
#include "Procedure.h"

using namespace std;

int main()
{
    PMV_STRUCT sObj;
    Patient patientOne(sObj);

    Procedure proc[3];
    proc[0] = {"Physical Exam", "07/08/20", "Dr. Irvine", 250.00};
    proc[1] = {"X-ray", "07/08/20", "Dr. Jamison", 500.00};
    proc[2] = {"Blood test", "07/08/20", "Dr. Smith", 200.00};

    std::cout << "Patient Information: " << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "Name: " << patientOne.getFirstName() << " " << patientOne.getMiddleName() << " " << patientOne.getLastName() << std::endl;
    std::cout << "Address: " << patientOne.getAddress() << std::endl;
    std::cout << "City: " << patientOne.getCity() << std::endl;
    std::cout << "State: " << patientOne.getState() << std::endl;
    std::cout << "Zip Code: " << patientOne.getZIP() << std::endl;
    std::cout << "Phone Number: " << patientOne.getPhnNum() << std::endl;
    std::cout << "Emergency Contact Name: " << patientOne.getEmgName() << std::endl;
    std::cout << "Emergency Phone Number: " << patientOne.getEmgPhnNum() << std::endl << std::endl;


    double totalCharges = 0;
    for (int i=0; i<3; i++)
    {
        std::cout << "Procedure #" << i+1 << ": " << std::endl;
        std::cout << "---------------------" << std::endl;
        std::cout << "Name: " << proc[i].getProcedureName() << std::endl;
        std::cout << "Date: " << proc[i].getdate() << std::endl;
        std::cout << "Practitioner: " << proc[i].getPracName() << std::endl;
        std::cout << "Charges: $" << proc[i].getCharges() << std::endl << std::endl;
        totalCharges += proc[i].getCharges();
    }

    std::cout << "Total charges: $" << totalCharges << std::endl;

    return 0;
}
