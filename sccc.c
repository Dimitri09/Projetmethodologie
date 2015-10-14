#include<unistd.h>
#include<sys/types.h>
#include <stdio.h>

#define SP 2 /*changerpour1,2,3....*/
#define NB_FILS 2

int main(void){
	char mesg[]="ABCDEFGHIJ";
	char *ptr;
	int pid;
	pid_t n [NB_FILS];
int i;
ptr = mesg;
for(i=0 ; i<NB_FILS ; i++){
n[i] = fork() ;
if (n[i]== 0) break ;
}

while( *ptr != '\0'){
	/*onparcourtmesg[]caractèreparcaractère*/
	pid = getpid();
	
	fprintf(stderr," %d:",pid);
	write(STDOUT_FILENO,ptr,1);
	printf("\n");
	ptr++ ;

	if( n == 0 ) sleep(1);
	else sleep(SP);
}

return 0;

}
