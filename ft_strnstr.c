#include "libft.h"

char	*ft_strnstr(const char	*big, const char	*little, size_t len)
{
	size_t	little_len;
	size_t	i;

	i = 0;
	little_len = ft_strlen(little);

	if (little_len == 0)
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && i < len)
	{
		if (!ft_memcmp(big,little,little_len))
		{
				return ((char *)big);
		}
		i++;
		len--;
	}
	return (NULL);
	
}

int main(void)
{
	char little[]="";
	printf("Vamos testar vazio: %s\n", ft_strnstr("esta aqui", "esta",2));

}