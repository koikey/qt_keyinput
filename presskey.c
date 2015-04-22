#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "presskey.h"

int presskey(
		int		key_type,		/* Key type */
		int		evt_type		/* Event type */
	)
{
	int		retVal = RET_PROC_SUCCESS;
	FILE		*fp;
	char		type[MAX_CMDTYPE_LEN];		/* Key type (Script arg1 string) */
	char		evt[MAX_CMDEVT_LEN];		/* Event type. (Script arg2 string) */
	char		cmd[MAX_CMDREQ_LEN];
	char		buf[MAX_CMDRES_LEN];

	/*printf( "presskey called! key_type=[%d], evt_type=[%d]\n", key_type, evt_type );*/

	/* Initialized cmd string area. */
	memset( type, 0, sizeof( type ) );
	memset( evt, 0, sizeof( evt ) );
	memset( cmd, 0, sizeof( cmd ) );
	memset( buf, 0, sizeof( buf ) );

	/* Set key type. */
	switch(key_type){
		case KEY_TYPE_UP:
			strcpy( type, "U" );
			break;
		case KEY_TYPE_DOWN:
			strcpy( type, "D" );
			break;
		case KEY_TYPE_LEFT:
			strcpy( type, "L" );
			break;
		case KEY_TYPE_RIGHT:
			strcpy( type, "R" );
			break;
		case KEY_TYPE_ENTER:
			strcpy( type, "E" );
			break;
		case KEY_TYPE_CLEAR:
			strcpy( type, "C" );
			break;
		default:
			return (RET_PROC_FAILURE);
			break;
	}

	/* Set event type. */
	switch(evt_type){
		case KEY_EVT_PRESSED:
			strcpy( evt, "on" );
			break;
		case KEY_EVT_RELEASED:
			strcpy( evt, "off" );
			break;
		default:
			return (RET_PROC_FAILURE);
			break;
	}

	sprintf( cmd, "./presskey.sh %s %s", type, evt );
	/*printf("cmd [%s]\n", cmd);*/
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
