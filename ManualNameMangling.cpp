// ManualNameMangling.cpp
// g++ ManualNameMangling.cpp -o ManualNmaeMangling

#include <stdio.h>

namespace myname {
	int var = 42;
}

extern "C"  double  _ZN6myname3varE; 

int main(void)
{
	printf("%d\n", _ZN6myname3varE);
	return 0;
}	
