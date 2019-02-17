#include <iostream>
#include <iomanip>

int main()
{
    double grade1, grade2, grade3, grade4, grade5;
    std::cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;

    // The following is extremely complicated because this exercise requires the exclusive use of if/else structures
    // The output should be a sum of the grades excluding the maximum and minimum grades
    // The case for each maximum grade is established, and then we establish the case for each minimum grade, summing the other three
    if (grade1 >= grade2 && grade1 >= grade3 && grade1 >= grade4 && grade1 >= grade5) // grade1 is maximum
    {
        if (grade2 <= grade3 && grade2 <= grade4 && grade2 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade3 + grade4 + grade5; // grade2 is minimum
        else if (grade3 <= grade2 && grade3 <= grade4 && grade3 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade2 + grade4 + grade5; // grade3 is minimum
        else if (grade4 <= grade2 && grade4 <= grade3 && grade4 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade2 + grade3 + grade5; // grade4 is minimum
        else if (grade5 <= grade2 && grade5 <= grade3 && grade5 <= grade4) std::cout << std::fixed << std::setprecision(1) << grade2 + grade3 + grade4; // grade5 is minimum
    }
    else if (grade2 >= grade1 && grade2 >= grade3 && grade2 >= grade4 && grade2 >= grade5) // grade2 is maximum
    {
        if (grade1 <= grade3 && grade1 <= grade4 && grade1 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade3 + grade4 + grade5; // grade1 is minimum
        else if (grade3 <= grade1 && grade3 <= grade4 && grade3 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade1 + grade4 + grade5; // grade3 is minimum
        else if (grade4 <= grade1 && grade4 <= grade3 && grade4 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade1 + grade3 + grade5; // grade4 is minimum
        else if (grade5 <= grade1 && grade5 <= grade3 && grade5 <= grade4) std::cout << std::fixed << std::setprecision(1) << grade1 + grade3 + grade4; // grade5 is minimum
    }
    else if (grade3 >= grade1 && grade3 >= grade2 && grade3 >= grade4 && grade3 >= grade5) // grade3 is maximum
    {
        if (grade1 <= grade2 && grade1 <= grade4 && grade1 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade2 + grade4 + grade5; // grade1 is minimum
        else if (grade2 <= grade1 && grade2 <= grade4 && grade2 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade1 + grade4 + grade5; // grade2 is minimum
        else if (grade4 <= grade1 && grade4 <= grade2 && grade4 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade1 + grade2 + grade5; // grade4 is minimum
        else if (grade5 <= grade1 && grade5 <= grade2 && grade5 <= grade4) std::cout << std::fixed << std::setprecision(1) << grade1 + grade2 + grade4; // grade5 is minimum
    }
    else if (grade4 >= grade1 && grade4 >= grade2 && grade4 >= grade3 && grade4 >= grade5) // grade4 is maximum
    {
        if (grade1 <= grade2 && grade1 <= grade3 && grade1 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade2 + grade3 + grade5; // grade1 is minimum
        else if (grade2 <= grade1 && grade2 <= grade3 && grade2 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade1 + grade3 + grade5; // grade2 is minimum
        else if (grade3 <= grade1 && grade3 <= grade2 && grade3 <= grade5) std::cout << std::fixed << std::setprecision(1) << grade1 + grade2 + grade5; // grade3 is minimum
        else if (grade5 <= grade1 && grade5 <= grade2 && grade5 <= grade3) std::cout << std::fixed << std::setprecision(1) << grade1 + grade2 + grade3; // grade5 is minimum
    }
    else if (grade5 >= grade1 && grade5 >= grade2 && grade5 >= grade3 && grade5 >= grade4) // grade5 is maximum
    {
        if (grade1 <= grade2 && grade1 <= grade3 && grade1 <= grade4) std::cout << std::fixed << std::setprecision(1) << grade2 + grade3 + grade4; // grade1 is minimum
        else if (grade2 <= grade1 && grade2 <= grade3 && grade2 <= grade4) std::cout << std::fixed << std::setprecision(1) << grade1 + grade3 + grade4; // grade2 is minimum
        else if (grade3 <= grade1 && grade3 <= grade2 && grade3 <= grade4) std::cout << std::fixed << std::setprecision(1) << grade1 + grade2 + grade4; // grade3 is minimum
        else if (grade4 <= grade1 && grade4 <= grade2 && grade4 <= grade3) std::cout << std::fixed << std::setprecision(1) << grade1 + grade2 + grade3; // grade4 is minimum
    }
    return 0;
}