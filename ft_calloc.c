#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	*tam;
	size_t	totalSize;

	totalSize = nitems * size;

	tam = malloc(totalSize);
	if (!tam)
	{
		return (NULL);
	}
	ft_memset(tam,0,totalSize);
	return ((void *)tam);
}

int	main(void)
{
	ft_calloc(3, 5);
}