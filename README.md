# การใช้ scanf ในภาษา c

ส่งงาน วิรัตน์ ไกรโชติ 063 คธ 2/2 

# วิธีการใช้งาน


 1.ติดตั้ง [gcc](https://gcc.gnu.org/)
 
 2. ดาวน์โหลดไฟล์
 ```besh
$ git clone https://github.com/Wirat001/c-language-use-scanf
```
3. Compiler เป็น exe
```besh
$ gcc main.c
```

4. ทดสอบโดยการรันไฟล์ a.exe

![image](https://github.com/Wirat001/c-language-use-scanf/blob/main/image/previwe3.png)
  
# Flowchart
 soon...

# code
```c
#include <stdio.h> //ดึงโมดุล stdio.h
#include <stdlib.h> //ดึงโมดุล stdlib.h

int age; //ประกาศตัวแปร age เพื่อเก็บข้อมูลตัวเลข

char studentID[20]; //ประกาศตัวแปร studentID เพื่อเก็บข้อมูลตัวอักษร จำนวน 20 ตัวอักษร
char phone[10]; //ประกาศตัวแปร phone เพื่อเก็บข้อมูลตัวอักษร จำนวน 10 ตัวอักษร
char name[255]; //ประกาศตัวแปร name เพื่อเก็บข้อมูลตัวอักษร จำนวน 255 ตัวอักษร
char birthday[9]; //ประกาศตัวแปร birthday เพื่อเก็บข้อมูลตัวอักษร จำนวน 9 ตัวอักษร
char gender[10]; //ประกาศตัวแปร gender เพื่อเก็บข้อมูลตัวอักษร จำนวน 10 ตัวอักษร
char nationalily[20]; //ประกาศตัวแปร nationalily เพื่อเก็บข้อมูลตัวอักษร จำนวน 20 ตัวอักษร


int main(){ 
    printf("\t BUSINESS COMPUTER \n"); // แสดงข้อความ BUSINESS COMPUTER

    printf("Enter your Student ID: "); // แสดงข้อความ Enter your Student ID: 
    scanf("%s", &studentID); // รับข้อมูลจากคีย์บอร์ด และเก็บไว้ในตัวแปร studentID
 
    printf("Enter your Name: "); // แสดงข้อความ Enter your Name: 
    scanf("%s", &name); // รับข้อมูลจากคีย์บอร์ด และเก็บไว้ในตัวแปร name

    printf("Enter your Gender(Male or female or LGBT+): "); // แสดงข้อความ Enter your Gender(Male or female or LGBT+): 
    scanf("%s", &gender); // รับข้อมูลจากคีย์บอร์ด และเก็บไว้ในตัวแปร gender

    printf("Enter your Age: "); // แสดงข้อความ Enter your Age: 
    scanf("%d", &age); // รับข้อมูลจากคีย์บอร์ด และเก็บไว้ในตัวแปร age

    printf("Enter your Birthday(21/06/2006): "); // แสดงข้อความ Enter your Birthday(21/06/2006): 
    scanf("%s", &birthday); // รับข้อมูลจากคีย์บอร์ด และเก็บไว้ในตัวแปร birthday

    printf("Enter your Nationalily: "); // แสดงข้อความ Enter your Nationalily: 
    scanf("%s", &nationalily); // รับข้อมูลจากคีย์บอร์ด และเก็บไว้ในตัวแปร nationalily

    printf("Enter your Telephone: "); // แสดงข้อความ Enter your Telephone:
    scanf("%s", &phone); // รับข้อมูลจากคีย์บอร์ด และเก็บไว้ในตัวแปร phone


    //แสดงข้อมูล    
    printf("---------------Output-------------------\n"); // แสดงข้อความ ---------------Output-------------------
    printf("Student's ID: %s\n", studentID);  // แสดงข้อความ Student's ID: และแสดงค่าในตัวแปร  studentID
    printf("Name : %s \n", name);  // แสดงข้อความ Name: และแสดงค่าในตัวแปร name
    printf("Gender : %s \n", gender); // แสดงข้อความ Gender : และแสดงค่าในตัวแปร  gender
    printf("Age : %d \n", age); // แสดงข้อความ Age : และแสดงค่าในตัวแปร  age
    printf("Birthday : %s \n", birthday); // แสดงข้อความ Birthday : และแสดงค่าในตัวแปร  birthday
    printf("Nationalily : %s \n", nationalily); // แสดงข้อความ Nationalily : และแสดงค่าในตัวแปร  nationalily
    printf("Telephone : %s \n", phone); // แสดงข้อความ Telephone : และแสดงค่าในตัวแปร  phone
    printf("----------------End---------------------\n"); // แสดงข้อความ ----------------End---------------------
    system("pause"); // หยุดโปรแกรม
    getchar();// รับค่าจากตีย์บอร์ด
    return 0; // ส่งค่ากลับฟังก์ชั่น
}

//code by Wirat001 
//https://github.com/Wirat001


```
# ตัวอย่าง

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
# รูปภาพ
![image](https://github.com/Wirat001/c-language-use-scanf/blob/main/image/preview1.png)


![image](https://github.com/Wirat001/c-language-use-scanf/blob/main/image/preview2.png)


![](https://count.getloli.com/get/@Wirat001?theme=moebooru)
