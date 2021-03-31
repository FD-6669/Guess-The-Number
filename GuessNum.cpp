#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;

void Repeat();

int main()
{
    cout << "\t\t\tWelcome To Guessing a Number Game!" << endl;
    cout << "\t\t\t\t Range : 0-9999 " << endl;
    cout << "\n\tFeedback :     You Are SUPER NEAR!!!!!       (Range Between 1-10)";
    cout << "\n\tFeedback :      You Are Close Enough!        (Range Between 11-30)";
    cout << "\n\tFeedback :   You Are Near But It is Okay!    (Range Between 31-100)";
    cout << "\n\tFeedback :           Not Near!               (Range Between 101-1000)";
    cout << "\n\tFeedback :       You Are FAR APART!          (Range Between 1001-5000)";
    cout << "\n\tFeedback : You are Very Very Very Very Far!  (Range Between 5001-9999)";
    cout << endl;
    cout << endl;
    int RealNumber,i=0;
    string Length;
    srand((unsigned)time(NULL));
    RealNumber = rand() % 10000;
    stringstream ss;
    ss << RealNumber;
    ss >> Length;
    int LengthNum = Length.length();
    cout << "\t\t\t        The Number is : ";
    do
    {
        cout << "X";
        i++;
      
    } while (i<LengthNum);
    int y=0,TryNumber=0;
    while(y!=2)
    {
        int UserNumber,DeductedNum;
        cout << "\n\n\t\t\tPlease Guess The Number (0-9999): "; cin >> UserNumber;
        DeductedNum = RealNumber - UserNumber;
        if (UserNumber == RealNumber)
        {
            cout << "\t\t\t       You Guessed It Right!";
            y=2;
            TryNumber++;
        } 
        else if (DeductedNum > 0 && DeductedNum <=10)
        {
            cout << "\t\t\t       You Are SUPER NEAR!!!!!";
            TryNumber++;
        }
        else if (DeductedNum >= 11 && DeductedNum <=30)
        {
            cout << "\t\t\t        You Are Close Enough!";
            TryNumber++;
        }
        else if (DeductedNum >= 31 && DeductedNum <=100)
        {
            cout << "\t\t\t     You Are Near But It is Okay!";
            TryNumber++;
        }
        else if (DeductedNum >= 101 && DeductedNum <=1000)
        {
            cout << "\t\t\t              Not Near!";
            TryNumber++;
        }
        else if (DeductedNum >= 1001 && DeductedNum <=5000)
        {
            cout << "\t\t\t         You are FAR APART!";
            TryNumber++;
        }
        else if (DeductedNum >= 5001 && DeductedNum <=9999)
        {
            cout << "\t\t\t    You are Very Very Very Very Far!";
            TryNumber++;
        }
        else if (DeductedNum < 0 && DeductedNum >= -10)
        {
            cout << "\t\t\t         You Are SUPER NEAR!!!!!";
            TryNumber++;
        }
        else if (DeductedNum <= -11 && DeductedNum >= -30)
        {
            cout << "\t\t\t        You Are Close Enough!";
            TryNumber++;
        }
        else if (DeductedNum <= -31 && DeductedNum >= -100)
        {
            cout << "\t\t\t     You Are Near But It is Okay!";
            TryNumber++;
        }
        else if (DeductedNum <= -101 && DeductedNum >= -1000)
        {
            cout << "\t\t\t              Not Near!";
            TryNumber++;
        }
        else if (DeductedNum <= -1001 && DeductedNum >= -5000)
        {
            cout << "\t\t\t         You Are FAR APART!";
            TryNumber++;
        }
        else if (DeductedNum <= -5001 && DeductedNum >= -9999)
        {
            cout << "\t\t\t    You are Very Very Very Very Far!";
            TryNumber++;
        }
        else
        {
            cout << "\t\t\t              NOT IN RANGE!";
            TryNumber++;
        }
    }
    cout << "\n\n\t\t\t  You Guessed the Number With " << TryNumber << " Tries.";
    Repeat();
    system("PAUSE");
}

void Repeat()
{
    char Answer;
    cout << "\n\n\t\t\t     Do You Want To Play Again? (y/n): "; cin >> Answer;
    if (Answer == 'y')
    {
        system("cls");
        main();
    } 
    else
    {
        cout << "\n\t\t\t         Thank You!" << endl;
    }
}

