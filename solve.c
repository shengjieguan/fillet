#include "../includes/fillit.h"



//void	print_map(char  **map, int size)
//{
//	int i;

//	i = 0;
//	while (i < size)
//	{
//		ft_putstr(map[i]);
//		ft_putchar('\n');
//		i++;
//	}
//}

//void	delete_map(char **map, int size)
//{
//	int i;
//
//	i = 0;
//	while (i < size)
//	{
//		ft_memdel((void **)&(map[i]));
//		i++;
//	}
//	ft_memdel((void **)&map);
//}

int	overlap(char **map, char *tetri_arr, int a, int b)
{
	int i;
	int x;
	int y;

	x = tetri_arr[i] + a -48;
	y = tetri_arr[i + 1] + b -48;
	while(i <= 6 && map[x][y] == '.')
	{
		i += 2;
		x = tetri_arr[i] + a - 48;
		y = tetri_arr[i + 1] + b - 48;
	}
	return(i == 8);
}

void	place(char *tetri_arr, char **map, char character, int a, int b)
{
	int i;
	int x;
	int y;

	i = 0;
	while (i <= 6)
	{
		x = tetri_arr[i] + a - 48;
		y = tetri_arr[i + 1] + b - 48;
		map[y][x] = character;
		i += 2;
	}
}
int		x_bounds(char *tetri_arr, int size, int x)
{
	return (tetri_arr[0] + x < size &&
				tetri_arr[2] + x < size &&
				tetri_arr[4] + x < size &&
				tetri_arr[6] + x < size);	
}
int		y_bounds(char *tetri_arr, int size, int y)
{
	return (tetri_arr[1] + y < size &&
				tetri_arr[3] + y < size &&
				tetri_arr[5] + y < size &&
				tetri_arr[7] + y < size);	
}
int recursion(char **tetri_arr, char **map, int size)
{
	int x;
	int y;
	int i;
	char *character;

	character = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	x = 0;
	y = 0;
	
	while(y_bounds(tetri_arr[i], size, y))
	{
		while(x_bounds(tetri_arr[i], size, x))
		{
			if(overlap(map, tetri_arr[i], x, y))
			{
				place(tetri_arr[i], map, character[i], x, y);
				if (recursion((tetri_arr[i + 1], map, size) == 1)
					return (1);
				else
					place(tetri_arr[i], map, '.', x, y);
			}
			x++;
		}
		y++;
		x = 0;
	}
	return (0);
}


char	**set_board(int size)
{
	char **map;
	int x;
	int y;
	y = -1;
	while(++y < size)
	{
		x = -1;
		while(++x < size)
			map[y][x] = '.';
	}
	return (map);
}

void	solve(char **tetri_arr, int tetri_count) //add solve(**tetri_arr, int tetri_count) to another function in No.115 line
{
	char **map;
	int size;

	size = 2;
	while(size * size < tetri_count * 4)
		size++;
	map = set_board(size);
	while(recursion(tetri_arr, map,size) == 0)
	{
		size++;
//		delete_map(map, size);
		map = set_board(size);
	}
//	print_map(map, size);
//	delete_map(map, size);
}
