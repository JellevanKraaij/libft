#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int test_is_type(int(*to_test)(int), int(*original)(int));
int test_strlen(void);
int test_memset(void);
int test_bzero(void);
int test_memcpy(void);
int test_memmove(void);
int test_strlcpy(void);

int	main(void)
{
	printf("Checking isalpha = ");
	if(test_is_type(&ft_isalpha, &isalpha))
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
	printf("Checking isdigit = ");
	if(test_is_type(&ft_isdigit, &isdigit))
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
	printf("Checking isalnum = ");
	if(test_is_type(&ft_isalnum, &isalnum))
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
	printf("Checking isascii = ");
	if(test_is_type(&ft_isascii, &isascii))
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
	printf("Checking isprint = ");
	if(test_is_type(&ft_isprint, &isprint))
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
	printf("Checking strlen  = ");
	if(test_strlen())
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
	printf("Checking memset  = ");
	if(test_memset())
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
	printf("Checking bzero   = ");
	if(test_bzero())
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
	printf("Checking memcpy  = ");
	if(test_memcpy())
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
	printf("Checking memmove = ");
	if(test_memmove())
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
	printf("Checking strlcpy = ");
	if(test_strlcpy())
	{
		printf("\033[1;31mERROR\033[0m\n");
	}
	else
	{
		printf("\033[1;32mOK\033[0m\n");
	}
}

int test_is_type(int(*to_test)(int), int(*original)(int))
{
	int i = -500;
	while( i < 500)
	{
		if((*to_test)(i) != (*original)(i))
		{
			return(1);
		}
		i++;
	}
	if((*to_test)(2147483647) != (*original)(2147483647))
	{
		return(1);
	}
	if((*to_test)(-2147483648) != (*original)(-2147483648))
	{
		return(1);
	}
	return(0);
}

int test_strlen(void)
{
	// if(ft_strlen(NULL) != strlen(NULL)) 
	// 	return(1);
	if(ft_strlen("test") != strlen("test"))
		return(1);
	if(ft_strlen("test2323812#$#%@#13") != strlen("test2323812#$#%@#13")) 
		return(1);
	if(ft_strlen("\0") != strlen("\0")) 
		return(1);
	if(ft_strlen("\255") != strlen("\255")) 
		return(1);
	return(0);
}

int test_memset(void)
{
	char test_str1[] = "test1234";
	char test_str2[] = "test1234";
	if(memset(NULL, 'c', (0)) != ft_memset(NULL, 'c', (0)))
		return (1);
	if(strcmp(memset(test_str1, 'c', 4), ft_memset(test_str2, 'c', 4)))
		return (1);
	if(strcmp(test_str1, test_str2))
		return (1);
	return(0);
}

int test_bzero(void)
{
	char test_str1[] = "test1234";
	char test_str2[] = "test1234";

	bzero(NULL, (0));
	ft_bzero(NULL, 0);

	bzero(test_str1, 4);
	ft_bzero(test_str2, 4);
	
	if(memcmp(test_str1, test_str2, 8))
		return (1);
	return(0);
}

int test_memcpy(void)
{
	char *src = "test\0d";
	char dest1[] = "_____1234";
	char dest2[] = "_____1234";

	memcpy(NULL, NULL, 0);
	ft_memcpy(NULL, NULL, 0);

	if(memcmp(memcpy(dest1, src, 6), ft_memcpy(dest2, src, 6), 6))
		return(1);
	if(memcmp(dest1, dest2, 10))
		return (1);
	return(0);
}

int test_memmove(void)
{
	memmove(NULL, NULL, 0);
	ft_memmove(NULL, NULL, 0);
	{
	char dest1[20] = "12345678912";
	char dest2[20] = "12345678912";
	char *src1 = &dest1[4];
	char *src2 = &dest2[4];

	memmove(dest1, src1, 8);
	ft_memmove(dest2, src2, 8);
	
	// printf("%s %s", dest1, dest2);
	if(memcmp(dest1, dest2, 13))
		return (1);
	}
	{
	char src1[20] = "12345678";
	char src2[20] = "12345678";
	char *dest1 = &src1[4];
	char *dest2 = &src2[4];
	
	memmove(dest1, src1, 9);
	ft_memmove(dest2, src2, 9);
	
	// printf("|%s %s", src1, src2);
	if(memcmp(src1, src2, 13))
		return (1);
	}
	return(0);
}

int test_strlcpy(void)
{
	// char test[100];
	if (strlcpy(NULL, "test", 0) != ft_strlcpy(NULL, "test", 0))
		return (1);
	{
	char *src = "123456789";
	char dest1[10];
	char dest2[10];
	
	if (strlcpy(dest1, src, 10) != ft_strlcpy(dest2, src, 10))
		return(1);
	
	if (memcmp(dest1, dest2, 10))
		return(1);
	}
	{
	char *src = "12345";
	char dest1[6] = "_____1";
	char dest2[6] = "_____1";
	if (strlcpy(dest1, src, 5) != ft_strlcpy(dest2, src, 5))
		return(1);
	if (memcmp(dest1, dest2, 6))
		return(1);
	}
	return(0);
}
