#include <unistd.h>

/**
 * print_chessboard - prints an 8x8 chessboard
 */
void print_chessboard(void)
{
    int i, j;
    char black_square = '#';
    char white_square = ' ';

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
                write(1, &black_square, 1);
            else
                write(1, &white_square, 1);
        }
        write(1, "\n", 1);
    }
}

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_chessboard();
    return (0);
}

