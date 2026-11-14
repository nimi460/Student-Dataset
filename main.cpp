#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("students.csv");

    file << "Student ID,Department,Level,Attendance Percentage,Average Examination Score\n";

    file << "ST001,Computer Science,200,85,78\n";
    file << "ST002,Cyber Security,200,90,82\n";
    file << "ST003,Computer Science,100,75,65\n";
    file << "ST004,Information Technology,300,95,88\n";
    file << "ST005,Software Engineering,200,80,72\n";
    file << "ST006,Data Science,300,88,91\n";
    file << "ST007,Computer Science,400,92,85\n";
    file << "ST008,Cyber Security,100,70,60\n";
    file << "ST009,Information Technology,200,83,76\n";
    file << "ST010,Software Engineering,300,96,89\n";

    file.close();

    cout << "Student dataset created successfully!";

    return 0;
}