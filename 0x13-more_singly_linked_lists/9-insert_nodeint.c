#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Value to store in the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new_node, *temp;

    if (!head)
        return NULL;

    if (idx == 0)
        return add_nodeint(head, n);

    temp = *head;
    for (i = 0; temp && i < idx - 1; i++)
        temp = temp->next;

    if (!temp)
        return NULL;

    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return NULL;

    new_node->n = n;
    new_node->next = temp->next;
    temp->next = new_node;

    return new_node;
}
