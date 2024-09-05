#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\n')
        i++;
    return (i);
}
typedef struct s_map
{
    char *content;
    int lin;
    int col;
    char fill;
    char stone;
    char grass; 
} t_map;

void locate(t_map *map)
{
    int index;
    int i;

    i = 0;
    index = 0;

   while (map->content[index] != '\0')
   {
        if(map->content[index] == '\n')
        {
            while(map->content[index + 1 + i] != '\n')
                i++;
            map->col = i;
            break;
        }
        index++;
   }
}
void operators(t_map *map)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(map->content[i] != '\n')
        i++;
    if (i < 4)
        printf("\nPoucas variaveis (operators)\n");
    while (map->content[i])
    {
        if (j == 1) 
            map->fill = map->content[i];
        if (j == 2)
            map->stone = map->content[i];
        if (j == 3)
            map->grass = map->content[i];
        if (j > 3)
            map->lin = map->content[i] - 48;
        j++;
        i--;
    }

}

t_map read_map(char *filename)
{
    char buffer[1024];
    t_map map;
    int bytes;
    int file;
    int i;

    file = open(filename, O_RDONLY);
    if (file < 0)
    {
        write(1, "error map\n", 10);
        map.content = NULL;
        return map;
    }

    bytes = read(file, buffer, sizeof(buffer) - 1);
    if (bytes < 0)
    {
        write(1, "error read\n", 11);
        close(file);
        map.content = NULL;
        return map;
    }
    
    buffer[bytes] = '\0';
    map.content = (char *)malloc((bytes + 1) * sizeof(char));
    if (!map.content)
    {
        write(1, "error malloc\n", 13);
        close(file);
        return map;
    }

    i = 0;
    while (i < bytes)
    {
        map.content[i] = buffer[i];
        i++;
    }
    map.content[bytes] = '\0';
    
    locate(&map);

    close(file);
    return map;
}
int main(int argc, char *argv[])
{
    int i;
    int j;
    char *str;
    t_map map;

    if (argc < 2)
    {
        write(1, "error\n", 6);
        return (1);
    }
    
    i = 1;
    while (i < argc)
    {
        map = read_map(argv[i]);
        if (map.content)
        {
            operators(&map);

            printf("%s\n", map.content);
            printf("grass: %c\n", map.grass);
            printf("stone: %c\n", map.stone);
            printf("fill: %c\n", map.fill);
            printf("line: %d\n",map.lin);
            printf("column: %d\n", map.col);

            free(map.content);
        }
        
        i++;
    }
    
    return (0);
}