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

	// key pressed event handler.
	void upPressed();
	void downPressed();
	void leftPressed();
	void rightPressed();
	void enterPressed();
	void clearPressed();

	// Key released event handler.
	void upReleased();
	void downReleased();
	void leftReleased();
	void rightReleased();
	void enterReleased();
	void clearReleased();

};

#endif /* KEY_VIEW_HEADER */
