#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

char *validate_input(char *str)
{
    int count = 0;
    char *ptr = malloc(17 * sizeof(char));

    while (*str)
    {
        if (!(*str >= '1' && *str <= '4' || *str == ' '))
        {
            ptr[0] = '\0';
            return ptr;
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
        return ptr;
    ptr[0] = '\0';
    return ptr;
}

int check_line(int *arr, int start, int end)
{
    int i;
    int j;
    int count;

    j = start;
    i = start;
    while (i <= end)
    {
        count = 0;
        j = start;
        while (j <= end)
        {
            if(arr[i] == arr[j])
                count++;
            j++;
        }
        if(count > 1)
            return (1); // Avança pelas linhas da coluna fixa
        i++;
    }
    return (0);
}

int check_column(int *arr, int start, int end)
{
    int i;
    int j;

    i = start;
    while (i < 4) 
    {
        j = i + 1;
        while (j < 4)
        {
            if(arr[start + i * 4] == arr[start + j * 4])
            {
                int a = 48 + arr[start + i * 4];
                write(1, &a, 1);
                int b = 48 + arr[start + j * 4];
                write(1, &b, 1);
                return (1);
            }
            j++;
        }
        i++;
    }
    return (0);
}


int main(void){
    int arr[16] = {1,2,3,4,
                   2,4,4,4,
                   3,4,4,4,
                   3,2,3,4};
    char a = 48 + check_column(arr, 0, 3);
    write(1, &a, 1);
}

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
