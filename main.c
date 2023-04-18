#include "libft.h"


int	main(void)
{
	printf("**TESTE FT_ISALPHA:\n");
	int num = '9';

	printf("Minha funcao: %d\n", ft_isalpha(num));
	printf("Funcao original: %d\n", isalpha(num));

	printf("**TESTE FT_ISDIGIT:\n");
	int number = 'a';

	printf("Minha funcao: %d\n", ft_isdigit(number));
	printf("Funcao original: %d\n", isdigit(number));

	printf("**TESTE FT_ISALNUM:\n");
	int c = '/';

	printf("Minha funcao: %d\n", ft_isalnum(c));
	printf("Funcao original: %d\n", isalnum(c));

	printf("**TESTE FT_ISASCII:\n");
	int asc = -1;

	printf("Minha funcao: %d\n", ft_isascii(asc));
	printf("Funcao original: %d\n", isascii(asc));

	printf("**TESTE FT_IPRINT:\n");
	int print = '\n';

	printf("Minha funcao: %d\n", ft_isprint(print));
	printf("Funcao original: %d\n", isprint(print));

	printf("**TESTE FT_STRLEN:\n");
	char lenght[] = "ff";

	printf("Minha funcao: %zu\n", ft_strlen(lenght));
	printf("Funcao original: %lu\n", strlen(lenght));

	printf("**TESTE FT_MEMSET:\n");
	char mem[] = "QUero isto";

	char *s;
	char *d;
	s = mem;
	d = mem;
	ft_memset(mem,64,2);
	printf("Minha funcao: %s\n", s);
	memset(mem,64,2);
	printf("Funcao original: %s\n", d);
	
	printf("**TESTE FT_B_ZERO:\n");
	char zero[] = "QUero isto";

	char *str;
	char *dest;
	str = zero;
	dest = zero;
	ft_bzero(zero,1);
	printf("Minha funcao: %s\n", str);
	//bzero(zero,1);
	printf("Funcao original: %s\n", dest);

	printf("**TESTE FT_MEMCPY:\n");
	char src[] = "QUero isto";
	char destes[] = "ggg";

	char *dests1;
	char *dests2;

	dests1 = destes;
	dests2 = destes;
	ft_memcpy(destes,src,4);
	printf("Minha funcao: %s\n", dests1);
	memcpy(destes,src,4);
	printf("Funcao original: %s\n", dests2);

	printf("**TESTE FT_MEMMOVE:\n");
	char str1[] = "QUero isto";
	char str2[] = "gggfsdfdsfsdfsdfsd";

	char *dest1;
	char *dest2;

	dest1 = str1;
	dest2 = str2;
	ft_memmove(str1,str2,6);
	printf("Minha funcao: %s\n", dest1);
	memmove(str1,str2,6);
	printf("Funcao original: %s\n", dest1);

	printf("**TESTE FT_STRLCPY:\n");
	char destino[]="Quero";
	char source[]="Eu";
	printf("A minha string: %ld\n",ft_strlcpy(destino,source,1));
	//printf("A minha string: %d\n",strlcpy(destino,source,1));

	printf("**TESTE FT_STRLCAT:\n");
	char dd[]="";
	char ss[]="Eu";
	printf("A minha string: %d\n",ft_strlcat(dd,ss,2));
    //printf("Funcao original: %d\n",strlcat() );

	printf("**TESTE FT_TOUPPER:\n");
	printf("A minha funcao: %d\n", ft_toupper('a'));

	printf("**TESTE FT_TOLOWER:\n");
	printf("A minha funcao: %d\n", ft_tolower('A'));

	printf("**TESTE FT_STRCHR:\n");
	char source1[] = " Eu. tenhp";
	printf("Minha funcao: %s\n", ft_strchr(source1,'.'));


	printf("**TESTE FT_STRRCHR:\n");
	char source2[] = " eu. tenhp";
	printf("Minha funcao: %s\n", ft_strrchr(source2,'e'));


	printf("**TESTE FT_STRNCMP:\n");
	char str11[]="tla";
	char str22[]="Ola";
	int ret;

	ret = ft_strncmp(str11,str22,3);
	   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }

	printf("**TESTE FT_MEMCHR:\n");
   	char str23[] = "Eu.tenho";

	printf("Minha funcao: %s\n",ft_memchr(str23,'.',5));
	printf("funcao Original: %s\n",memchr(str23,'.',5));

/*q
	printf("**TESTE FT_STRNCMP:\n");
	size_t	n;
	int	resultado;
	char	s1[] = "teste1";
	char	s2[] = "teste2";
	n = 5;
	resultado = ft_strncmp(s1, s2, n);
	printf("s1: %s\n s2: %s\n e n: %d\n\n", s1, s2, resultado);
	resultado = strncmp(s1, s2, n);
	printf("Funcao original:\n s1: %s\n s2: %s\n e n: %d\n\n", s1, s2, resultado);


	printf("**TESTE STRNSTR");
	const char	big[] = "pensar";
	const char	little[] = "ar";
	size_t len = 7;
	char *resultado;
	resultado = ft_strnstr(big, little, len);
	printf("resultado de &big[i]: %s\n\n", resultado);
	

    
	printf("**TESTE FT_ATOI:\n");
	char	str[] = "       -+-921bc687";
	int	result;
    int test;

	result = ft_atoi(str);
	printf("input: %s\n", str);
	printf("resultado da funcao: %i\n\n", result);
    
	printf("funcao original:\n");
    test = atoi(str);
    printf("input: %s\n", str);
	printf("resultado da funcao: %i\n", test);
*/
}