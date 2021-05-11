/*----------------------------------------------------------------------------
-		         SE 185: Midterm Project   	               -
- List the names of all team members, their roles, and their participation
1- Mohamed Selim - Role: Quiz Creator	and debugger - Participation: 25%
(Use this line to describe your contribution to the project)
2- ELmin Didic - did everything i dont have a group :(
3-
4-
5-																                                     -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									                                   -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*----------------------------------------------------------------------------
-	                            Functions Prototypes                                   -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// Compile with gcc midtermProject.c -o proj
int quiz_1();
int quiz_2();
int quiz_3();

int score = 0;
int attempts = 0;

/*----------------------------------------------------------------------------
-								Implementation								                               -
-----------------------------------------------------------------------------*/
int main()
{
    int userNumber = 1;

    while (userNumber != 0)
    {

        int quizNum;
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("▓▓ WELCOME TO QUIZ ME! ▓▓\n");
        printf("▓▓  VALORANT EDITION   ▓▓\n");
        printf("▓▓  ENTER: 00 TO EXIT  ▓▓\n");
        printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
        printf("\nEnter a Int to start!: ");
        scanf("%d", &userNumber);

        if(userNumber == 0)
        {
            break;
        }

        srand(userNumber);
    quizNum = (rand() % 3 ) + 1;



       if(quizNum == 1)
           quiz_1();
       if(quizNum == 2)
           quiz_2();
       if(quizNum == 3)
           quiz_3();


    }

    printf("SCORE: %d| ATTEMPTS: %d\n", score,attempts );
    printf("%lf PERCENT", (double )score / attempts);




    return 0;
}


/* Put your functions here, and be sure to put prototypes above. */
int quiz_1()
{
    int tfScore = 0;
    int userGuess;

    printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
    printf("▓▓   TRUE FALSE QUIZ!  ▓▓\n");
    printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");

    while(tfScore < 3)
    {
        printf("True or False, Valorant is a FPS\n");
        printf("1 For True, 2 For False: ");
        scanf("%d", &userGuess);
        if(userGuess == 1)
        {
            tfScore += 1;
            score += 1;
            attempts += 1;
            printf("Correct!\n");
        }
        else if(userGuess == 2)
        {
            printf("Incorrect :(\n");
            attempts += 1;
        }
        else
        {
            printf("Incorrect Due to invalid input.\n");
        }

        printf("True or False, Bind has been the most reworked map in the game\n");
        printf("1 For True, 2 For False: ");
        scanf("%d", &userGuess);
        if(userGuess == 2)
        {
            tfScore += 1;
            attempts += 1;
            score += 1;
            printf("Correct!\n");
        }
        else if(userGuess == 1)
        {
            printf("Incorrect :(\n");
            attempts += 1;
        }
        else
        {
            printf("Incorrect Due to invalid input.\n");
        }

        printf("True or False, 100T Hiko is a zoomer\n");
        printf("1 For True, 2 For False: ");
        scanf("%d", &userGuess);
        if(userGuess == 2)
        {
            tfScore += 1;
            attempts += 1;
            score += 1;
            printf("Correct!\n");
        }
        else if(userGuess == 1)
        {
            printf("Incorrect :(\n");
            attempts += 1;
        }
        else
        {
            printf("Incorrect Due to invalid input.\n");
        }
    }
    return 0;
}

int quiz_2()
{
    int mcScore = 0;
    int userGuess;

    printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
    printf("▓▓ MULTIIPLE CHOICE QUIZ! ▓▓\n");
    printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");

    while(mcScore < 3) {

        printf("MULTIPLE CHOICE\n");
        printf("Which gun is a sniper?\n");
        printf("1: Phantom\n");
        printf("2: Vandel\n");
        printf("3: Operator\n");
        printf("4: Classic\n");
        scanf("%d", &userGuess);

        switch (userGuess) {
            case 1 :
                printf("Wrong!\n");
                attempts += 1;
                break;
            case 2 :
                printf("Wrong!\n");
                attempts += 1;
                break;
            case 3 :
                printf("Correct!\n");
                attempts += 1;
                score += 1;
                mcScore += 1;
                break;
            case 4 :
                printf("Wrong!\n");
                attempts += 1;
                break;

            default :
                printf("Invalid Input\n");
        }

        printf("MULTIPLE CHOICE\n");
        printf("Which character is a duelist?\n");
        printf("1: Killjoy\n");
        printf("2: Omen\n");
        printf("3: Jett\n");
        printf("4: Sage\n");
        scanf("%d", &userGuess);

        switch (userGuess) {
            case 1 :
                printf("Wrong!\n");
                attempts += 1;
                break;
            case 2 :
                printf("Wrong!\n");
                attempts += 1;
                break;
            case 3 :
                printf("Correct!\n");
                attempts += 1;
                score += 1;
                mcScore += 1;
                break;
            case 4 :
                printf("Wrong!\n");
                attempts += 1;
                break;

            default :
                printf("Invalid Input\n");
        }

        printf("MULTIPLE CHOICE\n");
        printf("Which team won Firs Strike\n");
        printf("1: Iowa State\n");
        printf("2: TSM\n");
        printf("3: 100T\n");
        printf("4: Cloud 9\n");
        scanf("%d", &userGuess);

        switch (userGuess) {
            case 1 :
                printf("Wrong!\n");
                attempts += 1;
                break;
            case 2 :
                printf("Wrong!\n");
                attempts += 1;
                break;
            case 3 :
                printf("Correct!\n");
                attempts += 1;
                score += 1;
                mcScore += 1;
                break;
            case 4 :
                printf("Wrong!\n");
                attempts += 1;
                break;

            default :
                printf("Invalid Input\n");
        }

        if(mcScore == 3)
        {
            mcScore = 0;
            break;
        }
    }

    return 0;
}
int quiz_3()
{
    int fbScore = 0;
    char userString[20];

    printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
    printf("▓▓ FILL IN THE BLANK!  ▓▓\n");
    printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");

    while(fbScore < 3)
    {
        printf("Fill in the blank (all lowercase), Omen put down  \n");
        printf("Type your guess: ");
        scanf("%s", userString);

        if(strcmp(userString,"smokes"))
        {
            fbScore += 1;
            attempts += 1;
            score += 1;
            printf("Correct!\n");
        }
        else
        {
            printf("Incorrect :(\n");
            attempts += 1;
        }

        printf("Fill in the blank (all lowercase), Spike has been \n");
        printf("Type your guess: ");
        scanf("%s", userString);

        if(strcmp(userString,"planted"))
        {
            fbScore += 1;
            attempts += 1;
            score += 1;
            printf("Correct!\n");
        }
        else
        {
            printf("Incorrect :(\n");
            attempts += 1;
        }

        printf("Fill in the blank (all lowercase), Buy Stingers rush \n");
        printf("Type your guess: ");
        scanf("%s", userString);

        if(strcmp(userString,"b"))
        {
            fbScore += 1;
            attempts += 1;
            score += 1;
            printf("Correct!\n");
        }
        else
        {
            printf("Incorrect :(\n");
            attempts += 1;
        }


    }

    return 0;
}