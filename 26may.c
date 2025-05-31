int maind(void)
{
  int i,n;
  char *buffer;
  
  printf("Teclea la longitud de la cadena");
  scanf("%d", &i);
  
  buffer =(char*) malloc((i+1))*sizeof((char));
  if(buffer==NULL) exit (1);
  
  for (n=0;n<i;n++)
       buffer[n]=rand()%26+'a';
       
  buffer 
}