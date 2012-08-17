/* sequence_stack.h */
#ifndef SEQUENCE_STACK_H
#define SEQUENCE_STACK_H
/* 构造顺序存储的栈 */
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10

typedef struct {
	selemtype *base;
	selemtype *top;
	int stacksize;
} sqstack;

void initstack(sqstack *s);

void destorystack(sqstack *s);

void clearstack(sqstack *s);

bool stackempty(sqstack *s);

int stacklength(sqstack *s);

selemtype gettop(sqstack *s, selemtype *e);

void push(sqstack *s, selemtype *e);

selemtype pop(sqstack *s, selemtype *e);

status stacktraverse(sqstack *s, status(*visit()) );























#endif
