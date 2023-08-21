#include <stdio.h>
#include <stdlib.h>

int age;

char studentID[20] ; 
char phone[10];
char name[255];
char birthday[9];
char gender[10];
char nationalily[20];


int main(){
    printf("\t BUSINESS COMPUTER \n");

    printf("Enter your Student ID: ");
    scanf("%s", &studentID);
 

    printf("Enter your Name: ");
    scanf("%s", &name);


    printf("Enter your Gender(Male or female or LGBT+): ");
    scanf("%s", &gender);

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your Birthday(21/06/2006): ");
    scanf("%s", &birthday);

    printf("Enter your Nationalily: ");
    scanf("%s", &nationalily);

    printf("Enter your Telephone: ");
    scanf("%s", &phone);


//แสดงข้อมูล    
    printf("---------------Output-------------------\n");
    printf("Student's ID: %s\n", studentID);
    printf("Name : %s \n", name);
    printf("Gender : %s \n", gender);
    printf("Age : %d \n", age);
    printf("Birthday : %s \n", birthday);
    printf("Nationalily : %s \n", nationalily);
    printf("Telephone : %s \n", phone);
    printf("----------------End---------------------\n");
    system("pause");
    getchar();
    return 0;
}

//code by Wirat001 
//https://github.com/Wirat001