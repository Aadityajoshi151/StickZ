//THIS PROGRAM IS WRITTEN BY AADITYA JOSHI
#include <iostream>
using namespace std;
int swag = 0;
void checkscore(int);
int player1chance(int);
int player2chance(int);
void display(int);
int main()
{
    int sticks = 23, swag = 0;
    system("cls");
    cout << "\t\t\t      WELCOME TO STICKZ " << endl;
    cout << endl;
    cout << "There Are 23 Sticks Total. " << endl;
    cout << "Each Player Can Pick Atmost 4 Sticks At A Time. " << endl;
    cout << "If Only 1 Stick Remains,The Next Player To Move, Loses. " << endl;
    cout << "GOOD LUCK! " << endl;
    cout << "\t\t\tPress any key to start... " << endl;
    system("pause");
    system("cls");
    while (sticks >= 1)
    {
        checkscore(sticks);
        display(sticks);
        sticks = player1chance(sticks);
        display(sticks);
        checkscore(sticks);
        sticks = player2chance(sticks);
    }
    return 0;
}
int player1chance(int sticks)
{
    int ch;
    cout << "\nPlayer 1, Enter Your Move " << endl;
loop1:
    cin >> ch;
    if (ch < 1 || ch > 4)
    {
        cout << "Wrong Choice! Enter Again " << endl;
        goto loop1;
    }
    if (ch >= sticks)
    {
        cout << "Not Enough Sticks Left. Enter Again " << endl;
        goto loop1;
    }
    sticks = sticks - ch;
    swag = 1;
    return sticks;
}
int player2chance(int sticks)
{
    int ch;
    cout << "\nPlayer 2, Enter Your Move " << endl;
loop2:
    cin >> ch;
    if (ch < 1 || ch > 4)
    {
        cout << "Wrong Choice! Enter Again " << endl;
        goto loop2;
    }
    if (ch >= sticks)
    {
        cout << "Not Enough Sticks Left. Enter Again " << endl;
        goto loop2;
    }
    sticks = sticks - ch;
    swag = 0;
    return sticks;
}
void checkscore(int sticks)
{
    if (sticks == 1)
    {
        if (swag == 1)
        {
            cout << "\nPlayer 1 Wins! " << endl;
            system("pause");
            exit(0);
        }
        else
            cout << "Player 2 Wins! " << endl;
        system("pause");
        exit(0);
    }
}
void display(int sticks)
{
    int i;
    char stick = 244;
    cout << "Remaining = " << sticks << " : ";
    for (i = 1; i <= sticks; i++)
    {
        cout << stick;
    }
}
