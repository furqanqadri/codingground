void my_stack(void);
typedef struct Node{
  int data;
  struct Node* next;
}node;

int isEmpty();
void my_push(int data);
int my_pop();