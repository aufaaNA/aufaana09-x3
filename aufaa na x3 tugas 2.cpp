#include   <stdlib.h>
#include   <iostream>

using  namespace  stdi
vold  insertion_Sort (int  array[],  int  length);

int  main()
(
       int  i,  n;
       cout <<  "Masukan  jumlah elemen yg  diurutkan:  ";
       cin >>  n;
       int  A[n];
       for(i  =  0;  i  < n; i++)
       (
	        cout<<  "Masukan  bilangan  ke-" <<  i+l  <<  " i ";
	         cin  >>  A[i];
	   )
	   Insertion_Sort(A,  n);
	    system("Pause") 
	  return   0;
)

void  insertion_Sort(int  array[],  int  length)
(
      int i,  j,  key;
      for (i  =  l;  i  <  length;  i++)
      (
	         j =  i;
	         while  (j  >  O  && array[j - l]  > array[j])
	         (
	                 key  +  array[j];
	                 array[j]  =  array[j - l];
					 array[j  -  l]  = key;
					 j--;
			 )
	  )
	  cout  <<  "Hasil  pengururtan:  ";
	  for   (j = O;  j  < length;   j++)
	  (
	          cout <<"  "<<  array[j];
	  )
	  cout  <<   endl:
)
	         

