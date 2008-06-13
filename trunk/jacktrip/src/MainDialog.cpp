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
 * MainDialog.cpp
 */

#include "MainDialog.h"
#include "qapplication.h"
#include "qslider.h"
#include "qcombobox.h"
#include "qradiobutton.h"
//#include "ThreadCommEvent.h"
#include <qlabel.h>
#include <qlayout.h>


//MainDialog::MainDialog (QWidget * parent, const char *name)//:
MainDialog::MainDialog ()//:
//MainWindow (parent, name)	// generated by designer
{
  //	plot = new StripChart (plotFrame);
  //	plot->setAxisScale(0,0.0,0.1);
  //	plot->setAxisScale(1,0.0,0.1);
  //plot->resize (300, 300);


  //*********************************************
  //Coment out to remove dependency of widget
  /*
    connect ((QObject *) goButton, SIGNAL (toggled (bool)),
    SLOT (goThreads (bool)));
    goButton->setChecked (false);
	
  */
  //*********************************************
}

void
MainDialog::init(StreamBD *s)
{
  //*********************************************
  //Coment out to remove dependency of widget
  QString tmp;
  QTextStream (&tmp) << "sampleRate " << s->args->sampleRate;
  //sampleRateTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "netHarpStrings " << s->args->netHarpStrings;
  //netHarpStringsTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "audioChannels " << s->args->audioChannels;
  //audioChannelsTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "runFifo " << s->args->runFifo;
  //runFifoTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "audioDeviceID " << s->args->audioDeviceID;
  //audioDeviceIDTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "netInQInPackets " << s->args->networkInputQueueLengthInPackets;
  //netInQInPacketsTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "redundancy " << s->args->redundancy;
  //redundancyTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "audioInQInAudioBufs " << s->args->audioInputQueueLengthInAudioBuffers;
  //audioInQInAudioBufsTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "framesPerAudioBuffer " << s->args->framesPerAudioBuffer;
  //framesPerAudioBufferTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "networkPortOffset " << s->args->networkPortOffset;
  //networkPortOffsetTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "runMode " << s->args->runMode;
  //runModeTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "secondsBetweenPlucks " << s->args->secondsBetweenPlucks;
  //secondsBetweenPlucksTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "lowPassFilterCoeff " << s->args->lowPassFilterCoeff;
  //lowPassFilterCoeffTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "delayIncBtwnStrings " << s->args->delayIncrementBetweenStrings;
  //delayIncBtwnStringsTextLabel->setText (tmp); tmp = "";
  QTextStream (&tmp) << "jack " << s->args->jack;
  //jackTextLabel->setText (tmp);
  //*********************************************

  /*	audioChannels
    runFifo
    audioDeviceID
    networkInputQueueLengthInAudioBuffers
    audioInputQueueLengthInAudioBuffers
    framesPerAudioBuffer
    networkPortOffset
    runMode
    secondsBetweenPlucks
    lowPassFilterCoeff
    delayIncrementBetweenStrings
    jack
  */
  s->cmd(this);
  //		addThread (s);
  //s->start();
}

MainDialog::~MainDialog ()
{
}

//********JPC Coment out*************************************
/*
  void
  MainDialog::goThreads (bool go)
  {
  if (go)
  {
  emit startThread ();
  }
  else
  {
  emit stopThread ();
  emit joinThread ();
  }
  }


  void
  MainDialog::addThread (QObject * t)
  // append thread to mythreads list 
  {
  mythreads.append (t);
  //=============================================
  //Coment out to remove dependency of widget
  //connect (this, SIGNAL (startThread ()), t, SLOT (go ()));
  //connect (this, SIGNAL (stopThread ()), t, SLOT (stop ()));
  //connect (this, SIGNAL (joinThread ()), t, SLOT (join ()));
  //=============================================
  }


  void
  MainDialog::closeEvent (QCloseEvent * e)
  {
  while (qApp->hasPendingEvents ())
  qApp->processEvents ();
  e->accept ();
  }

  /// the Receiving widget

  void
  MainDialog::customEvent (QCustomEvent * e)
  {
  if (e->type () == QEvent::User + 117)
  {
  ThreadCommEvent *ce = (ThreadCommEvent *) e;
  //if (ce->val0 () > 0.0) plot->setV1 (ce->val0 ());
  //if (ce->val0 () > 0.0) plot->dpy();
  //if (ce->val1 () > 0.0) plot->setV2 (ce->val1 ());
  }
  }
*/
