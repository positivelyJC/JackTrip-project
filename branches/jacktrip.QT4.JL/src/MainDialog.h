//
// File: MainDialog.h
// Created by: cc <cc@cmn42.Stanford.EDU>
// Created on: Sun Mar  2 10:20:41 2003
//

#ifndef _MAINDIALOG_H_
#define _MAINDIALOG_H_
//#include "../src/ui/MainWindow.h"
#include "q3ptrlist.h"
#include "qthread.h"
//#include "qstring.h"
#include <qstring.h>
#include "qtimer.h"
#include "StreamBD.h"
//#include "StripChart.h"
	
class MainDialog//:public MainWindow
{
  //Q_OBJECT public://********JPC Coment out*************************************
public:
  //	  MainDialog (QWidget * parent = 0, const char *name = 0);
  MainDialog ();
	  virtual ~ MainDialog ();
	  void init(StreamBD *s);
  //StripChart *plot;
  //virtual void closeEvent (QCloseEvent * e);//********JPC Coment out*************************************
  //void customEvent (QCustomEvent * e);//********JPC Coment out*************************************

  //********JPC Coment out*************************************
  /*
	void addThread (QObject * t);
	  QPtrList < QObject > mythreads;
	public slots:void goThreads (bool);
	  signals:void startThread ();
	void stopThread ();
	void joinThread ();
  */
};


#endif //_MAINDIALOG_H_