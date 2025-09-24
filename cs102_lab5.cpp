#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    //Problem1
for (int i = 1; i <= 10; i++) { cout << i << " " ;}
cout << endl;

    //Problem2
    int sum=0;
    for (int i = 1; i <= 10; i++) { sum += i;}

    cout << sum << endl;
    //Problem3
    for (int i = 1; i <= 100; i++) {
        if (i%5==0) {
            continue;
        }
        cout << i << " " ;
    }
        cout << endl;

    //Problem4
    int n;
    cout << "n=";
    cin >> n;
    for (int i =1; i <= n; i++) {
        if (i%10 !=0 ) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    //Problem5
    for (char i = 'A'; i <= 'Z'; i++) {
        cout << i << ' ';
        if ((i-64)%5 == 0)
            cout << '\n';
    }
    cout << endl;
    //Problem6
    int ab;
    cin >> ab;

    double credit, mark;
    double totalWeighted = 0.0,
    totalCredits=0.0;
    for (int subject = 1; subject <= ab; subject++) {
        cin >> credit >> mark;
        cout << "The credit is " << credit << ". The mark is "<< mark << ". The number of subjects: " << ab << ". This is subject: " << subject << endl;
        totalWeighted += credit * mark;
        totalCredits += credit;
    }
        double gpa = 0.0;
        if (totalCredits >0)
            gpa +=(gpa+totalWeighted) / totalCredits;

        cout << fixed << setprecision(4);
        cout << "Your total GPA is " << gpa << endl;

    //
    return 0;
}