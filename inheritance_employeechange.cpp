#include <iostream>
#include <stdio.h>
using namespace std;
 

//Base Class - basicInfo
class basicInfo
{
@@ -20,7 +21,7 @@ class basicInfo
            cin  >> gender;
        }
};
 

//Base Class - deptInfo
class deptInfo
{
@@ -41,7 +42,7 @@ class deptInfo
            cin  >> time2complete;
        }
};
 

/final class (Derived Class)- employee/
class employee:private basicInfo, private deptInfo
{
@@ -61,21 +62,22 @@ class employee:private basicInfo, private deptInfo
            cout << "Name: "      << name   << endl;      //accessing protected data
            cout << "Employee ID: " << empId  << endl;        //accessing protected data
            cout << "Gender: "        << gender << endl << endl;//accessing protected data
             

            cout << "Department Information...:"  << endl;
            cout << "Department Name: "           << deptName   << endl; //accessing protected data
            cout << "Assigned Work: "             << assignedWork << endl; //accessing protected data
            cout << "Time to complete work: "     << time2complete<< endl; //accessing protected data
        }
};
 

int main()
{
    //create object of class employee
    employee emp;
     

    emp.getEmployeeInfo();
    emp.printEmployeeInfo();
     

    return 0;
}
 
