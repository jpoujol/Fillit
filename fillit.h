#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 4096

# include "./libft/libft.h"
# include <sys/types.h>
# include <fcntl.h>

char	***ft_parseur(char *str);
size_t	ft_nbtetri(char *str);
char	*ft_readfile(int fd);

#endif
