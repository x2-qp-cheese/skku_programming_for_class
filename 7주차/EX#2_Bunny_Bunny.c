#include <stdio.h>

const char BUNNY = '@';
const char EMPTY = '.';

const int FieldSize = 12;
int current_bunny_pos[2];
char Field[12][13] = {0, };

int UP(int row)
{
    if (row==0)
    {
        row=0;
    }
    else
    {
       row-=1;
    }
    return row;
    
}
int DOWN(int row)
{
    if (row==11)
    {
        row=11;
    }
    else
    {
        row+=1;
    }
    return row;
}
int LEFT(int col)
{
    if(col==0)
    {
        col=0;
    }
    else
    {
        col-=1;
    }
    return col;
}
int RIGHT(int col)
{
    if(col==11)
    {
        col=11;
    }
    else
    {
        col+=1;
    }
    return col;
}

int main()
{
    int N;
    char command;
    scanf(" %d %d", &current_bunny_pos[0], &current_bunny_pos[1]);
    scanf(" %d", &N);
    for (int i = 0; i <FieldSize; ++i)
    {
        for (int j = 0; j <FieldSize; ++j)
            Field[i][j] = '.';       
    }
   
    for(int i=0; i<N+N; i++)
    {
        scanf("%c", &command);
        if (command=='U')
        {
            current_bunny_pos[0]=UP(current_bunny_pos[0]);
        }
        else if (command=='D')
        {
            current_bunny_pos[0]=DOWN(current_bunny_pos[0]);
        }
        else if (command=='R')
        {
            current_bunny_pos[1]=RIGHT(current_bunny_pos[1]);
        }
        else if (command=='L')
        {
            current_bunny_pos[1]=LEFT(current_bunny_pos[1]);
        }
    }
    
    Field[current_bunny_pos[0]][current_bunny_pos[1]] = '@';
    for(int i = 0; i < FieldSize; ++i)
    {
        printf("%s\n", Field[i]);
    }

    return 0;
}