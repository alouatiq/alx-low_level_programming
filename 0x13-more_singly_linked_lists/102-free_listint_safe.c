#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Double pointer to the head of the list.
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *next;

    if (!h || !*h)
        return 0;

    current = *h;
    while (current)
    {
        count++;
        next = current->next;
        free(current);

        if (next == *h)
            break;

        current = next;
    }

    *h = NULL;
    return count;
}
