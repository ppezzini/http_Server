//
// Created by Paolo Pezzini on 6/20/16.
//

#ifndef HTTP_SERVER_MYSERVERAPP_H
#define HTTP_SERVER_MYSERVERAPP_H

#include <iostream>
#include <string>
#include <vector>
#include <Poco/Util/Application.h>
#include <Poco/Util/ServerApplication.h>
#include <Poco/Net/ServerSocket.h>
#include <Poco/Net/HTTPServer.h>
#include "MyRequestHandlerFactory.h"

using namespace std;
// using namespace Poco::Util;
// The namespace would allow me to directly use ServerApplication everytime instead Poco::Util::ServerApplication

//Poco::Util::ServerApplication is a subclass of the Application class
//It allows for the application to run as a Windows service or as a Unix daemon without adding extra code.

class MyServerApp : public Poco::Util::ServerApplication
{
    protected:
        virtual int main(const vector <string>& args);


};

#endif //HTTP_SERVER_MYSERVERAPP_H
