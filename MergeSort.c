#include<stdio.h>
//Iterative 
void Msort(int a[],int n){
    int size=1,l1,l2,u1,u2,k,aux[20],i,j;
    while(size<n){
        l1=0;k=0;
        while(l1+size<n){
            l2=l1+size;
            u1=l2-1;
            u2=(u1+size)<n?u1+size:n-1;
            for(i=l1,j=l2;i<=u1&&j<=u2;k++){
                if(a[i]<a[j])
                    aux[k]=a[i++];
                else if(a[i]>a[j])
                    aux[k]=a[j++];
                else{ 
                    aux[k]=a[i++];j++;
                }
            }
            for(;i<=u1;k++)
                aux[k]=a[i++];
            for(;j<=u2;k++)
                aux[k]=a[j++];
            l1=u2+1;

        }
        for(i=l1;i<n;i++,k++)
            aux[k]=a[i];
        for(i=0;i<n;i++)
            a[i]=aux[i];
        size*=2;
    }
}

void merge(int a[],int lb ,int mid, int ub){
    int l1,l2,u1,u2,i,j,aux[20],k=lb;
    l1=lb;u1=mid;l2=mid+1;u2=ub;
    for(i=l1,j=l2;i<=u1&&j<=u2;k++){
        if(a[i]<a[j])
            aux[k]=a[i++];
        else if(a[i]>a[j])
            aux[k]=a[j++];
        else{ 
            aux[k]=a[i++];j++;
        }
        
    }
    for(;i<=u1;k++)
            aux[k]=a[i++];
    for(;j<=u2;k++)
        aux[k]=a[j++];
    for(i=lb;i<=ub;i++)
        a[i]=aux[i];
}
//Recursive
void msort(int a[],int lb,int ub){
    int mid;
    if(lb!=ub){
        mid=(lb+ub)/2;
        msort(a,lb,mid);
        msort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main(){
    int a[20],n,i;
    printf("\n RECURSIVE APPROACH....");
    printf("\n Enter the no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    msort(a,0,n-1);
    printf("\n Array after sorting:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n ITERATIVE APPROACH....");
    printf("\n Enter the no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Msort(a,n);
    printf("\n Array after sorting:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}