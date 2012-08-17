
#include <stdio.h>

int gcd(int a, int b)
 {
       if(a%b == 0)
          return b;
       else
         gcd(b, a%b);
 }

struct rational{
	int num, den;
};

struct rational make_rational(int x, int y)
{
	struct rational z;	
	z.num = x;
	z.den = y;
	return z;	
	
}
int  print_rational(struct rational z)
{
	printf("%d/%d\n",(z.num/(gcd(z.den, z.num))),
	 (z.den/(gcd(z.den, z.num))));
	 
}

struct rational add_rational(struct rational a, struct rational b)
{
	struct rational z;
	z.num = a.num*b.den + a.den*b.num;
	z.den = a.den*b.den;
	return z;
}

struct rational sub_rational(struct rational a, struct rational b)
{
	struct rational z;
	z.num = a.num*b.den - a.den*b.num;
	z.den = a.den*b.den;
	return z;
}

struct rational mul_rational(struct rational a, struct rational b)
{
	struct rational z;
	z.num = a.num*b.num;
	z.den = a.den*b.den;
	return z;
}


struct rational div_rational(struct rational a, struct rational b)
{
	struct rational z;
	z.num = a.num*b.den;
	z.den = a.den*b.num;
	return z;
}

int main(void)
{
	struct rational a = make_rational(2, 8); /* a=1/8 */
	struct rational b = make_rational(-1, 8); /* a=-1/8 */
	print_rational(a); 
	print_rational(b); 
	print_rational(add_rational(a, b)); 
	print_rational(sub_rational(a, b)); 
	print_rational(mul_rational(a, b)); 
	print_rational(div_rational(a, b)); 
	
	return 0;

}
