//
// Created by TheinGiAung on 3/22/2023.
// Assignment-6: Gmail Validation(someoneexample@gmail.com)

#include "stdio.h"
#define SIZE 3

struct Worker{
    int age;
    char name[30];
    char email[30];
    char password[30];
};

struct Worker info[SIZE];

void userInput();
void printingData();
void emailValidation(char userInputEmail[30]);
void login();
void strCmp(char inputEmail[30]);
int charCounting(char toCount[30]);

char emailValidated[] = "@gmail.com";
int edBindex = 0;        // email index in data base
int eIndex = 0;         // user input email index
int efound = -1;        // found email

int main()
{
    userInput();
//    printingData();
//    login();
    return 0;
}

void userInput() {
    for(int i = 0; i < SIZE; i++) {
//        printf("Enter name: ");
//        scanf(" %[^\n]", &info[i].name);
//
//        printf("Enter age: ");
//        scanf("%d", &info[i].age);

        printf("Enter email: ");
        scanf(" %[^\n]", &info[i].email);
        emailValidation(info[i].email);

//        printf("Enter password: ");
//        scanf(" %[^\n]", &info[i].password);
    }
}

void printingData() {
    for(int i = 0; i < SIZE; i++) {
        printf("name:%s - age:%d - email:%s - password:%s\n", info[i].name, info[i].age, info[i].email, info[i]
        .password);
    }
}

void emailValidation(char userInputEmail[30]) {
    eIndex = 0;
    edBindex = 0;
    while(userInputEmail[eIndex] != '\0') {
        if(userInputEmail[eIndex] == emailValidated[edBindex]) {
            while(userInputEmail[eIndex] == emailValidated[edBindex] && emailValidated[edBindex] != '\0') {
                eIndex++;
                edBindex++;
            }
            if(edBindex != 10) {
                printf("Enter email address is invalid::::(hint:someone@gmail.com)\n");
                printf("Try again!!\n");
            }
            break;
        } else if(userInputEmail[eIndex] != '@' && userInputEmail[eIndex+1] == '\0') {
            printf("Enter email address is invalid::::(hint:someone@gmail.com)\n");
            printf("Try again!!\n");
        }
        eIndex++;
    }

}

void login() {

    char lEmail[30]; // login email
    efound = -1;
    printf(":::This is login form:::\n");
    printf("Enter your email address:\n");
    scanf(" %[^\n]", &lEmail);

    strCmp(lEmail);
    if(efound != -1) {
        printf("Welcome Sir: %s\n", info[efound].name);
    } else {
        printf("Invalid email!!\n");
        login();
    }
}

void strCmp(char inputEmail[30]) {
    int sameCount = 0;

    int sec = charCounting(inputEmail);
    for(int i = 0; i < SIZE; i++) {

        int first = charCounting(info[i].email);
        if(first == sec) {
            for(int gcc = 0; gcc < first; gcc++) {
                if(info[i].email[gcc] != inputEmail[gcc]) {
                    break;
                } else {
                    sameCount++;
                }
            }
        }
        if(sec == sameCount) {
            efound = i;
            break;
        }
    }
}

int charCounting(char toCount[30]) {
    int charCount = 0;
    for(int gcc = 0; gcc < 30; gcc++) {
        if(toCount[gcc] == '\0') {
            break;
        } else {
            charCount++;
        }
    }
    return charCount;
}
