#include "presskey.h"

int presskey(
		int		key_type,		/* Key type */
		int		evt_type		/* Event type */
	)
{
	int		retVal = RET_PROC_SUCCESS;
	FILE	*fp;
	char	cmd[MAX_CMDREQ_LEN];
	char	buf[MAX_CMDRES_LEN];

	sprintf( cmd, "./press.sh %04X %04X", key_type, evt_type );
	if( ( fp = popen( cmd, "r" ) ) == NULL ){
		printf( "%s", cmd);
		retVal = RET_PROC_FAILURE;
	}

	while( fgets( buf, MAX_CMDRES_LEN, fp ) != NULL ){
		(void)fputs(buf, stdout);
	}
	(void)pclose(fp);

	return (retVal);
}
