#include <iostream>

using namespace std;


#include "friendClassCodes.h"
#include "students.h"



int main()
{
    /*
    const Method


        Operator oVerloading
            1. cin
            2. cout
            3. typecasting
    
    */


    Student s1("Hesen", "Huseynli", 8);

    
 /*   cout <<boolalpha << int(s1) << endl;*/
    cout << s1;

   
    cin >> s1;
    cout << endl;
    cout << endl;
    cout << s1;

  


}