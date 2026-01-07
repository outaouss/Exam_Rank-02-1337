#include <stdio.h>
#include <stdlib.h>

// int ascending(int a, int b)
// {
//         return (a <= b);
// }

typedef struct s_list t_list;

struct s_list {
    int data;
    t_list *next;
};

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *head = lst;
    int tmp;
    while (head->next)
    {
        if (!(cmp(head->data, head->next->data)))
        {
            tmp = head->data;
            head->data = head->next->data;
            head->next->data = tmp;
            head = lst;
        }
        else
            head = head->next;
    }
    return lst;
}

// int main()
// {
//     t_list *node1 = malloc(sizeof(int));
//     t_list *node2 = malloc(sizeof(int));
//     t_list *node3 = malloc(sizeof(int));
//     t_list *node4 = malloc(sizeof(int));

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = NULL;

//     node1->data = 45;
//     node2->data = 3;
//     node3->data = 4;
//     node4->data = 50;
//     t_list *tmp = node1;
//     while (node1)
//     {
//         printf("[ %d ], ",node1->data);
//         node1 = node1->next;
//     }
//     printf("\n");
//     node1 = tmp;
//     sort_list(node1, ascending);
//     while (node1)
//     {
//         printf("[ %d ], ",node1->data);
//         node1 = node1->next;
//     }
//     printf("\n");
// }