#include "monty.h"

/**
 * pall - print all elements of stack starting from the top (head)
 *
 * @stack: head of stack
 *
 * Return: nothing
 */
void pall(stack_t **stack)
{
    stack_t *current = NULL;
    current = *stack;

    if (current != NULL)
    {
        while (current)
        {
            printf("%d\n", current->n);

            current = current->next;
        }
    }
}