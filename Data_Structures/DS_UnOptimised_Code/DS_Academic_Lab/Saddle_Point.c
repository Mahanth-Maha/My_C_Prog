#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,mat[50][50];
    printf("finding the Saddle point of 2D Matrix \n");
    printf("\n\nEnter the m value in m*n matrix : ");
    scanf(" %d",&m);
    printf("Enter the n value in m*n matrix : ");
    scanf(" %d",&n);

    for(i=0;i<m;i++)
    {
        printf("Enter the row %d elements %d elements\n",i+1,n);
        for(j=0;j<n;j++)
        {
            scanf(" %d",&mat[i][j]);
        }
    }

    printf("Entered %d x %d matrix is \n\n",m,n);

    for(i=0;i<m;i++)
    {
        printf("\t|");
        for(j=0;j<n;j++)
        {
            printf(" %d |",mat[i][j]);
        }
        printf("\n");
    }

    int k,m_val,f=1,arr1[m],arr2[n],q=0,sp[50];

    for(k=1;k<=2;k++)
    {
        //chacking for min or max in Coloumn
        for(i=0;i<m;i++)
        {
            m_val = mat[i][0];
            for(j=0;j<n;j++)
            {
                if(f*m_val < f*mat[i][j])
                {
                    m_val=mat[i][j];
                }
            }
            arr1[i] = m_val;
            printf("k = %d , arr1 maximas %d = %d \n",k,i,arr1[i]);
        }
        //chacking for min or max in Row
        for(j=0;j<n;j++)
        {
            m_val = mat[i][0];
            for(i=0;i<m;i++)
            {
                m_val = mat[0][j];
                if(f*m_val > f*mat[i][j])
                {
                    m_val=mat[i][j];
                }
            }
            arr2[j]=m_val;
            printf("k = %d , arr2 maximas %d = %d \n",k,j,arr2[j]);
        }
        f=-1;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d == %d \n",arr1[i],arr2[j]);
                if(arr1[i] == arr2[j])
                {
                    sp[q] = arr1[i];
                    sp[q] = arr2[j];
                    q++;
                }
            }
        }

    }

    printf("\nThe Saddle points are :\n");
    for(i=0;i<q;i++)
    {
        printf(" %d\t",sp[i]);
    }

    return 0;
}
