#include <stdio.h>
#include "../includes/ft_printf.h"
#include <time.h>

int	main(void)
{
	time_t start, end;
	double result;

	start = time(NULL);
	
	// printf("return: %d\n", printf("01. hello %f world\n", 2.625));
	// printf("return: %d\n", ft_printf("01. hello %f world\n", 2.625));
	// printf("\n");

	// printf("02. hello %f world\n", 0.625);
	// ft_printf("02. hello %f world\n", 0.625);
	// printf("\n");

	// printf("03. hello %f world\n", 23.456);
	// ft_printf("03. hello %f world\n", 23.456);
	// printf("03. hello %f world\n", 0.456);
	// ft_printf("03. hello %f world\n", 0.456);
	// printf("\n");

	// printf("04. hello %f world\n", 123456789000111222333.3125);
	// ft_printf("04. hello %f world\n", 123456789000111222333.3125);
	// printf("\n");

	// printf("05. hello %f world\n", 123.3125);
	// ft_printf("05. hello %f world\n", 123.3125);
	// printf("\n");

	// printf("06. hello %f world\n", __DBL_MAX__);
	// ft_printf("06. hello %f world\n", __DBL_MAX__);
	// printf("\n");

	// printf("return: %d\n", printf("07. hello %.0f world\n", 0.125));
	// printf("return: %d\n", ft_printf("07. hello %.0f world\n", 0.125));
	// printf("\n");

	// printf("08. hello %.3f world\n", 0.125);
	// ft_printf("08. hello %.3f world\n", 0.125);
	// printf("\n");

	// printf("09. hello %- 10f world\n", 0.125);
	// ft_printf("09. hello %- 10f world\n", 0.125);
	// printf("\n");

	// printf("10. hello %f world\n", __DBL_MIN__);
	// ft_printf("10. hello %f world\n", __DBL_MIN__);
	// printf("\n");

	// printf("11. hello %.1f world\n", 0.987);
	// ft_printf("11. hello %.1f world\n", 0.987);
	// printf("\n");

	// printf("12. hello %#.0f world\n", 0.273);
	// ft_printf("12. hello %#.0f world\n", 0.273);
	// printf("\n");

	// printf("13. hello %#.0f world\n", 0.0);
	// ft_printf("13. hello %#.0f world\n", 0.0);
	// printf("\n");

	// printf("14. hello %.2f world\n", 999.9999);
	// ft_printf("14. hello %.2f world\n", 999.9999);
	// printf("\n");

	// printf("15. hello %.2f world\n", 599.9999);
	// ft_printf("15. hello %.2f world\n", 599.9999);
	// printf("\n");

	// printf("16. hello %f world\n", 52.0);
	// ft_printf("16. hello %f world\n", 52.0);
	// printf("\n");

	// printf("17. hello % .1f world\n", 12.345);
	// ft_printf("17. hello % .1f world\n", 12.345);
	// printf("\n");

	// printf("18. hello %-10.1f world\n", 12.345);
	// ft_printf("18. hello %-10.1f world\n", 12.345);
	// printf("\n");

	// printf("19. hello %- 10.1f world\n", 12.345);
	// ft_printf("19. hello %- 10.1f world\n", 12.345);
	// printf("\n");

	// printf("20. hello %10.0f world\n", 0.123);
	// ft_printf("20. hello %10.0f world\n", 0.123);
	// printf("\n");

	// printf("21. hello %.1f world\n", -12.345);
	// ft_printf("21. hello %.1f world\n", -12.345);
	// printf("\n");

	// printf("22. hello %+.1f world\n", 12.345);
	// ft_printf("22. hello %+.1f world\n", 12.345);
	// printf("\n");

	// printf("23. hello %+ .1f world\n", 12.345); +12.345 (공백 무시)
	// ft_printf("23. hello %+ .1f world\n", 12.345);
	// printf("\n");

	// printf("return: %d\n", printf("24. hello %010.1f world\n", 12.345));
	// printf("return: %d\n", ft_printf("24. hello %010.1f world\n", 12.345));
	// printf("\n");

//	printf("25. hello %-010.1f world\n", 12.345); 12.3      (0플래그 무시)
//	ft_printf("25. hello %-010.1f world\n", 12.345);
//	printf("\n");
/*
	printf("26. hello % 010.1f world\n", 12.345);
	ft_printf("26. hello % 010.1f world\n", 12.345);
	printf("\n");

	printf("27. hello % 010.1f world\n", -12.345);
	ft_printf("27. hello % 010.1f world\n", -12.345);
	printf("\n");

	printf("28. hello %.6f world\n", 0.0894255);
	ft_printf("28. hello %.6f world\n", 0.0894255);
	printf("\n");

	printf("29, hello %f world\n", 23.375094499);
	ft_printf("29. hello %f world\n", 23.375094499);
	printf("\n");

	printf("30. hello %f world\n", 0.0);
	ft_printf("30. hello %f world\n", 0.0);
	printf("\n");

	printf("31. hello %5.0f world\n", -0.0);
	ft_printf("31. hello %5.0f world\n", -0.0);
	printf("\n");

	printf("32. hello %-5.0f world\n", -0.0);
	ft_printf("32. hello %-5.0f world\n", -0.0);
	printf("\n");

	printf("return: %d\n", printf("% 010.1f\n", -12.345));
	printf("return: %d\n", ft_printf("% 010.1f\n", -12.345));
	printf("\n");
*/
	// printf("%#.0f\n", 0.0);
	// ft_printf("%#.0f\n\n", 0.0);

	// printf("%#.0f\n", 12.34);
	// ft_printf("%#.0f\n\n", 12.34);

/*	printf("INF: hello %010f world\n", 1.0/0.0);
	ft_printf("INF: hello %010f world\n", 1.0/0.0);
	printf("INF: hello %+10f world\n", 1.0/0.0);
	ft_printf("INF: hello %+10f world\n", 1.0/0.0);
	printf("\n");

	printf("NaN: hello %10f world\n", 0.0/0.0);
	ft_printf("NaN: hello %10f world\n", 0.0/0.0);
	printf("\n");
*/
/*	printf("%.10f", 123.456);
	printf("\n");
	ft_printf("%.1000f", 231424.456194823948244928);
	printf("\n");
*/

	// printf("NaN: hello %+10f world\n", 0.0/0.0);
	// ft_printf("NaN: hello %+10f world\n", 0.0/0.0);
	// printf("\n");

	end = time(NULL);
	result = (double)(end - start);
	printf("%f", result);

	return (0);
}
