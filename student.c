#include"student.h"
void getList(Student aStu[],int number){
    char format[STR_LEN];
    sprintf(format,"%%%ds",STR_LEN-1);
    for(int i=0;i<number;i++){
        int t=i+1;
        printf("第%d个学生\n",t);
        printf("请输入姓名:");
        scanf(format,aStu[i].name);
        printf("性别(0表示男，1表示女)：");
        scanf("%d",&aStu[i].gender);
        printf("年龄：");
        scanf("%d",&aStu[i].age);
    }
}
int save(Student aStu[],int number){
    int ret=0;
    FILE* fp=fopen("student.date","w");
    if (fp){
        ret=fwrite(aStu,sizeof(Student),number,fp);
    }
    fclose(fp);
    return ret==number;
}
void Read(void){
    FILE* fp=fopen("student.date","r");
    if(fp){
        fseek(fp,0L,SEEK_END);
        long size=ftell(fp);
        int number=size/sizeof(Student);
        printf("有%d个数据\n",number);
        int index=0;
        printf("你要查看的数据是数据:");
        scanf("%d",&index);
        index-=1;
        read(fp,index);
        fclose(fp);
    }
}
void read(FILE* fp,int index){
    fseek(fp,index*sizeof(Student),SEEK_SET);
    Student stu;
    if(fread(&stu,sizeof(Student),1,fp)==1){
        printf("第%d个学生\n",index);
        printf("姓名：%s\n",stu.name);
        printf("年龄:%d\n",stu.age);
        printf("性别:");
        switch (stu.gender) {
            case 0:printf("男\n"); break;
            case 1:printf("女\n"); break;
            default:printf("未知\n"); break;
        }
    }
}

