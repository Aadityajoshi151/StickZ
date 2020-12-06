# Stickz Game in C++
## Important:
I wrote this program when I was in my first year and I posted it on a simple blog that I created at that time (PEC-World.weebly.com). Recently I decided to move all my projects to github and I have taken down this blog. Since I wrote this is in 2017 it has some mistakes here and there but it works fine. I also know this project would have been more easy if I had written it in python but I didn't know python at that time. Here is the exact copy of the post that I wrote on my blog on 11 Dec 2017 👇

## Description
Sticks. This is a classic game/problem/assignment/project that comes in the path of every aspiring programmer.  
There are 23 sticks in total. One by one the 2 players start to pick up sticks. Each player can pick at most 4 sticks at a time. When only 1 stick is left, the next player to move loses.  
For a programmer to code this game, the pre-requisite required are basic knowledge of loops and user defined functions.  
I read about this game as a question in one book and decided to give it a try and it was really very easy.  
There are a lot of variants of this game available on the internet. The basic logic is same just the way of writing the program varies from programmer to programmer. Presenting before you, my version of ‘STICKZ’.

    
   
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
In my Code,  

-   There are 4 user defined functions: - player1chance(), player2chance(), checkscore() and display().

Player1chance() takes chance of player 1.  
Player2chance() takes chance of player 2.  
Checkscore() checks how many sticks are left and if the game is to be ended or not. It is called after every chance.  
Display() displays the number of sticks remaining.  

-   The variable ‘sticks’ keeps track of number of sticks.
-   The variable ‘swag’ keeps track of whose was the last chance and who must be the winner.
-   The variable ‘ch’ accepts the number of sticks from player (at most 4).
-   The whole process happens inside a WHILE loop which calls the required functions.
-   For displaying remaining sticks, I have used the variable ‘stick’ which is a character type and has an ASCII value of 244. This symbol closely resembles a stick.
