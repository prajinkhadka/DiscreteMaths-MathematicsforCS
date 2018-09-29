//Program to represent graph using adjacency matrix
#include<stdio.h>
int main()
{
int option;
do
{
printf("\n A Program ro represent a Graph by using an \n");
printf("\n Adjacency Matrix Method \n");
printf("\n 1. Directed Graph \n");
printf("\n 2. Undireceted Graph \n");
printf("\n 3. Exit \n");
printf("\n\n Choose any option:  \n");
scanf("%d",&option);
switch(option)
    {
        case 1: dir_graph();
                break;
        case 2: undir_graph();
                break;
        case 3: exit(0);

    }
}
 while(1);
}

int dir_graph()
{
int adj_mat[50][50];
int n, in_deg, out_deg, i,j;
 printf("\n How many vertices ? ");
 scanf("%d",&n);
 read_graph(adj_mat,n);
 printf("\n Vertices \t In_Degree \t Out_Degree \t Total Degree ");
 for(i=1;i<=n;i++)
    {
        in_deg = out_deg =0;
        for(j=1;j<=n;j++)
            {
                if(adj_mat[j][i]==1)
                in_deg++;
            }

for(j=1;j<=n;j++)
{
    if(adj_mat[i][j]==1)
            out_deg++;
    printf("\n\n  %5d \t\t\t%d\t\t%d\t\t%d\n\n",i,in_deg,out_deg,in_deg+out_deg);
}//for
}
}//main


int undir_graph()
    {
        int adj_mat[50][50];
        int deg,i,n,j;
        printf("\n How many vertices ? :");
        scanf("%d",&n);
        read_graph(adj_mat,n);
        printf("\n Vertex \t Degree ");
        for(i=0;i<=n;i++)
            {
                deg=0;
                for(j=1;j<=n;j++)
                        if(adj_mat[i][j]==1)
                        deg++;
                printf("\n\n %5d \t\t %d \n\n",i,deg);

            }//for

    }

int read_graph(int adj_mat[50][50],int n)
    {
        int i,j;
        char reply;
        for(i=1;i<=n;i++)
        {
        for(j=1;j<=n;j++)
        {
            if(i==j)
                {
                    adj_mat[i][j]=0;
                    continue;
                }
            printf("Vertices %d & %d are Adjacent ? (Y/N): ",i,j);
            fflush(stdin);
            scanf("%c",&reply);
            if(reply == 'y' || reply == 'Y')
            adj_mat[i][j]=1;
            else
            adj_mat[i][j]=0;
        }
        }

    }

