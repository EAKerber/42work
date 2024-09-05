#include <stdio.h>
#include <string.h>

// Prototipando as funções implementadas nos exercícios
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

// Função para imprimir o cabeçalho centralizado
void print_exercise(char *exercise, char *function) {
    int total_width = 80;
    int prefix_suffix_width = 7;
    int text_length = strlen(exercise) + strlen(function) + 11;
    
    int padding = (total_width - text_length) / 2 - prefix_suffix_width;
    int left_padding = padding > 0 ? padding : 0;
    int right_padding = total_width - text_length - left_padding - (2 * prefix_suffix_width);

    printf("=======");
    for (int i = 0; i < left_padding; i++) printf("=");
    printf("Exercise %s: %s", exercise, function);
    for (int i = 0; i < right_padding; i++) printf("=");
    printf("=======\n");
}

// Implementação de strlcat para evitar problemas de compatibilidade
size_t strlcat(char *dst, const char *src, size_t size) {
    size_t dlen = strlen(dst);
    size_t slen = strlen(src);
    size_t total_len = dlen + slen;

    if (size <= dlen) {
        return slen + size;
    }

    size_t copy_len = size - dlen - 1;
    if (copy_len > slen) {
        copy_len = slen;
    }

    memcpy(dst + dlen, src, copy_len);
    dst[dlen + copy_len] = '\0';

    return total_len;
}

int main(void) {
    // Teste do exercício 00: ft_strcmp
    char s1[] = "Hello";
    char s2[] = "Hello";
    char s3[] = "World";
    char s4[] = "";
    char s5[] = "HelLo";
    print_exercise("00", "ft_strcmp");
    printf("Comparando '%s' com '%s'\n", s1, s2);
    printf("Expected output: %d\n", strcmp(s1, s2));
    printf("Actual output  : %d\n\n", ft_strcmp(s1, s2));
    
    printf("Comparando '%s' com '%s'\n", s1, s3);
    printf("Expected output: %d\n", strcmp(s1, s3));
    printf("Actual output  : %d\n\n", ft_strcmp(s1, s3));
    
    printf("Comparando '%s' com '%s'\n", s1, s4);
    printf("Expected output: %d\n", strcmp(s1, s4));
    printf("Actual output  : %d\n\n", ft_strcmp(s1, s4));

    printf("Comparando '%s' com '%s'\n", s1, s5);
    printf("Expected output: %d\n", strcmp(s1, s5));
    printf("Actual output  : %d\n\n", ft_strcmp(s1, s5));

    // Teste do exercício 01: ft_strncmp
    print_exercise("01", "ft_strncmp");
    printf("Comparando '%s' com '%s', primeiros 3 caracteres\n", s1, s2);
    printf("Expected output: %d\n", strncmp(s1, s2, 3));
    printf("Actual output  : %d\n\n", ft_strncmp(s1, s2, 3));
    
    printf("Comparando '%s' com '%s', primeiros 3 caracteres\n", s1, s3);
    printf("Expected output: %d\n", strncmp(s1, s3, 3));
    printf("Actual output  : %d\n\n", ft_strncmp(s1, s3, 3));

    printf("Comparando '%s' com '%s', primeiros 4 caracteres\n", s1, s5);
    printf("Expected output: %d\n", strncmp(s1, s5, 4));
    printf("Actual output  : %d\n\n", ft_strncmp(s1, s5, 4));

    // Teste do exercício 02: ft_strcat
    char dest1[20] = "Hello";
    char src1[] = " World";
    char dest1_std[20] = "Hello";
    print_exercise("02", "ft_strcat");
    printf("Concatenando '%s' com '%s'\n", dest1, src1);
    printf("Expected output: '%s'\n", strcat(dest1_std, src1));
    printf("Actual output  : '%s'\n\n", ft_strcat(dest1, src1));

    char dest2[20] = "";
    char src2[] = "Hello";
    char dest2_std[20] = "";
    printf("Concatenando '%s' com '%s'\n", dest2, src2);
    printf("Expected output: '%s'\n", strcat(dest2_std, src2));
    printf("Actual output  : '%s'\n\n", ft_strcat(dest2, src2));

    // Teste do exercício 03: ft_strncat
    char dest3[20] = "Hello";
    char src3[] = " World";
    char dest3_std[20] = "Hello";
    print_exercise("03", "ft_strncat");
    printf("Concatenando '%s' com '%s', primeiros 3 caracteres\n", dest3, src3);
    printf("Expected output: '%s'\n", strncat(dest3_std, src3, 3));
    printf("Actual output  : '%s'\n\n", ft_strncat(dest3, src3, 3));

    char dest4[20] = "";
    char src4[] = "Hello";
    char dest4_std[20] = "";
    printf("Concatenando '%s' com '%s', primeiros 5 caracteres\n", dest4, src4);
    printf("Expected output: '%s'\n", strncat(dest4_std, src4, 5));
    printf("Actual output  : '%s'\n\n", ft_strncat(dest4, src4, 5));

    // Teste do exercício 04: ft_strstr
    char str[] = "Hello World";
    char to_find[] = "World";
    char to_find_empty[] = "";
    char to_find_not_found[] = "Planet";
    print_exercise("04", "ft_strstr");
    printf("Procurando '%s' em '%s'\n", to_find, str);
    printf("Expected output: '%s'\n", strstr(str, to_find));
    printf("Actual output  : '%s'\n\n", ft_strstr(str, to_find));

    printf("Procurando '%s' em '%s'\n", to_find_empty, str);
    printf("Expected output: '%s'\n", strstr(str, to_find_empty));
    printf("Actual output  : '%s'\n\n", ft_strstr(str, to_find_empty));

    printf("Procurando '%s' em '%s'\n", to_find_not_found, str);
    printf("Expected output: '%s'\n", strstr(str, to_find_not_found));
    printf("Actual output  : '%s'\n\n", ft_strstr(str, to_find_not_found));

    // Teste do exercício 05: ft_strlcat
    char dest5[20] = "Hello";
    char src5[] = " World";
    char dest5_std[20] = "Hello";
    print_exercise("05", "ft_strlcat");
    printf("Concatenando '%s' com '%s', tamanho total 20\n", dest5, src5);
    printf("Expected output: %lu\n", strlcat(dest5_std, src5, 20));
    printf("Actual output  : %u\n\n", ft_strlcat(dest5, src5, 20));

    char dest6[20] = "Hello";
    char src6[] = " World";
    char dest6_std[20] = "Hello";
    printf("Concatenando '%s' com '%s', tamanho total 10\n", dest6, src6);
    printf("Expected output: %lu\n", strlcat(dest6_std, src6, 10));
    printf("Actual output  : %u\n\n", ft_strlcat(dest6, src6, 10));

    return 0;
}
