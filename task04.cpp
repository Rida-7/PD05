#include <iostream>
using namespace std;

main()
{
    float hoursNeeded;
    float firmHasDays;
    float numberOfWorkers;
    float workingHours = 10;
    float eachWorkerHours;
    float totalHours;
    float result;
    float result2;
cout << "Enter the number of hours needed: ";
cin >> hoursNeeded;
cout << "Enter the number of days firm has: ";
cin >> firmHasDays;
cout << "Enter the number of workers: ";
cin >> numberOfWorkers;

eachWorkerHours = workingHours - (workingHours * 0.1);
totalHours = eachWorkerHours * firmHasDays * numberOfWorkers;
result = totalHours  - hoursNeeded;
result2 = - result;

if (totalHours > hoursNeeded)
{cout << "Yes! " << result << " hours left.";
}

if (totalHours < hoursNeeded)
{
    cout << "Not enough time! " << result2 << " hours needed."; 
    }
}