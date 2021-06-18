/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[],int len){
int c=arr[0];
for(int i=0;i<len;i++){
if(arr[i]>c)
c=arr[i];
}
return c;}

int min(int arr[],int len){
int c=arr[len-1];
for(int i=0;i<len;i++){
if(arr[i]<c)
c=arr[i];
}
return c;}

float average(int arr[], int len){
float average=0;
int sum=0;
for(int i=0;i<len;i++){
sum=sum+arr[i];
}
average=sum/len;
return average;}

int mode(int arr[], int len){
int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < len; ++i) {
      int count = 0;
      
      for (j = 0; j < len; ++j) {
         if (arr[j] == arr[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = arr[i];
      }
   }

   return maxValue;
}

int factors(int n, int a[]){int k,count,new,j=0;

while(n%2==0){

a[k]=2;
k++;
count++;
n=n/2;}



for(int j=3;j<=n/2;j+=2){

while(n%j==0){

a[k]=j;
k++;
count++;
n=n/j;

}

}
if(n>2){
a[k]=n;
count++;}
new=count;
k=0;
count=0;
return new;
}
