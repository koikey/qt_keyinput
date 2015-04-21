/****************************************************************************
****************************************************************************/
#ifndef KEY_VIEW_HEADER
#define KEY_VIEW_HEADER

#include <QDialog>
#include <QPushButton>
#include <QDebug>

// Class : KeyView Class
// Input key view and handling the key action.
class KeyView : public QDialog
{
    Q_OBJECT

public:
    KeyView( void );
	
private:
	QPushButton *m_UpBtn;		// [UP] Button
	QPushButton *m_DownBtn;		// [DOWN] Button
	QPushButton *m_LeftBtn;		// [Å©] Button
	QPushButton *m_RightBtn;	// [Å®] Button

	QPushButton *m_EnterBtn;	// [ENT] Button
	QPushButton *m_ClearBtn;	// [CLR] Button

	// Initalized keyview layout.
	bool initLayout(void);
	bool initBinfile(void);

public slots:
	// Up key event handler.
	void upClicked( bool );
	// Down key event handler.
	void downClicked( bool );
	// Left key event handler.
	void leftClicked( bool );
	// Right key event handler.
	void rightClicked( bool );
	// Enter key event handler.
	void enterClicked( bool );
	// Clear key event handler.
	void clearClicked( bool );
};

#endif /* KEY_VIEW_HEADER */
