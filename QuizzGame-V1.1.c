#include <stdio.h>

void questions(void);

char user_answer_arr[15];
char answer[15] = {'B', 'C', 'B', 'D', 'A', 'A', 'A', 'C', 'D', 'D', 'A', 'B', 'B', 'B', 'A'};

int main()
{
    char yes_no;
    int age = 0;
    int gender = 0;
    char first_name[30];
    char last_name[30];
   char try_quit;
    //int user_id = 0;

    printf("\n\t??????? Welcome To My Millionaire Quiz Zone ???????\n");
    printf("If you want to play game, please press 'Y' or 'y' to continue.\n");
    printf("\t\t\t(or)\n");
    printf("If you do not want to play game, please press 'N' or 'n' to Quit.\n");

    // making decision to play game continue or quit
    do {
        printf("------------------------->");
        scanf(" %c", &yes_no);
        if(yes_no == 'Y' || yes_no == 'y') {
            printf("-------------------------Yes, I want to play continue-------------------------\n");
            printf("\n\t\t...Hi! Welcome Again...\n");

            // age
            printf("\t\tHow old are you?\n");
            printf("\tQuestion difficulty will based on your age.\n");
            printf("\t  (Your age must be older than six.)\n");
            printf("\n\t\tEnter Your age.\n");
            printf("------------------------->");
            scanf(" %d", &age);
            // making decision to enter age
            if(age < 7) {
                printf("\n'''''Your age is too young to take quiz.'''''\n");
                printf("''''Come back!!! If you are older than 6, we'll be waiting you here'''''\n");
                printf("'''''Thank you for joining our Millionaire Quiz Zone community.'''''\n");
                break;
            } else if(age > 6 && age < 90) {
                printf("\n\t\tYour age: %d\n", age);
            } else {
                printf("Your enter number (for age) is too many. But no problem. Let's continue.\n");
            }

            // gender
            printf("\n\tWe'd like to get to know you better!\n");
            printf("\t\tChoose your gender identity:\n\n");
            printf("\t 1.Male\t    2.Female\t 3.Other\n");
            printf("\n\t(choose and enter any number 1 or 2 or 3)\n");
            printf("Warning: Do not put any character. It will be an error\n");
            // making decision to enter gender
            do {
                printf("------------------------->");
                scanf(" %d", &gender);
                if(gender == 1) {
                    printf("\n\t\tI am Male.\n");
                } else if(gender == 2) {
                    printf("\n\t\tI am Female.\n");
                } else if(gender == 3) {
                    printf("\n\t\tI am Other.\n");
                } else {
                    printf("Your enter number (for gender) is wrong, Please try again.\n");
                }
            } while(gender != 1 && gender != 2 && gender != 3);

            // name || id
            printf("\n\t\tEnter your name.\n");
            printf("\tIt will be used in the game.\n\n");
            printf("------------------------->FirstName LastName (eg. John Doe)\n");
            printf("------------------------->");
            scanf(" %s%s", first_name, last_name);
            printf("\n\t\tPlayer name: %s %s", first_name, last_name);
            //srand(time(NULL));
            //user_id = rand();
            //printf("%d", user_id);

            // test
            printf("\n\n\t\tTake a test.");
            printf("\n\tWe will test your knowledge to make the game\n");
            printf("\t  more interesting for you.\n\n");
            printf("\tChoose the answer just only A or B or C or D.\n");
            printf("\t\tNotice: Must be capital letter \n\t\t\t(or)\n \t\tYour answer will not be true.\n\n");
            printf("\t\t*****Quiz Start*****\n\n");
            // questions
            questions();

            // decistion on try again or quit game
            do{
                printf("\n--------------------------------------------------\n");
                printf("If you want to try again, please press 'Y' or 'y'.\n");
                printf("If you want to quit, please press 'N' or 'n'.\n");
                printf("------------------------->");
                scanf(" %c", &try_quit);
                if(try_quit == 'Y' || try_quit == 'y') {
                    printf("\n\t\t*****Quiz Start*****\n\n");
                    questions();
                } else if(try_quit == 'N' || try_quit == 'n') {
                    printf("-------------------------No, I do not want to play anymore-------------------------\n\n");
                    printf("\t\t'''''OK, Bye Bye!'''''\n");
                    printf("'''''Please enter 'N' or 'n' again to completely quit.'''''\n");
                    printf("\t\t\t(or)\n");
                    printf("''''If you want to play again from the start, please enter 'Y' or 'y' again.'''''\n");
                    break;
                } else {
                    printf("Your enter key (to quit or continue game) is wrong, Please try again\n");
                }
            } while(try_quit != 'Y' || try_quit != 'y');

            // making decision to play game continue or quit
        } else if(yes_no == 'N' || yes_no == 'n') {
            printf("-------------------------No, I do not want to play anymore-------------------------\n\n");
            printf("\t'''''Thank you for joining our Millionaire Quiz Zone community.'''''\n");
            printf("\t\t'''''See you next time. Have a good day!'''''\n");
            break;
        } else {
            printf("Your enter key (to quit or continue game) is wrong, Please try again\n");
        }
    } while(yes_no != 'N' || yes_no != 'n');

    return 0;
}

