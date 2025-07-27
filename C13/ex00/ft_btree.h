#ifndef FT_BTREE_H
# define FT_BTREE_H

// External includes

#  include <stdlib.h>

// btree struct

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void		*item;
}			t_btree;

#endif
