//*****************************************************************
/*
  JackTrip: A System for High-Quality Audio Network Performance
  over the Internet

  Copyright (c) 2008 Juan-Pablo Caceres, Chris Chafe.
  SoundWIRE group at CCRMA, Stanford University.
  
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
//*****************************************************************

/**
 * \file Settings.h
 * \author Juan-Pablo Caceres
 * \date July 2008
 */


#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#include "DataProtocol.h"
#include "JackAudioInterface.h"
#include "JackTrip.h"

/** \brief Class to set usage options and parse settings from input
 */
class Settings : public QThread
{
  Q_OBJECT;

public:
  Settings();
  virtual ~Settings();

  /// \brief Parses command line input
  void parseInput(int argc, char** argv);

  void startJackTrip();
  void stopJackTrip();

  bool isFinished() const
  { return mJackTrip->isFinished(); };

  /// \brief Prints usage help
  void printUsage();

  bool getLoopBack() { return mLoopBack; };

  void Settings::waitJackTrip();

signals:
  void signalexitQCoreApp();

public slots:

  void testPrint(QString exp_message);

private:
  JackTrip* mJackTrip; ///< JackTrip class
  JackTrip::jacktripModeT mJackTripMode; ///< JackTrip::jacktripModeT
  JackTrip::dataProtocolT mDataProtocol; ///< Data Protocol
  int mNumChans; ///< Number of Channels (inputs = outputs)
  int mBufferQueueLength; ///< Audio Buffer from network queue length
  JackAudioInterface::audioBitResolutionT mAudioBitResolution;
  QString mPeerAddress; ///< Peer Address to use in jacktripModeT::CLIENT Mode
  int mPortNum; ///< Port Number
  char* mClientName;
  bool mUnderrrunZero; ///< Use Underrun to Zero mode

  bool mLoopBack; ///< Loop-back mode
  bool mJamLink; ///< JamLink mode
  bool mEmptyHeader; ///< EmptyHeader mode
  bool mJackTripServer; ///< JackTrip Server mode
  unsigned int mRedundancy; ///< Redundancy factor for data in the network
};

#endif
