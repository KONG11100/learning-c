#include"student.h"
int main(void){
    int number;
    printf("请输入学生数量：");
    scanf("%d",&number);
    Student aStu[number];
    getList(aStu, number);
    if(save(aStu,number)){
        printf("保存成功\n");
    }
    else{
        printf("保存失败");
    }
    printf("是否读取列表\n");
    printf("输入0--读取列表\n");
    int K=1;
    scanf("%d",&K);
    while(!K){
        Read();
        printf("是否继续读取列表\n");
        printf("输入0--继续读取列表\n");
        K=1;
        scanf("%d",&K);
    }
    return 0;
}
