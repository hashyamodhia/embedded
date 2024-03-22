void twoD(int number)
{
    int table[1][10];

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = (i + 1) * (j + 1);
        }
    }


    for (int j = 0; j < 10; j++)
    {
        printf("%d * %d = %d\n", number, j + 1, table[0][j]);
    }

}
