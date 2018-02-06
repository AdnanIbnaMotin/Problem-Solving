#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int emp_num, work_hrs;
    float salary;

    cin >> emp_num >> work_hrs >> salary;

    printf("NUMBER = %d\n", emp_num);
    printf("SALARY = U$ %0.2f\n", work_hrs * salary);
    return 0;
}
