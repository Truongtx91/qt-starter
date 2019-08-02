#include <QtWidgets>
#include <QString>
#include "HelloWorld.h"

int main(int argc, char **argv ) 
{
    QApplication app(argc, argv);
    QWidget window;
    
    window.resize(320, 240);
    window.show();

    HelloWorld helloWorld;
    std::string hello = helloWorld.helloWorld();

    window.setWindowTitle(QApplication::translate("toplevel", hello.c_str()));

    return app.exec();
}