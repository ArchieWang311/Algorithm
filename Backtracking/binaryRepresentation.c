/* Copyright 2019 <Jie-Chi Wang (archiewang311@gmail.com)> */
#include <stdio.h>

static void permutation(int * v, size_t i, size_t size){
  if(i == size){
    for(size_t i = 0; i < size; i++)
      printf("%d ", v[i]);
    puts("");
    return;
  }
  for(v[i] = 0; v[i] <= 1; v[i]++)
    permutation(v, i + 1, size);
}

int main(){
  int array[3] = {0};
  permutation(array, 0, sizeof(array)/sizeof(int));
  return 0;
}