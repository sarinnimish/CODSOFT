#include <iostream>
#include <string>

int main() {
    int num_students;

    std::cout << "Enter the number of students: ";
    std::cin >> num_students;

    double sum_grades = 0;
    double highest_grade = 0;
    double lowest_grade = 100; 

    for (int i = 0; i < num_students; ++i) {
        std::string name;
        double grade;

        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::cin.ignore();
        std::getline(std::cin, name);

        std::cout << "Enter the grade for " << name << ": ";
        std::cin >> grade;

        sum_grades += grade;
        highest_grade = std::max(highest_grade, grade);
        lowest_grade = std::min(lowest_grade, grade);
    }

    if (num_students > 0) {
        double average_grade = sum_grades / num_students;

        std::cout << "\nStudent Grades Summary:" << std::endl;
        std::cout << "----------------------" << std::endl;
        std::cout << "Average Grade: " << average_grade << std::endl;
        std::cout << "Highest Grade: " << highest_grade << std::endl;
        std::cout << "Lowest Grade: " << lowest_grade << std::endl;
    } else {
        std::cout << "No students and grades entered." << std::endl;
    }

    return 0;
}




