//This program calculates the final grade of an ENG209 student starting from his/her Experiments, Skills Tests, Machine Problems, and Written and Practical exams from both Prelims and Finals.
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    int students = 1, i;
    string name[students];
    int e[4], s[4], mp[2], w[2], p[2];
    float eep, sep, mep, exep;
    double finalg[students];
    double transmu[students];
    
    cout << "Welcome to your new grades calculator." << endl;
    cout << "Input student's surname (Ex. Perez, DeLeon, StaMesa) and scores." << endl << endl;
    //INPUT AND CALCULATING AREA
    for (i = 0; i < students; i++)
    {
        // Input the SURNAME of the student on this part.
        cout << i + 1 << ".)" << " Enter student's surname: ";
        cin >> name[i];
        
        // This part asks you to input the student's Experiments 1-4 scores.
        cout << "\n    Enter student's total scores:" << endl;
        cout << "      EXPERIMENTS: ";
        cout << "\n       1: ";
        cin >> e[0];
        cout << "       2: ";
        cin >> e[1];
        cout << "       3: ";
        cin >> e[2];
        cout << "       4: ";
        cin >> e[3];
        
        // This part calculates the student's total score for the Experiments.
        cout << "        Total score: " << e[0] + e[1] + e[2] + e[3];
        cout << "\n        Equivalent percentage: " << e[0] * 0.05 << "%" << " + " << e[1] * 0.05 << "%" << " + " << e[2] * 0.05 << "%" << " + " << e[3] * 0.05 << "%";
        eep = e[0] * 0.05 + e[1] * 0.05 + e[2] * 0.05  + e[3] * 0.05;
        cout << "\n        Total equivalent percentage: " << eep << "%";
        
        // This part asks you to input the student's Skills Test 1-4 scores.
        cout << "\n\n      SKILLS TESTS: ";
        cout << "\n       1: ";
        cin >> s[0];
        cout << "       2: ";
        cin >> s[1];
        cout << "       3: ";
        cin >> s[2];
        cout << "       4: ";
        cin >> s[3];
        
        // This part calculates the student's total score for the Skills Tests.
        cout << "        Total score: " << s[0] + s[1] + s[2] + s[3];
        cout << "\n        Equivalent percentage: " << s[0] * 0.05 << "%" << " + " << s[1] * 0.05 << "%" << " + " << s[2] * 0.05 << "%" << " + " << s[3] * 0.05 << "%";
        sep = s[0] * 0.05 + s[1] * 0.05 + s[2] * 0.05  + s[3] * 0.05;
        cout << "\n        Total equivalent percentage: " << sep << "%";
        
        // This part asks you to input the student's Machine Problem 1 & 2 scores.
        cout << "\n\n      MACHINE PROBLEMS: ";
        cout << "\n       1: ";
        cin >> mp[0];
        cout << "       2: ";
        cin >> mp[1];
        
        // This part calculates the student's total score for the Machine Problems.
        cout << "        Total score: " << mp[0] + mp[1];
        cout << "\n        Equivalent percentage: " << mp[0] * 0.10 << "%" << " + " << mp[1] * 0.10 << "%";
        mep = mp[0] * 0.10  + mp[1] * 0.10;
        cout << "\n        Total equivalent percentage: " << mep << "%";
        
        // This part asks you to input the student's Major Examination scores..
        cout << "\n\n      MAJOR EXAMINATIONS: ";
        cout << "\n         Prelims " << endl;
        cout << "             Written: ";
        cin >> w[0];
        cout << "             Practical: ";
        cin >> p[0];
        
        // This part calculates the student's total score for the Preliminary Examinations.
        cout << "              Total score: " << w[0] + p[0] << endl;
        cout << "         Finals " << endl;
        cout << "             Written: ";
        cin >> w[1];
        cout << "             Practical: ";
        cin >> p[1];
        
        // This part calculates the student's total score for the Final Examinations.
        cout << "              Total score: " << w[1] + p[1] << endl;
        cout << "               Prelims Equivalent percentage: " << (w[0] + p[0]) * 0.20 << "%";
        cout << "\n               Finals Equivalent percentage: " << (w[1] + p[1]) * 0.20 << "%";
        exep = (w[0] + p[0]) * 0.20 + (w[1] + p[1]) * 0.20;
        cout << "\n               Total equivalent percentage: " << exep << "%";
        
        // This part calculates the student's official total raw grade.
        finalg[i] = eep + sep + mep + exep;
        cout << "\n\n    " << name[i] << "'s raw grade: " << finalg[i] << "%" << endl << endl;
        
        // FINAL GRADE TRANSMUTATION PART. This part declares the corresponding Grade Point Average of the grades.
        if (finalg[i] >= 95.57)
        {
            transmu[i] = 1.00;
        }
        else if(finalg[i] <= 95.56 && finalg[i] >= 91.12)
        {
            transmu[i] = 1.25;
        }
        else if(finalg[i] <= 91.11 && finalg[i] >= 86.68)
        {
            transmu[i] = 1.50;
        }
        else if(finalg[i] <= 86.67 && finalg[i] >= 82.23)
        {
            transmu[i] = 1.75;
        }
        else if(finalg[i] <= 82.22 && finalg[i] >= 77.79)
        {
            transmu[i] = 2.00;
        }
        else if(finalg[i] <= 77.78 && finalg[i] >= 73.34)
        {
            transmu[i] = 2.25;
        }
        else if(finalg[i] <= 73.33 && finalg[i] >= 68.90)
        {
            transmu[i] = 2.50;
        }
        else if(finalg[i] <= 68.89 && finalg[i] >= 64.45)
        {
            transmu[i] = 2.75;
        }
        else if(finalg[i] <= 64.44 && finalg[i] >= 60.00)
        {
            transmu[i] = 3.00;
        }
        else
        {
            transmu[i] = 5.00;
        }
    }
    
    // This part officially declares the students' final raw & transmutated grade. This declares if they passed or failed the ENG209 course.
    cout << endl;
    cout << "SURNAME" << "\t\t\t" << "RAW GRADE" << "\t\t" << "TRANSMUTATED" << "\t\t" << "CONCLUSION" << endl;
    for(int i = 0; i < students; i++)
    {
        cout << fixed << setprecision(2) << left;
        cout << name[i] << "\t\t\t" << finalg[i] << "\t\t\t" << transmu[i] << "\t\t\t";
        if(transmu[i] <= 3)
        {
            cout << "PASS" << endl;
        }
        else
        {
            cout << "FAIL" << endl;
        }
    }
    
    // This part sorts the students' grades from 1-50, highest to lowest, and outputs the Top 10 excellent student of the section.
    for(int i = 0; i< students-1; i++)
    {
        for(int j = i+1; j < students; j++)
        {
            if(finalg[i] < finalg[j])
            {
                string temp1 = name[i];
                name[i] = name[j];
                name[j] = temp1;
                
                double temp2 = finalg[i];
                finalg[i] = finalg[j];
                finalg[j] = temp2;
            }
        }
    }
    
    cout << endl;
    for(int i = 0; i < 1; i++)
    {
        cout << "Top " << i + 1 << ": " << name[i] << endl;
    }
    
    //This section concludes the program.
    cout << endl << endl;
    return 0;
}
