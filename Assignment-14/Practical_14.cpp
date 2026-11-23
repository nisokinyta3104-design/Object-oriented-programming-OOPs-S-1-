#include <iostream>  // We Use this for input and output
#include <fstream>  //  We Use this for file handling
using namespace std;

int main()
{
    int id;
    string name;
    float salary;

    // ofstream is used to write data into a file.
    // fout is the object name used to access the file.
    // "employee.txt" is the name of the file.
    ofstream fout("employee.txt");

    // Taking employee details from the user
    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Employee Salary: ";
    cin >> salary;

    // Writing employee details into the file.
    // fout works like cout, but stores data in a file.
    fout << id << " " << name << " " << salary;

    // close() closes the file after writing.
    fout.close();

    cout << "\nEmployee details saved successfully!\n";

    // ifstream is used to read data from a file.
    // fin is the object name used to access the file.
    ifstream fin("employee.txt");

    cout << "\nEmployee Details:\n";

    // Reading the stored data from the file
    // and storing it back into the variables.
    fin >> id >> name >> salary;

    // Displaying the employee details
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;

    // Closing the file after reading.
    fin.close();

    return 0;  // Ends the program
}
