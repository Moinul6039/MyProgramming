#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 256

struct node {
  char ch;
  int freq;
  struct node *left, *right;
};

struct node *create_node(char ch, int freq) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->ch = ch;
  new_node->freq = freq;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

void huffman_code(char *str, int n) {
  // Create a priority queue to store the nodes
  struct node *pq[n];
  for (int i = 0; i < n; i++) {
    pq[i] = create_node(str[i], 1);
  }

  // Merge the nodes in the priority queue until there is only one node left
  for (int i = 0; i < n - 1; i++) {
    // Get the two nodes with the lowest frequencies
    struct node *min1 = pq[0];
    struct node *min2 = pq[1];

    // Remove the two nodes from the priority queue
    pq[0] = pq[n - 1];
    pq[1] = pq[n - 2];
    n -= 2;

    // Create a new node with the frequencies of the two nodes merged
    struct node *new_node = create_node('\0', min1->freq + min2->freq);
    new_node->left = min1;
    new_node->right = min2;

    // Insert the new node back into the priority queue
    pq[n - 1] = new_node;
  }

  // The root of the Huffman tree is the only node left in the priority queue
  struct node *root = pq[0];

  // Create a map to store the Huffman codes
  char code[MAX_CHARS][MAX_CHARS];
  memset(code, '\0', sizeof(code));

  // Traverse the Huffman tree in postorder and generate the Huffman codes
  generate_code(root, code, "");

  // Print the Huffman codes
  for (int i = 0; i < n; i++) {
    printf("%c: %s\n", str[i], code[str[i]]);
  }
}

void generate_code(struct node *root, char code[], char str) {
  if (root == NULL) {
    return;
  }

  // If the node is a leaf node, then the code is the string str
  if (root->ch != '\0') {
    strcpy(code[root->ch], str);
    return;
  }

  // Recursively generate the codes for the left and right subtrees
  generate_code(root->left, code, str + "0");
  generate_code(root->right, code, str + "1");
}

int main() {
  char str[] = "abcabc";
  int n = strlen(str);

  huffman_code(str, n);

  return 0;
}

