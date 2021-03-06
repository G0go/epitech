/*
** rotate_check.c for rotate_check in /home/gogo/rendu/PSU_2015_tetris/srcs/game/pieces/checkings
** 
** Made by Gauthier Cler
** Login   <cler_g@epitech.eu>
** 
** Started on  Fri Mar 11 16:38:27 2016 Gauthier Cler
** Last update Wed Mar 16 18:44:24 2016 Anas Buyumad
*/

#include	"tetris.h"

int		rotation_check_straight(t_init *setup, t_falling *falling_piece)
{
  int		x;
  int		y;

  y = 0;
  while (y < (int)falling_piece->token->width)
    {
      x = 0;
      while (x < (int)falling_piece->token->height)
	{
	  if ((falling_piece->pos_y + y + 1) >= (int)setup->map.height
	      || (falling_piece->pos_x + x + 1) >= (int)setup->map.width)
	    return (ERROR);
	  if (falling_piece->token->pos_2[y][x] == '*')
	    {
	      if (setup->board[falling_piece->pos_y + y]
		  [falling_piece->pos_x + x] > 0)
		return (ERROR);
	    }
	  x += 1;
	}
      y += 1;
    }
  return (SUCCESS);
}

int		rotation_check_right(t_init *setup, t_falling *falling_piece)
{
  int		x;
  int		y;

  y = 0;
  while (y < (int)falling_piece->token->height)
    {
      x = 0;
      while (x < (int)falling_piece->token->width)
	{
	  if ((falling_piece->pos_y + y + 1) >= (int)setup->map.height
	      || (falling_piece->pos_x + x + 1) >= (int)setup->map.width)
	    return (ERROR);
	  if (falling_piece->token->pos_3[y][x] == '*')
	    {
	      if (setup->board[falling_piece->pos_y + y]
		  [falling_piece->pos_x + x] > 0)
		return (ERROR);
	    }
	  x += 1;
	}
      y += 1;
    }
  return (SUCCESS);
}

int		rotation_check_down(t_init *setup, t_falling *falling_piece)
{
  int		x;
  int		y;

  y = 0;
  while (y < (int)falling_piece->token->width)
    {
      x = 0;
      while (x < (int)falling_piece->token->height)
	{
	  if ((falling_piece->pos_y + y + 1) >= (int)setup->map.height
	      || (falling_piece->pos_x + x + 1) >= (int)setup->map.width)
	    return (ERROR);
	  if (falling_piece->token->pos_4[y][x] == '*')
	    {
	      if (setup->board[falling_piece->pos_y + y]
		  [falling_piece->pos_x + x] > 0)
		return (ERROR);
	    }
	  x += 1;
	}
      y += 1;
    }
  return (SUCCESS);
}

int		rotation_check_left(t_init *setup, t_falling *falling_piece)
{
  int		x;
  int		y;

  y = 0;
  while (y < (int)falling_piece->token->height)
    {
      x = 0;
      while (x < (int)falling_piece->token->width)
	{
	  if ((falling_piece->pos_y + y + 1) >= (int)setup->map.height
	      || (falling_piece->pos_x + x + 1) >= (int)setup->map.width)
	    return (ERROR);
	  if (falling_piece->token->pos_1[y][x] == '*')
	    {
	      if (setup->board[falling_piece->pos_y + y]
		  [falling_piece->pos_x + x] > 0)
		return (ERROR);
	    }
	  x += 1;
	}
      y += 1;
    }
  return (SUCCESS);
}

int		rotate_check(t_init *setup, t_falling *falling_piece)
{
  if (falling_piece->token->state == 1)
    return (rotation_check_straight(setup, falling_piece));
  else if (falling_piece->token->state == 2)
    return (rotation_check_right(setup, falling_piece));
  else if (falling_piece->token->state == 3)
    return (rotation_check_down(setup, falling_piece));
  else if (falling_piece->token->state == 4)
    return (rotation_check_left(setup, falling_piece));
  return (ERROR);
}
