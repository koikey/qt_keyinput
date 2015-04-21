/****************************************************************************
****************************************************************************/

#include <QApplication>
#include <QDebug>

#include "KeyView.h"

/****************************************************************************
 * Key input apps main
 ***************************************************************************/
int main( 
		int		argc, 	/* Num of args */
		char 	**argv 	/* List of args */
	)
{
    QApplication app( argc, argv );

	KeyView keyView;
	keyView.show();

    return app.exec();
}