void questions(void) {

    char user_answer;
    int level = 1;
    int money = 500;
    int count;

    for(count = 0; count < 15; count++) {
        // question expression
        switch(count) {
            case 0:
                printf("\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("1. The pope is the Roman Catholic bishop of which city?\n");
                printf("A: London\nB: Rome\nC: Paris\nD: New York\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 1:
                ++level;
                money += 500;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("2. Which holiday is a rabbit associated with?\n");
                printf("A: Christmas\nB: Thanksgiving\nC: Easter\nD: Halloween\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 2:
                ++level;
                money += 1000;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("3. Sicily is an island of what country?\n");
                printf("A: Malaysia\nB: Italy\nC: Australia\nD: Philippines\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 3:
                ++level;
                money += 1000;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("4. Moscow is the capital of which country?\n");
                printf("A: Poland\nB: Finland\nC: Romania\nD: Russia\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 4:
                ++level;
                money += 2000;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("5. From which animal do we obtain bacon?\n");
                printf("A: Pig\nB: Cow\nC: Sheep\nD: Chicken\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 5:
                ++level;
                money += 2500;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("6. What is the size of the int data type (in bytes) in C?\n");
                printf("A: 4\nB: 8\nC: 2\nD: 1\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 6:
                ++level;
                money += 2500;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("7. Who invented the C Programming?\n");
                printf("A: Dennis Ritchie\nB: Tim Berners-Lee\nC: Guido van Rossum\nD: James Gosling\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 7:
                ++level;
                money += 2500;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("8. What level language is C?\n");
                printf("A: High Level\nB: Low Level\nC: Middle Level\nD: Machine Level\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 8:
                ++level;
                money += 2500;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("9. Which escape character can be used to begin a new line ?\n");
                printf("A: \\a\nB: \\b\nC: \\m\nD: \\n\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 9:
                ++level;
                money += 10000;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("10. Find a Character constant-\n");
                printf("A: 'a'\nB: '1'\nC: '#'\nD: All of the above\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 10:
                ++level;
                money += 25000;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("11. Character constants should be enclosed between\n");
                printf("A: Single quotes\nB: Double quotes\nC: Both a and b\nD: None of these\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 11:
                ++level;
                money += 50000;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("12. String constants should be enclosed between\n");
                printf("A: Single quotes\nB: Double quotes\nC: Both a and b\nD: None of these\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 12:
                ++level;
                money += 150000;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("13. Which one is an Integer constant?\n");
                printf("A: 3.145\nB: 34\nC: \"123\"\nD: None of the above\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 13:
                ++level;
                money += 250000;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("14. Which is valid C expression?\n");
                printf("A: int my_num = 100,000;\nB: int my_num = 100000;\n"
                       "C: int my num = 1000;\nD: int $my_num = 10000;\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            case 14:
                ++level;
                money += 500000;
                printf("\n\t\t\t$%d\t\t %d/15\n\n", money, level);
                printf("15. Each statement in a C program should end with\n");
                printf("A: ;\nB: .\nC: :\nD: None of the above\n");
                printf("------------------------->Your answer: ");
                scanf(" %c", &user_answer);
                user_answer_arr[count] = user_answer;
                break;
            default:
                printf("Something is wrong.\n");
                break;
        }

        // checking question's answer & user's enter answer
        if(answer[count] == user_answer_arr[count]  && count == 14) {
            printf("\nBrilliant!!!\n");
            printf("You won $1,000,000\n\n");
        } else if(answer[count] == user_answer_arr[count]){
            printf("True\n\n");
            continue;
        } else if(answer[count] != user_answer_arr[count] && count == 1){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $500\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 2){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $1,000\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 3){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $2,000\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 4){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $3,000\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 5){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $5,000\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 6){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $7,500\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 7){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $10,000\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 8){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $12,500\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 9){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $15,000\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 10){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $25,000\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 11){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $50,000\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 12){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $100,000\n\n");
            break;
        } else if(answer[count] != user_answer_arr[count] && count == 13){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $250,500\n\n");
            break;
        }  else if(answer[count] != user_answer_arr[count] && count == 14){
            printf("False\n\n");
            printf("\nBrilliant!!!\n");
            printf("You won $500,500\n\n");
            break;
        }
        else {
            printf("False\n\n");
            printf("You won $0\nBetter luck next time!\n");
            break;
        }
    }
}
