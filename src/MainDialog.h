/*
  JackTrip: A Multimachine System for High-Quality Audio 
  Network Performance over the Internet

  Copyright (c) 2008 Chris Chafe, Juan-Pablo Caceres,
  SoundWIRE group at CCRMA.
  
  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this software and associated documentation
  files (the "Software"), to deal in the Software without
  restriction, including without limitation the rights to use,
  copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the
  Software is furnished to do so, subject to the following
  conditions:
  
  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
  OTHER DEALINGS IN THE SOFTWARE.
*/

/*
 * MainDialog.h
 */

#ifndef _MAINDIALOG_H_
#define _MAINDIALOG_H_
#include "q3ptrlist.h"
#include "qthread.h"
#include <qstring.h>
#include "qtimer.h"
#include "StreamBD.h"
	
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
