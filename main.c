#include "libft.h"
int main()
{
	int fd = open("file.txt", O_WRONLY | O_CREAT, 0644);
	if(fd < 0)
		perror(NULL);
	ft_printf(fd, "%s\n", "ewqewqew");
	close(fd);
}
