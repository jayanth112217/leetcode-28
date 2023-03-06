int strStr(char * haystack, char * needle){
  int i=0;
  int k=0;
  while(haystack[i]!='\0' && strlen(needle)>k){
      if(haystack[i]==needle[k]){
          int flag=0;
          int j=i;
        for(int k=0;k<strlen(needle);k++){
           if(haystack[j]!=needle[k]){
               flag=1;
               break;
           }
           printf("%c ",haystack[j]);
         j++;
        }
        if(flag==0){
            return i;
        }
      }
      i++;
  }
  return -1;
}