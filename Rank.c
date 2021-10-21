#include<stdio.h>
int main(){
   int n,po,k,l,a,m,t,v,w,r,e,d,x;
   printf("number of teams :");
   scanf("%d",&n);
   printf("input position: ");
   scanf("%d",&po);
   int abc[n][2];
   int i, j;
   for(i=0; i<n; i++) {
      for(j=0;j<2;j++) {
         
         scanf("%d", &abc[i][j]);
      }
   }
    printf("The given 2d array \n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
                printf(" %d", abc[i][j]);
        }
        printf("\n");
    }
    printf ("After  rearranging and ranking \n");
 
    for (j=0;j<1;++j) {
 
        for (i=0;i<n;++i) {
 
            for (k=i+1;k<n;++k) {
 
                if (abc[i][j] < abc[k][j]) {
 
                    a = abc[i][j];
 
                    abc[i][j] = abc[k][j];
 
                    abc[k][j] = a;
                    
                    l=abc[i][j+1];
                    abc[i][j+1]=abc[k][j+1];
                    abc[k][j+1]=l;
 
                }
 
            }
 
        }
 
    }
  printf(".");
  printf("\n");
    /*if t is n-1 t<n will be true*/
    for(t=0;t<n;++t){
        if(abc[t][0]==abc[t+1][0]){
            for(r=0; r<n;r++){
            
            if(abc[t][1]>abc[r][1]){
            
            w= abc[t][1];
 
                    abc[t][1]=abc[t+1][1];
 
                    abc[t+1][1] = w;
                    
                    v = abc[t][0]; 
 
                    abc[t][0] = abc[t+1][0];
 
                    abc[t+1][0] = v;     
                }}
             
        }
    }
    for (i=0;i<n;++i) {
 
        for (j=0;j<2;++j) {
 
            printf (" %d",abc[i][j]);
 
        }
 
        printf ("\n");
 
    }
    
    int count=0;
    for(x=0;x<n;++x){
        if(abc[2*(po-1)+1][0]==abc[x][0]){
        if(abc[2*(po-1)+1][1]==abc[x][1]){
            count=count+1;
        }
        
        }
        
    }
    
    printf(" no.of teams in that position =%d",count);
    
}
