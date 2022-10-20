Learning about singly linked lists
note the data structure below is used int the projects
/**
  *struct list_s - singly linked list
  *@str: string - (malloc'ed string)
  *@len: length of the string
  *@next: pointer to the next node
  *
  *Desctiption: Singly linked lists node structure
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
