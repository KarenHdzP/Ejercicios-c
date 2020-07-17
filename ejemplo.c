#include <stdio.h>
int output[];
int main(){
int array[]={10,3,2,5,7,8}

}
int *sort (int input []){
int i=0, last=0;
while(i<input.length()){
  int min=1000, n=0;
  while(n<input.length()){
  	 if(min>input[n]&&input[n]>last && input[n]%5!=0){

   	 	min=input[n];
  }
  n++;
}
last=min;
output[i]=min;
i++;
}
	return output;
	}