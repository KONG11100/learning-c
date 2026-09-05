#include"linked-list.h"
void delete_list(List* plist){
    Node* p=NULL;
    Node* q;
    for(p=plist->head;p;p=q){
        q=p->next;
        free(q);
    }
}

void delete_value(List* plist,int number){
    int isFind=0;
    Node* p;
    Node* q;
    for(q=NULL,p=plist->head;p;q=p,p=p->next){
        if(p->value==number){
            if(q){
                q->next=p->next;
            }
            else{plist->head=p->next;}
            free(p);
            isFind=1;
        }
    }
    if(isFind==0){
        printf("没找到");
    }
}

void print(List* plist){
    for(Node* p=plist->head;p;p=p->next){
        printf("%d",p->value);
    }
}

void add(List* plist,int number){
    Node *p=(Node*)malloc(sizeof(Node));
    p->value=number;
    p->next=NULL;
    Node *last=plist->head;
    if(last){
        while(last->next){
            last=last->next;
        }
        last->next=p;
    }
    else{plist->head=p;}
}
