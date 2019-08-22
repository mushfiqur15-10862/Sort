#include<stdio.h>

int main()
{
int i,j,first,last,x,y,terget,a[100],b[99],n;
printf("<<welcome to our project>>\n");

 printf("Enter the number of elements ::\n ");
 scanf("%d",&n);
 printf("Enter the elements ::\n ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("choose your sorting number\n1.quick sort\n2.insertion sort\n3.merge sort\n4.Bubble Sort\n");
   printf("enter your number::\n");
    scanf("%d",&x);

    if(x ==1 )
    {
        q_sort(a,0,n-1);


    }
     if(x ==2 )
    {
        in_sort(a,n);
    }


    if(x == 3)
    {
        merge_sort(0,n);
    }
    if (x == 4)
    {
        bubble_sort(a,n);
    }



    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
        printf("\n");
        if(x==1)
        {
            printf("This sorting is quick sort");
        }
        if(x==2)
        if(x==2)
        {
            printf("This sorting is insertion sort");
        }
        if(x==3)
        {
            printf("This sorting is merge sort");
        }
        if(x==4)
        {
            printf("This sorting is bubble sort");
        }
    printf("\n");
    printf("Which number you want to search::\n");
    scanf("%d",&terget);
    linear_search(a,terget,n);


    return 0;
}


void in_sort(int a[], int n)
{
    int j, p;
    int tmp;
    for(p = 1; p < n; p++)
    {
        tmp = a[p];
        for(j = p; j > 0 && a[j-1] > tmp; j--)
            a[j] = a[j-1];
        a[j] = tmp;
    }
}

void q_sort(int a[],int first,int last)
{
int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(a[i]<=a[pivot]&&i<last)
            i++;
         while(a[j]>a[pivot])
            j--;
         if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }

      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      q_sort(a,first,j-1);
      q_sort(a,j+1,last);

   }
}
 void merge_sort(int low, int high) {
   int mid;

   if(low < high) {
      mid = (low + high) / 2;
      merge_sort(low, mid);
      merge_sort(mid+1, high);
      merging(low, mid, high);
   } else {
      return;
   }
}

void merging(int low, int mid, int high) {
   int l1, l2,a[100],b[99], i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }

   while(l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= high)
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void bubble_sort(int a[], int n)
{
  for(int j=0; j<n; ++j){
    for(int i=0; i<n-j-1; ++i){

      if (a[i]>a[i+1]){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
      }
    }
  }
}

void linear_search(int a[], int terget, int n)
{
    int i,c=0,pos;
    for(i=0; i<n; i++)
	{
		if(a[i]==terget)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		printf("Number not found..!!");
	}
	else
	{
		printf("%d found at position %d",terget, pos);
	}


}














