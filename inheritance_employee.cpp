#include <iostream>
#include <stdio.h>
using namespace std;
 
//Bas
    protected:  
        char    name[30];
        int     empId;
        char    gender;
    public:
        void getBasicInfo(void)
        {
            cout << "Enter Name: "; 
            cin.getline(name,30);
            cout << "Enter Emp. Id: ";
            cin  >> empId;
          
};
 
//Base Class - deptInfo
class deptInfo
{
    protected:  
        char    deptName[30];
        char    assignedWork[30];
        int     time2complete;
    public:
        void getDeptInfo(void)
        {
            cout << "Enter Department Name: "; 
            cin.ignore(1);
            cin.getline(deptName,30);
            cout << "Enter assigned work: ";
            fflush(stdin);
            cin.getline(assignedWork,30);
            cout << "Enter time in hours to complete work: ";
            cin  >> time2complete;
        }
};
 
/*final class (Derived Class)- employee*/
class employee:private basicInfo, private deptInfo
{
    public:
        void getEmployeeInfo(void){
            cout << "Enter employee's basic info: " << endl;
            //call getBasicInfo() of class basicInfo
            getBasicInfo();     //calling of public member function
            cout << "Enter employee's department info: " << endl;
            //call getDeptInfndl;      //accessing protected data
            cout << "Employee ID: " << empId  << endl;        //accessing protected data
         Assigned Work: "             << assignedWork << endl; //accessing protected data
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
