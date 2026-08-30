#ifndef _STUDENT_H_
#define _STUDENT_H_
//声明
#include<stdio.h>
#define STR_LEN 20
typedef struct _student{
    char name[STR_LEN];
    int age;
    int gender;
} Student;
//函数声明
int save(Student aStu[],int number);
void getList(Student aStu[],int number);
void read(FILE* fp,int index);
void Read(void);
#endif
