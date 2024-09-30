/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:47:47 by nrey              #+#    #+#             */
/*   Updated: 2024/09/29 19:46:09 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*

	Pointers to function memo

	(Params do not need names, they're ignored)
	
	Declaring p as a pointer to a function.
	Returns a float, takes two ints as args.

	float (*p)(int, int);

	Usage :

	float (*p)(char) = ft_putchar;

	p(a);				Calling ft_putchar from the pointer

	Passing (Pointers to functions) as arguments


		int mult(int a, int b)
			return a * b;
	
		void print_math(int (*op)(int, int), int x, int y)
		{
			int result = op(x, y);
	
			printf("%d\n", result);
		}
	
		int main(void)
		{
			print_math(mult, 5, 7);
		}


*/
