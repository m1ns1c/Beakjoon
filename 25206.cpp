#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    
    double sumCredit = 0.0;
    double sumPoint  = 0.0;

    for (int i = 0; i < 20; i++) {
        string subject;
        double credit;
        string grade;
        
        cin >> subject >> credit >> grade;

        if (grade == "P") {
            continue;
        }

        double score = 0.0;
        if      (grade == "A+") score = 4.5;
        else if (grade == "A0") score = 4.0;
        else if (grade == "B+") score = 3.5;
        else if (grade == "B0") score = 3.0;
        else if (grade == "C+") score = 2.5;
        else if (grade == "C0") score = 2.0;
        else if (grade == "D+") score = 1.5;
        else if (grade == "D0") score = 1.0;
        else if (grade == "F")  score = 0.0;

        sumCredit += credit;
        sumPoint  += credit * score;
    }

    double gpa = 0.0;
    if (sumCredit > 0.0) {
        gpa = sumPoint / sumCredit;
    }
    cout << fixed << setprecision(6) << gpa << '\n';
    return 0;
}
