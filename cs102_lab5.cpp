#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    //Problem1
for (int i = 1; i <= 100; i *=3) { cout << i << " " ;}
cout << endl;

    //Problem2
    int sum=0;
    for (int i = 1; i <= 100; i++) { sum += i;}

    cout << sum << endl;
    //Problem3
    for (int i = 1; i <= 100; i++) {
        if (i%10==1) {
            continue;
        }
        cout << i << " " ;
    }
        cout << endl;

    //Problem4
    int n;
    cout << "n=";
    cin >> n;
    for (int i =0; i <= n; i++) {
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

    //Problem7
    int pnumber;
    cin >> pnumber;
    int counter = 0;
   for (int i = 2; i < pnumber; i++) {
       if (!pnumber%i==0) counter++;
   }
    cout << ((counter >= 1) ? "Not prime" : "Prime");
  cout << endl;

    //Problem8
    int revnum;
    cin >> revnum;
    int revers=0;
    while (revnum>0) {
        int digit =revnum%10;
        revers = revers*10+digit;
        revnum = revnum/10;
    }
    cout << revers << endl;

    //Problem9
    int sos;
    cin >> sos;
    for (int i=1; i<=sos; i++) {
        cout << i << "*" << i << "=" << i*i << endl;
    }

    //Problem10
    int num;
    int Maxnum;
    cin >> num;
    Maxnum = num;
    while (num != 0) {
        if (num > Maxnum) {
            Maxnum = num;
        }
    cin >> num;
    }
    cout << "Max is " << Maxnum << endl;





    return 0;
}