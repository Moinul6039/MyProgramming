
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head;

void insert(int data) {
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->next = NULL;

  if (head == NULL) {
    head = new_node;
  } else {
    struct Node *current = head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = new_node;
  }
}

int linear_search(int data) {
  struct Node *current = head;
  while (current != NULL) {
    if (current->data == data) {
      return current->data;
    }
    current = current->next;
  }

  return -1;
}

int main() {
  head = NULL;

  insert(10);
  insert(20);
  insert(30);
  insert(40);
  insert(50);

  int element = 30;
  int index = linear_search(element);

  if (index == -1) {
    printf("Element not found.\n");
  } else {
    printf("Element found at index %d.\n", index);
  }

  return 0;
}
