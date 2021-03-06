#define DISPID_TEST_METHOD (1025314)
#define DISPID_TEST_METHOD2 (1025316)

#pragma once

// ActiveXCPP2Ctrl.h: объявление класса элемента управления ActiveX CActiveXCPP2Ctrl.


// CActiveXCPP2Ctrl: реализацию см. в ActiveXCPP2Ctrl.cpp.

class CActiveXCPP2Ctrl : public COleControl
{
	DECLARE_DYNCREATE(CActiveXCPP2Ctrl)

// Конструктор
public:
	CActiveXCPP2Ctrl();

// Переопределение
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Реализация
protected:
	~CActiveXCPP2Ctrl();

	DECLARE_OLECREATE_EX(CActiveXCPP2Ctrl)    // Фабрика класса и guid
	DECLARE_OLETYPELIB(CActiveXCPP2Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CActiveXCPP2Ctrl)     // ИД страницы свойств
	DECLARE_OLECTLTYPE(CActiveXCPP2Ctrl)		// Введите имя и промежуточное состояние

// Схемы сообщений
	DECLARE_MESSAGE_MAP()

// Схемы подготовки к отправке
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();
	afx_msg LONG TestMyMethod(LONG param1, LONG param2, BSTR param3);//МНОЙ
	afx_msg float TestMyMethod2(FLOAT param1);//МНОЙ

// Схемы событий
	DECLARE_EVENT_MAP()

// Подготовка к отправке и ИД событий

public:          //Эти строки может создавать мастер ClassView
	enum {
		eventidEventHandlerTest = 1L
	};


protected:

	void EventHandlerTest(LPCTSTR name, LPCTSTR surname, LONG age)
	{
		FireEvent(eventidEventHandlerTest, EVENT_PARAM(VTS_BSTR VTS_BSTR VTS_I4), name, surname, age);
	}                      //ДОБАВЛЕНО МНОЙ

};


