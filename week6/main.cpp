#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
using namespace std;

class Employee
{
    private: 
        char first_name[255]; // First Name
        char last_name[255]; // Last Name
        bool employee_type; // Is their compensation hourly or annual
        int compensation; // Compensation amount
    public:
    void set_first_name( char* in_name){ strcpy(first_name, in_name);}
    void set_last_name( char* in_name){ strcpy(last_name, in_name);}
    void set_employee_type(bool in_p){ employee_type = in_p;}
    void set_compensation(int* in_comp);
    void printEntry()
    {
      if (employee_type = true)
      {
       cout << last_name << ", ";
       cout << first_name << ": $";
       cout << compensation/2000;
      }
      if (employee_type = false)
      {
       cout << last_name << ", ";
       cout << first_name << ": $";
       cout << compensation;
      }
    }
};
int main()
{
  const int MAX = 3;
  //PhoneEntry entry;
  Employee entries[MAX];

  for (int x = 0; x< MAX;x++){
      cout << "Entry: " << x << endl;
      char *myvalue = (char *)malloc(255);

      cout << "Enter a first name: ";
      cin.getline(myvalue,255);
      entries[x].set_first_name(myvalue);
      cout << "Entered value: " << myvalue << endl;

      cout << "Enter a last name: ";
      cin.getline(myvalue,255);
      entries[x].set_last_name( myvalue );
      
      cout << "Enter your compensation: ";
      cin.getline(myvalue, 99999);
      entries[x].set_compensation( myvalue );

      entries[x].set_employee_type(  true );
  } 
  
  

  for (int x = 0; x< MAX;x++){
     entries[x].printEntry();
  }

  return 0;
}