/****************************************************************************
 KeyView.cpp
****************************************************************************/
#include <QDebug>
#include <QGridLayout>

#include "KeyView.h"

// Class : KeyView Class
// Input key view and handling the key action.
// Å†Å° Å°Å†
// Å°Å° Å°Å°
// Å†Å° Å°Å†
// Å°Å° Å°Å°


KeyView::KeyView( void ) 
{
	bool ret = true;
	qDebug() << "Constructor is called!" << endl;

	ret = initLayout();
	if( false == ret ){
		qDebug() << "initLayout is failed !" << endl;
		return;
	}
	ret = initBinfile();
	if( false == ret ){
		qDebug() << "initBinfile is failed !" << endl;
		return;
	}
}

bool KeyView::initLayout(void)
{
	bool ret = true;
	
	qDebug() << "Initialized key view layout." << endl;

	QGridLayout	*mainLayout = new QGridLayout( this );
	m_UpBtn		= new QPushButton( "[UP]", this );
	m_DownBtn	= new QPushButton( "[<L]", this );
	m_LeftBtn	= new QPushButton( "[R>]", this );
	m_RightBtn	= new QPushButton( "[DOWN]", this );
	QHBoxLayout	*lowerLayout = new QHBoxLayout( this );
	m_EnterBtn	= new QPushButton( "ENT", this );
	m_ClearBtn	= new QPushButton( "CLR", this );

	// Layout keys.
									//	row		column	height	width
	mainLayout->addWidget( m_UpBtn,		0, 		1, 		1, 		2 );
	mainLayout->addWidget( m_DownBtn,	1, 		0, 		1, 		2 );
	mainLayout->addWidget( m_LeftBtn,	1, 		2, 		1, 		2 );
	mainLayout->addWidget( m_RightBtn,	2, 		1, 		1, 		2 );

	lowerLayout->addStretch();
	lowerLayout->addWidget( m_EnterBtn );
	lowerLayout->addWidget( m_ClearBtn );
	mainLayout->addLayout( lowerLayout, 3,		0, 		1, 		4 );

	// Regist key clicked event.
	connect( m_UpBtn,		SIGNAL( clicked( bool ) ), this, SLOT( upClicked( bool ) ) );
	connect( m_DownBtn,		SIGNAL( clicked( bool ) ), this, SLOT( downClicked( bool ) ) );
	connect( m_LeftBtn,		SIGNAL( clicked( bool ) ), this, SLOT( leftClicked( bool ) ) );
	connect( m_RightBtn,	SIGNAL( clicked( bool ) ), this, SLOT( rightClicked( bool ) ) );
	connect( m_EnterBtn,	SIGNAL( clicked( bool ) ), this, SLOT( enterClicked( bool ) ) );
	connect( m_ClearBtn,	SIGNAL( clicked( bool ) ), this, SLOT( clearClicked( bool ) ) );

	// Set layout to dialog( e.q KeyView ).
	setLayout( mainLayout );

	return ret;
}

bool KeyView::initBinfile(void)
{
	bool ret = true;
	
	qDebug() << "Binary file is opend." << endl;

	return ret;
}
// Key clicked event.
void KeyView::upClicked( bool )
{
	qDebug() << "Clieked [UP] !" << endl;
}

// Key clicked event.
void KeyView::downClicked( bool ) 
{
	qDebug() << "Clieked [DOWN] !" << endl;
}

// Key clicked event.
void KeyView::leftClicked( bool ) 
{
	qDebug() << "Clieked [LEFT] !" << endl;
}

// Key clicked event.
void KeyView::rightClicked( bool )
{
	qDebug() << "Clieked [RIGHT] !" << endl;
}

// Key clicked event.
void KeyView::enterClicked( bool )
{
	qDebug() << "Clieked [ENT] !" << endl;
}

// Key clicked event.
void KeyView::clearClicked( bool )
{
	qDebug() << "Clieked [CLR] !" << endl;
}
