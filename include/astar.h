/*
** a_star.h for a_star in /Users/leandr_g/Documents/Shared folder/TekAdventure/inc/
**
** Made by Gaëtan Léandre
** Login   <leandr_g@epitech.eu>
**
** Started on  Fri Apr  8 04:51:26 2016 Gaëtan Léandre
** Last update Fri Apr  8 23:28:08 2016 Gaëtan Léandre
*/

#ifndef			_A_STAR_H_
# define		_A_STAR_H_

#define			TRAVERS		1

#include 		"stdlib.h"
#include 		"math.h"

typedef struct		s_ind
{
  int			x;
  int			y;
  int			indice;
}			t_ind;

typedef struct		s_posi
{
  int			x;
  int			y;
}			t_posi;

typedef struct		s_depla
{
  int			x;
  int			y;
  struct s_depla	*next;
}			t_depla;

typedef struct		s_star
{
  int			x;
  int			y;
  int			cur_x;
  int			cur_y;
  int			end_x;
  int			end_y;
  char			**ind_list;
  char			**open_list;
  t_depla		*depla;
}			t_star;

int			add_in_depla(t_star *star, int x, int y);
int			init_tab(t_star *star);
void	 		case_is_free(char **obj, t_star *star);
int			calculDistance(int xA, int xB, int yA, int yB);
int			calcul_indice(t_star *star, int x, int y);
void			set_coef(t_star *star, int x, int y);
void			add_proc(t_star *star, int x, int y);
int			caseProche(t_star *star);
t_ind			take_way(t_star *star, int x, int y);
int			best_way(t_star *star);
t_depla			*free_star(t_star *star);
int			init_star(t_star *star, t_posi *size,
				  t_posi *pos, t_posi *end);
t_depla			*a_star(char **obj, t_posi *size,
				t_posi *pos, t_posi *end);

#endif		/*_A_STAR_H_*/
