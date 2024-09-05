#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

char	*validate_input(char *str)
{
	int		count;
	char	*ptr;

	count = 0;
	ptr = (char *)malloc(17);
	while (*str)
	{
		if (!(*str >= '1' && *str <= '4' || *str == ' '))
		{
			ptr[0] = '\0';
			return (ptr);
		}
		if (*str != ' ')
		{
			ptr[count] = *str;
			count++;
		}
		str++;
	}
	ptr[count] = '\0';
	if (count == 16)
		return (ptr);
	ptr[0] = '\0';
	return (ptr);
}

char	*transform_input(char *str)
{
	char	*out;
	char	*temp;
	int		i;
	int		j;

	out = (char *) malloc(17);
	i = 0;
	j = 0;
	temp = (char *)malloc(2);
	while (i < 8)
	{
		out[j++] = str[i];
		out[j++] = str[i + 4];
		i++;
	}
	i = 8;
	while (i < 16)
	{
		*temp = out[i];
		out[i] = out[i + 1];
		out[i + 1] = *temp;
		i += 2;
	}
	out[j] = '\0';
	return (out);
}

int	check_number_row(int *arr, int condition)
{
	int	box_count;
	int	max_height;
	int	i;

	max_height = 0;
	box_count = 0;
	i = 0;
	while (i < 4)
	{
		if (arr[i] > max_height && arr[i] != 0)
		{
			max_height = arr[i];
			box_count++;
		}
		i++;
	}
	return (box_count <= condition);
}

int	check_number_row_rev(int *arr, int condition)
{
	int	box_count;
	int	max_height;
	int	i;

	max_height = 0;
	box_count = 0;
	i = 3;
	while (i >= 0)
	{
		if (arr[i] > max_height && arr[i] != 0)
		{
			max_height = arr[i];
			box_count++;
		}
			i--;
	}
	return (box_count <= condition);
}
/*
int main(void)
{
    int a;
    int arr[4] = {4, 2, 1, 3};  // Correção da declaração do array

    a = '0';
    a += check_number_row_rev(arr, 2);
    write(1, &a, 1);  // Exibe o valor de 'a' como caractere
    return 0;
}*/

int	is_unique_row(int *matrix, int row_index, int num_cols)
	{
	int	digits[5];
	int	i;
	int	num;

	i = 0;
	while (i < 5)
	{
		digits[i] = 0;
		i++;
	}
	i = 0;
	while (i < num_cols)
	{
		num = matrix[row_index * num_cols + i];
		if (num >= 1 && num <= 4)
		{
			if (digits[num] == 1)
				return (0);
			digits[num] = 1;
		}
		i++;
	}
	return (1);
}

int	is_unique_col(int *matrix, int col_index, int num_rows, int total_elements)
{
	int	digits[5];
	int	limit;
	int	i;
	int	num;

	i = 0;
	while (i++ < 5)
	{
		digits[i] = 0;
	}
	limit = num_rows;
	if (col_index < (total_elements % 4))
		limit += 1;
	i = 0;
	while (i++ < limit)
	{
		num = matrix[i * 4 + col_index];
		if (num >= 1 && num <= 4)
		{
			if (digits[num] == 1)
				return (0);
			digits[num] = 1;
		}
	}
	return (1);
}

void	calculate_dimensions(int *matrix, int total_elements, int *num_rows, int *num_cols)
{
	*num_rows = (total_elements + 3) / 4;
	*num_cols = 4;
}

/*
int main(void){
    int arr[16] = {1,2,3,4,
                   2,4,4,4,
                   3,4,4,4,
                   4,2,3,4};
    char a = 48 + is_unique_col(arr, 0, 4, 16);
    write(1, &a, 1);
}*/

/*int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        ft_putstr("Uso: ./programa <string_de_entrada>\n");
        return 1;
    }

    char *result = validate_input(argv[1]);

    if (result[0] == '\0')
    {
        ft_putstr("Entrada inválida.\n");
    }
    else
    {
        ft_putstr("Entrada válida: ");
        ft_putstr(result);
        ft_putstr("\n");
    }

    free(result); // Liberação da memória alocada

    return 0;
}*/
