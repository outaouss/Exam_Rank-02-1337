#include <stdio.h>

typedef struct s_list t_list;

struct s_list {
    int data;
    t_list *next;
};

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    t_list *tmp;

    tmp = lst;
    while (lst->next)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}

// int main()
// {
//     t_list node1;
//     t_list node2;
//     t_list node3;
//     t_list node4;

//     node1.data = 1;
//     node2.data = 99;
//     node3.data = 14;
//     node4.data = 65;

//     node1.next = &node2;
//     node2.next = &node3;
//     node3.next = &node4;
//     node4.next = NULL;

//     t_list *sorted_head = sort_list(&node1, &ascending);

//     t_list *tmp = sorted_head;
//     while (tmp)
//     {
//         printf("%d\n", tmp->data);
//         tmp = tmp->next;
//     }
// }