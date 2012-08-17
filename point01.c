int *foo(void)
{
	int a;
	
	return &a;
	}

 int main(void)
 {
	 int *q = foo();
	 }
