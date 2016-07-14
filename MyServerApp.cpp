//
// Created by Paolo Pezzini on 6/20/16.
//

#include "MyServerApp.h"
//this class has the function to allow the program to behave as an executable. The heritage allows the main function to be called
// when the service starts

//class MyServerApp : public Poco::Util::ServerApplication
//{
//    protected:
        int main(const vector <string>& args)//The main function takes as argument a vector type container with all the arguments that have been passed by command line.
        {
            Poco::UInt16 port = 9999;                   //Port to listen
            Poco::Net::ServerSocket socket(port);       //This class provides an interface to a TCP server socket.
            //It must be put into listening state before the TCPServer is started by calling the start() method


            Poco::Net::HTTPServerParams *pParams = new Poco::Net::HTTPServerParams();
            pParams->setMaxQueued(100);                     //Sets the maximum number of queued connections.
            pParams->setMaxThreads(16);                     //Sets the maximum number of simultaneous threads available for this server
            //Poco::Net::HTTPServerParams is used to specify parameters to both the HTTPServer, as well as to HTTPRequestHandler objects


            Poco::Net::HTTPServer server(new MyRequestHandlerFactory, socket, pParams);
            // The Poco::Net::HTTPServer is a subclass of TCPServer that implements a full-featured multithreaded HTTP server
            // The server uses a ServerSocket to listen for incoming connections.
            // Instanciate HandlerFactory that will be responsible for pre-processing and routing of requests.
            // A HTTPRequestHandlerFactory must be supplied to HTTPServer. HandlerFactory inherits from HTTPRequestHandlerFactory


            server.start();                             // A new thread will be created that waits for and accepts incoming connections
            cout << endl << "Server started" << endl;

            Poco::Util::ServerApplication waitForTerminationRequest();  // wait for CTRL-C or kill

            cout << endl << "Shutting down..." << endl; //stops the server allowing all client connections to finish at their rate
            server.stop();

            return Poco::Util::ServerApplication::EXIT_OK;
        }
//};