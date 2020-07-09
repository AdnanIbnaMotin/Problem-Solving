#ifndef PATIENT_H
#define PATIENT_H

struct PMV_STRUCT
{
    std::string firstName = "Md.";
    std::string middleName = "Abdul";
    std::string lastName = "Kalam";
    std::string address = "1620 Morris Park Avenue";
    std::string city = "Bronx";
    std::string state = "New York";
    int zipCode = 10450;
    long phoneNum = 9292192212;
    std::string emergencyName = "John Doe";
    long emergencyPhnNum = 6462121282;
};

class Patient
{
    public:
        Patient();
        Patient(PMV_STRUCT&);

        // MUTATOR
        inline void setFirstName(std::string firstName) { pmv.firstName = firstName; }
        inline void setMiddleName(std::string middleName) { pmv.middleName = middleName; }
        inline void setLastName(std::string lastName) { pmv.lastName = lastName; }
        inline void setAddress(std::string address) { pmv.address = address; }
        inline void setCity(std::string city) { pmv.city = city; }
        inline void setState(std::string state) { pmv.state = state; }
        inline void setZIP(int zipCode) { pmv.zipCode = zipCode; }
        inline void setPhnNum(long phoneNum) { pmv.phoneNum = phoneNum; }
        inline void setEmgName(std::string emergencyName) { pmv.emergencyName = emergencyName; }
        inline void setEmgPhnNum(long emergencyPhnNum) { pmv.emergencyPhnNum = emergencyPhnNum; }

        // ACCESSOR
        inline std::string getFirstName() const { return pmv.firstName; }
        inline std::string getMiddleName() const { return pmv.middleName; }
        inline std::string getLastName() const { return pmv.lastName; }
        inline std::string getAddress() const { return pmv.address; }
        inline std::string getCity() const { return pmv.city; }
        inline std::string getState() const { return pmv.state; }
        inline int getZIP() const { return pmv.zipCode; }
        inline long getPhnNum() const { return pmv.phoneNum; }
        inline std::string getEmgName() const { return pmv.emergencyName; }
        inline long getEmgPhnNum() const { return pmv.emergencyPhnNum; }

    protected:

    private:
        struct
        {
            std::string firstName, middleName, lastName, address, city, state;
            int zipCode;
            long phoneNum;
            std::string emergencyName;
            long emergencyPhnNum;
        } pmv;
};

#endif // PATIENT_H
