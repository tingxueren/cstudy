/* main.c */
/* 悲剧,段错误,还没调试好,等会先 */
#include <stdio.h>
#include "linkedlist.h"

void print_elem(link p)
{
	printf("%d\n", p->elem);
}	

int main(void)
{
	link p;

	insert(make_node(10));
	insert(make_node(5));
	insert(make_node(90));
	p = search(5);
	delete(p);
	free_node(p);
	traverse(print_elem);
	destroy();
	push(make_node(100));
	push(make_node(200));
	push(make_node(250));
	while (p= pop()) {
		print_elem(p);
		free_node(p);
	}
	return 0;
}	
