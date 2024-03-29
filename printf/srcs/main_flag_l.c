#include <stdio.h>
#include "../includes/ft_printf.h"
#include <time.h>

int	main(void)
{
	time_t start, end;
	double result;

	start = time(NULL);

	// int	a = INT_MIN;
	// int	b = INT_MAX;

	// printf("10:\t\t%d\n", 10);
	// ft_printf("10:\t\t%d\n\n", 10);

	// printf("SHRT_MIN(h):%hd\n", SHRT_MIN);
	// ft_printf("SHRT_MIN(h):%hd\n\n", SHRT_MIN);

	// printf("SHRT_MAX(h):%hd\n", SHRT_MAX);
	// ft_printf("SHRT_MAX(h):%hd\n\n", SHRT_MAX);

	// short	s1 = SHRT_MIN;
	// short	s2 = SHRT_MAX;

	// printf("SHRT_MIN - 1(h):%hd\n", s1 - 1);
	// ft_printf("SHRT_MIN - 1(h):%hd\n\n", s1 - 1);
	
	// printf("SHRT_MAX + 1(h):%hd\n", s2 + 1);
	// ft_printf("SHRT_MAX + 1(h):%hd\n\n", s2 + 1);

	// unsigned short	s3 = USHRT_MAX;

	// printf("USHRT_MAX(h):%hu\n", USHRT_MAX);
	// ft_printf("USHRT_MAX(h):%hu\n\n", USHRT_MAX);

	// printf("USHRT_MAX + 1(h):%hu\n", s3 + 1);
	// ft_printf("USHRT_MAX + 1(h):%hu\n\n", s3 + 1);
	
	// printf("INT_MIN(d):%d\n", INT_MIN);
	// ft_printf("INT_MIN(d):%d\n\n", INT_MIN);

	// printf("INT_MIN - 1(d):%d\n", a - 1);
	// ft_printf("INT_MIN - 1(d):%d\n\n", a - 1);

	// printf("INT_MAX + 1(d):%d\n", b + 1);
	// ft_printf("INT_MAX + 1(d):%d\n\n", b + 1);

	// printf("INT_MAX(d):%d\n", INT_MAX);
	// ft_printf("INT_MAX(d):%d\n\n", INT_MAX);

	// printf("LONG_MIN(l):%ld\n", LONG_MIN);
	// ft_printf("LONG_MIN(l):%ld\n\n", LONG_MIN);

	// printf("LONG_MAX(l):%ld\n", LONG_MAX);
	// ft_printf("LONG_MAX(l):%ld\n\n", LONG_MAX);

	// printf("LLONG_MIN(ll):%lld\n", LLONG_MIN);
	// ft_printf("LLONG_MIN(ll):%lld\n\n", LLONG_MIN);

	// printf("LLONG_MAX(ll):%lld\n", LLONG_MAX);
	// ft_printf("LLONG_MAX(ll):%lld\n\n", LLONG_MAX);

	// long long c = LLONG_MAX;
	// long long d = LLONG_MIN;

	// printf("LLONG_MAX + 1(lld):%lld\n", c + 1);
	// ft_printf("LLONG_MAX + 1(lld):%lld\n\n", c + 1);

	// printf("LLONG_MIN - 1(lld):%lld\n", d - 1);
	// ft_printf("LLONG_MIN - 1(lld):%lld\n\n", d - 1);

	// unsigned long long	e = ULLONG_MAX;
	// unsigned long long	f = -1;
	
	// printf("ULLONG_MAX(llu):%llu\n", ULLONG_MAX);
	// ft_printf("ULLONG_MAX(llu):%llu\n\n", ULLONG_MAX);

	// printf("ULLONG_MAX + 1(llu):%llu\n", e + 1);
	// ft_printf("ULLONG_MAX + 1(llu):%llu\n\n", e + 1);

	// printf("-1(llu):%llu\n", f);
	// ft_printf("-1(llu):%llu\n\n", f);

	short	n1 = 130;
	short	n2 = 130;

	printf("hello%hn\n", &n1);
	printf("n1: %hd\n", n1);
	ft_printf("hello%hn\n", &n2);
	ft_printf("n2: %hd\n\n", n2);

	end = time(NULL);
	result = (double)(end - start);
	printf("%f", result);

	return (0);
}
