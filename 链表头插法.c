#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node* next;
}node;

main() {
    int n;
    node* head, * p;
    p = (node*)malloc(sizeof(node));
    p->next = NULL;
    head = p;
    scanf_s("%d", &n);
    while (n!=-1)
    {
        p = (node*)malloc(sizeof(node));
        p->data = n;
        scanf_s("%d", &n);
        p->next = head->next;
        head->next = p;
    }
	p = head;
	while (p->next != NULL)
	{
        p = p->next;
		printf("%d", p->data);
	}
}