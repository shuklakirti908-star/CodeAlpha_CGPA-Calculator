#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int n;

    cout << "=====================================\n";
    cout << "          CGPA CALCULATOR\n";
    cout << "=====================================\n";

    cout << "Enter number of courses: ";
    cin >> n;

    float grade[100], credit[100];
    float totalCredits = 0;
    float totalGradePoints = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter grade point: ";
        cin >> grade[i];

        cout << "Enter credit hours: ";
        cin >> credit[i];

        totalCredits = totalCredits + credit[i];
        totalGradePoints = totalGradePoints + (grade[i] * credit[i]);
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n\n=====================================\n";
    cout << "        COURSE DETAILS\n";
    cout << "=====================================\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Course " << i + 1
             << " | Grade Point: " << grade[i]
             << " | Credit Hours: " << credit[i] << endl;
    }

    cout << "\n=====================================\n";
    cout << "Total Credit Hours  : " << totalCredits << endl;
    cout << "Total Grade Points  : " << totalGradePoints << endl;

    cout << fixed << setprecision(2);
    cout << "Final CGPA          : " << cgpa << endl;

    cout << "=====================================\n";

    return 0;
}