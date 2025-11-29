#include <iostream>
using namespace std;
int main(){
    /*✔️ Rules for variables

    1.Must start with letter or underscore
    2.Cannot start with a number
    3.No spaces
    4.Case-sensitive
    5.Cannot use C++ keywords (int, float, return, etc.)*/

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