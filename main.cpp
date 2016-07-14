#include <iostream>
#include "MyServerApp.h"

using namespace std;

int main(int argc, char** argv)
{
      MyServerApp app;
      cout << "Hello, World!" << endl;
//      return 0;
      return app.run(argc, argv);               //Runs the application by calling the main() method.
}