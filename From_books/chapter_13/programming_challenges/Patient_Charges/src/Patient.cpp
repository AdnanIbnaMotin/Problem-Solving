#include <iostream>
#include "Patient.h"

Patient::Patient()
{
    //ctor
}

Patient::Patient(PMV_STRUCT& tmp)
{
    pmv.firstName = tmp.firstName;
    pmv.middleName = tmp.middleName;
    pmv.lastName = tmp.lastName;
    pmv.address = tmp.address;
    pmv.state = tmp.state;
    pmv.city = tmp.city;
    pmv.zipCode = tmp.zipCode;
    pmv.phoneNum = tmp.phoneNum;
    pmv.emergencyName = tmp.emergencyName;
    pmv.emergencyPhnNum = tmp.emergencyPhnNum;
}


