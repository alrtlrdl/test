#include <stdio.h>
#include <unistd.h>
int glob = 6;
int main ( void ) {
	int var ;	
	pid_t pid ;
	var = 88;
	printf ( " before vfork\n" ) ;
	if ( ( pid = vfork ( ) ) < 0) {
		
	} else if ( pid == 0) {	
		glob++;
		var++;
	printf ( " pid = %d , glob = %d , var = %d\n " , getpid ( ) ,
			glob , var ) ;
	return 0;
	}
}
