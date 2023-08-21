# การใช้ scanf ในภาษา c

ส่งงาน วิรัตน์ ไกรโชติ 063 คธ 2/2 

วิธีการใช้งาน


 1.ติดตั้ง [gcc](https://gcc.gnu.org/)

2. Compiler เป็น exe
```besh
$ gcc main.c
```

3. ทดสอบโดยการรันไฟล์ a.exe

![image](https://github.com/Wirat001/c-language-use-scanf/blob/main/image/previwe3.png)
  


code
```c
#include <stdio.h>
#include <stdlib.h>

int studentID ; 
int age;

char phone[10];
char name[100];
char birthday[9];
char gender[10];
char nationalily[20];


int main(){
    printf("\t BUSINESS COMPUTER \n");
    printf("Enter your Student ID: ");
    scanf("%d", &studentID);
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
    printf("Student's ID: %d\n", studentID);
    printf("Name : %s \n", name);
    printf("Gender : %s \n", gender);
    printf("Age : %d \n", age);
    printf("Birthday : %s \n", birthday);
    printf("Nationalily : %s \n", nationalily);
    printf("Telephone : %s \n", phone);
    printf("----------------End---------------------\n");
    getchar();
    system("pause");
    return 0;
}


```
#ตัวอย่าง

input
```
Enter your Student ID: 65202040063
Enter your Name: Wirat
Enter your Gender(Male or female or LGBT+): Male
Enter your Age: 17
Enter your Birthday(21/06/2006): 21/06/2006
Enter your Nationalily: Thai
Enter your Telephone: 088888888
```
output
```
Student's ID: 65202040063
Name : Wirat
Gender : Male
Age : 17
Birthday : 21/06/2006
Nationalily : Thai
Telephone : 088888888
```
รูปภาพ
![image](https://github.com/Wirat001/c-language-use-scanf/blob/main/image/preview1.png)


![image](https://github.com/Wirat001/c-language-use-scanf/blob/main/image/preview2.png)


![](https://count.getloli.com/get/@Wirat001?theme=moebooru)
