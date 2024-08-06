#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *temp, *node_to_delete;

if (!head || !*head)
return -1;

if (index == 0)
{
node_to_delete = *head;
*head = (*head)->next;
free(node_to_delete);
return 1;
}

temp = *head;
for (i = 0; temp && i < index - 1; i++)
temp = temp->next;

if (!temp || !(temp->next))
return -1;

node_to_delete = temp->next;
temp->next = temp->next->next;
free(node_to_delete);

return 1;
}
