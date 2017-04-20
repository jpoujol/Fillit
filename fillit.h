#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 4096

# include "./libft/libft.h"
# include <sys/types.h>
# include <fcntl.h>

char	***ft_parseur(char *str);
size_t	ft_nbTetri(char *str);
char	*ft_readfile(int fd);
int		ft_checkTetri(char ***tetri, char c);
void	ft_checkParseur(char ***tetri);
char	**ft_malloc2d(int nbColone, int nbLigne);
char	***ft_malloc3d(int nbColone, int nbLigne, int nbTetri);
char	***ft_memtab(int len);

#endif
