/****************************************************************************
 KeyView.cpp
****************************************************************************/
#include <QDebug>
#include <QGridLayout>

#include "KeyView.h"

// Class : KeyView Class
// Input key view and handling the key action.
// Å†Å°Å°Å†
// Å°Å°Å°Å°
// Å†Å°Å°Å†
// Å°Å°Å°Å°

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
	connect( m_UpBtn,		SIGNAL( pressed() ), this, SLOT( upPressed() ) );
	connect( m_DownBtn,		SIGNAL( pressed() ), this, SLOT( downPressed() ) );
	connect( m_LeftBtn,		SIGNAL( pressed() ), this, SLOT( leftPressed() ) );
	connect( m_RightBtn,	SIGNAL( pressed() ), this, SLOT( rightPressed() ) );
	connect( m_EnterBtn,	SIGNAL( pressed() ), this, SLOT( enterPressed() ) );
	connect( m_ClearBtn,	SIGNAL( pressed() ), this, SLOT( clearPressed() ) );

	// Regist key clicked event.
	connect( m_UpBtn,		SIGNAL( released() ), this, SLOT( upReleased() ) );
	connect( m_DownBtn,		SIGNAL( released() ), this, SLOT( downReleased() ) );
	connect( m_LeftBtn,		SIGNAL( released() ), this, SLOT( leftReleased() ) );
	connect( m_RightBtn,	SIGNAL( released() ), this, SLOT( rightReleased() ) );
	connect( m_EnterBtn,	SIGNAL( released() ), this, SLOT( enterReleased() ) );
	connect( m_ClearBtn,	SIGNAL( released() ), this, SLOT( clearReleased() ) );

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
//**********************
// Press event handler
//**********************
void KeyView::upPressed()
{
	qDebug() << "Pressed [UP] !" << endl;
	presskey( KEY_TYPE_UP , KEY_EVT_PRESSED );
}

void KeyView::downPressed() 
{
	qDebug() << "Pressed [DOWN] !" << endl;
	presskey( KEY_TYPE_DOWN , KEY_EVT_PRESSED );
}

void KeyView::leftPressed() 
{
	qDebug() << "Pressed [LEFT] !" << endl;
	presskey( KEY_TYPE_LEFT , KEY_EVT_PRESSED );
}

void KeyView::rightPressed()
{
	qDebug() << "Pressed [RIGHT] !" << endl;
	presskey( KEY_TYPE_RIGHT , KEY_EVT_PRESSED );
}

void KeyView::enterPressed()
{
	qDebug() << "Pressed [ENT] !" << endl;
	presskey( KEY_TYPE_ENTER , KEY_EVT_PRESSED );
}

void KeyView::clearPressed()
{
	qDebug() << "Pressed [CLR] !" << endl;
	presskey( KEY_TYPE_CLEAR , KEY_EVT_PRESSED );
}

//**********************
// Release event handler
//**********************
void KeyView::upReleased()
{
	qDebug() << "Released [UP] !" << endl;
	presskey( KEY_TYPE_UP , KEY_EVT_RELEASED );
}

void KeyView::downReleased() 
{
	qDebug() << "Released [DOWN] !" << endl;
	presskey( KEY_TYPE_DOWN , KEY_EVT_RELEASED );
}

void KeyView::leftReleased() 
{
	qDebug() << "Released [LEFT] !" << endl;
	presskey( KEY_TYPE_LEFT , KEY_EVT_RELEASED );
}

void KeyView::rightReleased()
{
	qDebug() << "Released [RIGHT] !" << endl;
	presskey( KEY_TYPE_RIGHT , KEY_EVT_RELEASED );
}

void KeyView::enterReleased()
{
	qDebug() << "Released [ENT] !" << endl;
	presskey( KEY_TYPE_ENTER , KEY_EVT_RELEASED );
}

void KeyView::clearReleased()
{
	qDebug() << "Released [CLR] !" << endl;
	presskey( KEY_TYPE_CLEAR , KEY_EVT_RELEASED );
}

