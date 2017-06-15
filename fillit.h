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
	int		***coor;
	int		nbTetri;
	int		sizeMap;
	int		i;
	int		j;
	int		k;
}					t_fillit;

char	***ft_parseur(char *str);
size_t	ft_nbTetri(char *str);
char	*ft_readfile(int fd);
int		ft_checkTetri(t_fillit *fillit, char c);
int		ft_countLink(t_fillit *fillit, char c);
void	ft_checkParseur(t_fillit *fillit);
char	***ft_memtab(int len);
int		***ft_mallocInt(t_fillit *fillit);
char	**ft_clearLastTetri(char **map, char letter);
int		**ft_coor(int **coor, char **tetri);
int		ft_isFree(t_fillit *fillit, int **coor);
int		*ft_diff(int x, int y, int i, int j);
char	**ft_newMap(int len);
int		ft_replaceTetri(t_fillit *fillit, int *diff, int nTetri);
void	ft_printMap(t_fillit *fillit);
void	ft_checkPosition(int ***position);
char	***ft_changeLetter(char ***tetri);
int		ft_solveFillit(t_fillit *fillit, int id);
void	ft_initStruct(t_fillit *fillit, char *str);
char	**ft_freeMap(t_fillit *fillit);
char	**ft_resetMap(char **map, int len);
char	**ft_tabTravel(t_fillit *fillit);

int		**ft_upLeft(int **coor);
int   ***ft_upAllLeft(t_fillit *fillit);
void	ft_fillit(t_fillit *fillit);
int		***ft_initCoor(t_fillit *fillit);
int		**ft_setetrix(t_fillit *fillit, int **coor);
char	**ft_placeTetri(int **coor, char **map, char c);
int		**ft_addx(int **coor);
int		**ft_addy(int **coor);
int		**ft_tmpCoor(int **coor);
void	ft_printCoor(int **coor);
#endif
