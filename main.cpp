//LAB06-Read-text-file
//Author: Vanderlei Ferreira
//Goal: read a text file and print out student info
d
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    ifstream inputFile("/Users/vanderleijunior/Desktop/school/csci-01 (2024)/lab06/names.txt");
    if (!inputFile) {
        cerr << "Unable to open file data.txt";
        return 1;
    }

    string id, firstName, lastName, line;
    string gpa;
    vector<string> classes;

    while (getline(inputFile, line)) {
        if (line == "#") {
            cout << "ID: " << id << " Name: " << firstName << " " << lastName
                 << " GPA: " << gpa << " Courses: ";
            for (const auto& cls : classes) {
                cout << cls << ", ";
            }
            cout << endl;
            id.clear();
            firstName.clear();
            lastName.clear();
            gpa.clear();
            classes.clear();
            continue;
        }

        if (id.empty()) {
            id = line;
        } else if (firstName.empty()) {
            istringstream iss(line);
            iss >> firstName >> lastName;
        } else if (gpa.empty()) {
            gpa = line;
        } else {
            classes.push_back(line);
        }
    }

    inputFile.close();
    return 0;
}

