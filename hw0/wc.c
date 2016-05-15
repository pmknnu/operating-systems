#include<stdio.h>

int main(int argc, char *argv[]) {
    if (argc<2){
      //Checking for file argument given
    printf("Provide file\n");
  }
    else{
    printf("Reading from %s\n", argv[1]);
  }
  printf("%p\n",main );
  FILE *fp;

  fp=fopen(argv[1],"r");

  if(fp==NULL){
    fprintf(stderr, "Can't open file: %s\n",argv[1] );
    exit(1);
  }

  int count=0,lines=0;
  char k;
  while(1){
    k=getc(fp);
    if(k=='\n'){     //checking new line
      lines+=1;
      count+=1;
    }
    else if(feof(fp)){   //check for End Of File
      break;
    }
    else if(k!='\r'){    //check for /r tab
      count+=1;
    }
    else{
      count+=1;
    }

  }
  printf("Count: %d\n",count );
  printf("Lines:%d\n",lines);

    return 0;
}
