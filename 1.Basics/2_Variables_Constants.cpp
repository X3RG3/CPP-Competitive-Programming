#include <iostream>
#include <string>    // for string
using namespace std;

int main() {

    /*
        ===== RULES FOR VARIABLES IN C++ =====

        1. A variable name must start with:
           - A letter (a–z or A–Z)
           - or an underscore (_)

        2. A variable cannot start with a number.
           Example: 1age ❌ , age1 ✔

        3. No spaces allowed in variable names.
           Example: my age ❌ , my_age ✔

        4. Variable names are case-sensitive.
           age, Age, AGE are all different.

        5. Cannot use C++ keywords as variable names.
           int, float, return, while, for, etc. ❌

        6. Variable names should be meaningful.
           x1 ❌ , totalMarks ✔

        7. Special symbols are not allowed except underscore.
           %, #, @, &, * ❌

        8. A variable must be declared before using it.
    */


    // ---------- CONSTANTS ----------
    const float PI = 3.14159;
    const int MAX_AGE = 100;
    const char SECTION = 'A';
    #define COUNTRY "Bangladesh"

    // ---------- VARIABLES ----------
    
    // Integer variable
    int age = 20;

    // Float variable
    float price = 99.99;

    // Double variable
    double height = 5.789;

    // Character variable
    char grade = 'B';

    // Boolean variable
    bool isStudent = true;

    // String variable
    string name = "Ayon";

    // Updating variables
    age = 21;
    grade = 'A';
    price = price - 10;   // price now 89.99

    // ---------- OUTPUT ----------
    cout << "----- CONSTANTS -----" << endl;
    cout << "PI: " << PI << endl;
    cout << "MAX_AGE: " << MAX_AGE << endl;
    cout << "SECTION: " << SECTION << endl;
    cout << "COUNTRY: " << COUNTRY << endl;

    cout << "\n----- VARIABLES -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Updated Price: " << price << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    return 0;
}
