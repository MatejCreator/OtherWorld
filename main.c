#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void welcome_page();
void game_start();
void exit_page();
void screen_clean();

void screen_clean()
{
    //printf("\033[2J\033[1;1H");
    system("cls");
}

void welcome_page()
{
    printf("----------------------------------------------------------------------------------\n");
    printf("------------------------------Created by Matej Palco------------------------------\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("\n");
    printf("            ____  _   _            __          __        _     _            \n");
    printf("           / __ \\| | | |           \\ \\        / /       | |   | |           \n");
    printf("          | |  | | |_| |__   ___ _ _\\ \\  /\\  / /__  _ __| | __| |           \n");
    printf("          | |  | | __| '_ \\ / _ \\ '__\\ \\/  \\/ / _ \\| '__| |/ _` |         \n");
    printf("          | |__| | |_| | | |  __/ |   \\  /\\  / (_) | |  | | (_| |          \n");
    printf("           \\____/ \\__|_| |_|\\___|_|    \\/  \\/ \\___/|_|  |_|\\__,_|    \n"); 
    printf("\n");
    printf("\n");
    int choice;
    printf("                                    1. Start                                      \n"); 
    printf("                                    2. Exit                                      \n");

     
 
    scanf("%d", &choice);

    if (choice == 1)
    {
        game_start();
    }
    else if (choice == 2)
    {
        exit_page();
    }
}

void exit_page()
{
    screen_clean();
    printf("\tThank you for playing!\n");
    printf("\tFarewell fellow warrior!\n");

printf("             ,;~;,                                                \n");
printf("                 /\\_                                             \n");
printf("                 (  /                                             \n");
printf("                 (()      //)                                     \n");
printf("                 | \\  ,,;;'\\                                    \n");
printf("             __ _(  )m=(((((((((((((================--------      \n");
printf("           /'  ' '()/~' '.(, |                                    \n");
printf("        ,;(      )||     |  ~                                     \n");
printf("       ,;' \\    /-(.;,   )                                       \n");
printf("            ) /       ) /                                         \n");
printf("           //         ||                                          \n");
printf("          )_\\         )_\\                                       \n");

    
    exit(0);
}

void game_start()
{
    screen_clean();
    printf("\t Choose a class\n\n\n");
    printf("1. Knight\n");
    printf(" /\\ \n");
    printf(" || \n");
    printf(" || \n");
    printf(" || \n");
    printf(" ||           {} \n");
    printf(" ||          .--. \n");
    printf(" ||         /.--.\\ \n");
    printf(" ||         |====| \n");
    printf(" ||         |`::`| \n");
    printf("_||_    .-;`\\..../`;_.-^-._ \n");
    printf(" /\\   /  |...::..|`   :   `| \n");
    printf(" |:'\\ |   /'''::''|   .:.   | \n");
    printf("  \\ /\\;-,/\\   ::  |..:::::..| \n");
    printf("   \\ <` >  >._::_.| ':::::' | \n");
    printf("    `""`  /   ^^  |   ':'   | \n");
    printf("          |       \\    :    / \n");
    printf("          |        \\   :   /  \n");
    printf("          |___/\\___|`-.:.-` \n");
    printf("           \\_ || _/    ` \n");
    printf("           <_ >< _> \n");
    printf("            |  ||  | \n");
    printf("            |  ||  | \n");
    printf("           _\\.:||:./_ \n");
    printf("          /____/\\____\\ \n\n\n");

    printf("2. Mage");
    printf("                . \n");
    printf("\n");
    printf("                        . \n");
    printf("              /^\\     . \n");
    printf("         /\\    V \n");
    printf("        /__\\   I      O  o \n");
    printf("       //..\\\\  I     . \n");
    printf("       \\].`[/  I             \n");
    printf("       /l\\/j\\  (]    .  O \n");
    printf("      /. ~~ ,\\/I          . \n");
    printf("      \\L__j^\\/ I       o \n");
    printf("       \\/--v}  I     o   . \n");
    printf("       |    |  I   _________ \n");
    printf("       |    |  I c(`       ')o \n");
    printf("       |    l  I   \\.     ,/ \n");
    printf("     _/j  L l\\_!  _//^---^\\_ \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n\n");

    printf("3. Ninja\n\n");

    printf("4. Healer\n\n");

    printf("Choose a character(number 1 - 4): ");
    int class_choice;
    scanf("%d", &class_choice);

    if (class_choice == 1) {

    }
    else if (class_choice == 2) {

    }
    else if (class_choice == 3) {
        
    }
    else if (class_choice == 4) {
        
    }
    else {
        int try_again; 
        do {
            printf("ERROR\n");
            printf("Must choose numbers 1 - 4\n");
            printf("Press any number to try again\n");
            scanf("%d", &try_again);
            if (isdigit(try_again)) {
                screen_clean();
                welcome_page();
            }
            else {
                screen_clean();
            }     
            printf("You did't press a number YOU DUMB FUCK!!\n");    
        } while (1);
    }
}

int main()
{
    welcome_page();

    return 0;
}



                                                        
                                                        
