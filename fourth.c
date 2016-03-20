#include <stdlib.h>
#include <stdio.h>

int **matrix1;
void print(int row, int col)
{
int i;
int j;
for(i =0; i<row; i++)
	{
	for(j=0; j< col; j++)
	{
	printf("%d\t", matrix1[i][j]);
	}


	printf("\n");
	}
}
int main(int argc, char** argv)

{

        FILE *fp;

        char data[1024];

        fp = fopen(argv[1], "r");

        int row;
        int col;
	int i;
	int row1;	
	int col1;
	int j;
	int bust;
        if (fp == NULL)
	
        {

                printf("\n");

                return 0;

        } else {
              
	//do {
	fscanf(fp,"%s",data);
	row=atoi(data);
	//	printf("%d\n",row);
	fscanf(fp,"%s", data);
	col=atoi(data);
//	printf("%d\n", col);
	matrix1 =(int**) malloc(row*sizeof(int*));
	if( row == 0 || col ==0)
	{	printf("error\n");
	return 0;
} 
	for(i=0; i<row; i++)
	{
	matrix1[i] = (int*)malloc(col*sizeof(int));

 	}
	for( row1=0; row1<row; row1++)
	{
		for( col1 =0; col1<col; col1++)
		{
			
		fscanf(fp,"%s",data);
		bust = atoi(data);
		//printf("%s", data);	
		j =atoi(data);
		matrix1[row1][col1]=j; 

		}

	}	
	for (row1=0; row1<row; row1++)
	{
		for( col1 =0; col1<col; col1++)
		{
		fscanf(fp,"%s", data);
	
		bust = atoi(data);
	//	printf("%d\t", matrix1[row1][col1]);
		matrix1[row1][col1] = matrix1[row1][col1] +bust;
		//printf("%d\n", matrix1[row1][col1]);
		}
//	printf("\n");
	} 	
	
	print(row,col);			
       // }while( i !=EOF);          
        fclose(fp);
        
}

return 0;
}

