/*
 JTSK-320112
 linked_list.h
 Zihan Qi
 z.qi@jacobs-university.de
 */

#ifndef linked_list_h
#define linked_list_h

struct list{
    int info;
    struct list* next;
};
struct list* push_front(struct list *, int);
struct list* remove_first(struct list *);
struct list* add_elem(struct list *, int);
void print_elements(struct list *);
void dispose_list(struct list*);
#endif /* linked_list_h */
