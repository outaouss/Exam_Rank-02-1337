#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int cmp_test(void *one, void *two)
{
    if (one == two)
        return 0;
    else
        return 1;
}

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current = *begin_list;
    t_list *tmp;

    if (cmp(current->data, data_ref) == 0)
    {
        *begin_list = current->next;
        free(current);
    }
    else
    {
        current = *begin_list;
        while (current && current->next)
        {
            if (current->next && cmp(current->next->data, data_ref) == 0)
            {
                tmp = current->next;
                current->next = tmp->next;
                free(tmp);
            }
            else
                current = current->next;
        }
    }
}

// int main()
// {
//     t_list *node1 = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));
//     t_list *node3 = malloc(sizeof(t_list));
//     t_list *node4 = malloc(sizeof(t_list));

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = NULL;

//     node1->data = "oussama";
//     node2->data = "aimen";
//     node3->data = "taoussi";
//     node4->data = "1337";

//     t_list *tmp = node1;

//     while (node1)
//     {
//         printf("before --> [ %s ]\n", (char *)node1->data);
//         node1 = node1->next;
//     }
//     node1 = tmp;
//     ft_list_remove_if(&node1, "aimen", cmp_test);
//     while (node1->next)
//     {
//         printf("after --> [ %s ]\n", (char *)node1->data);
//         node1 = node1->next;
//     }
// }