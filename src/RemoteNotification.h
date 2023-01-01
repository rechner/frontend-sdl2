//
// Created by rechner on 31/12/22.
//

#ifndef PROJECTM_SDL_REMOTENOTIFICATION_H
#define PROJECTM_SDL_REMOTENOTIFICATION_H

#include "Poco/NotificationCenter.h"
#include "Poco/Notification.h"
#include "Poco/Observer.h"
#include "Poco/NObserver.h"
#include "Poco/AutoPtr.h"
#include <iostream>
using Poco::NotificationCenter;
using Poco::Notification;
using Poco::Observer;
using Poco::NObserver;
using Poco::AutoPtr;


class BaseNotification: public Notification {};

class RemoteNotification: public BaseNotification
{
};


#endif //PROJECTM_SDL_REMOTENOTIFICATION_H
