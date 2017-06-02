#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 4096

# include "./libft/libft.h"
# include <sys/types.h>
# include <fcntl.h>

typedef struct		s_fillit
{
	char	***tetri;
	char	**map;
	int		***position;
	int		nbTetri;
	int		sizeMap;
	int notCount;
	int i;
	int j;
	int k;
}					t_fillit;

char	***ft_parseur(char *str);
size_t	ft_nbTetri(char *str);
char	*ft_readfile(int fd);
int		ft_checkTetri(t_fillit *fillit, char c);
int		ft_countLink(t_fillit *fillit, char c);
void	ft_checkParseur(char ***tetri);
char	***ft_memtab(int len);
int		***ft_mallocInt(t_fillit *fillit);
char	**ft_clearLastTetri(t_fillit *fillit, char letter);
int		***ft_foundPosition(t_fillit *fillit);
int		ft_isFree(t_fillit *fillit, int x, int y);
int		*ft_diff(int x, int y, int i, int j);
char	**ft_newMap(int len);
int		ft_replaceTetri(t_fillit *fillit, int *diff, int nTetri);
void	ft_printMap(t_fillit *fillit);
void	ft_checkPosition(int ***position);
char	***ft_changeLetter(char ***tetri);
void	ft_solveFillit(t_fillit *fillit);
void	ft_initStruct(t_fillit *fillit, char *str);
char	**ft_freeMap(t_fillit *fillit);
char	**ft_resetMap(char **map, int len);
char	**ft_tabTravel(t_fillit *fillit);

#endif
