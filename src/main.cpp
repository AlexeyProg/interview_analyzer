#include "window.h"
#include <QtWidgets/QComboBox>
#include <QtCore/QStringList>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

// g++ -o main main.cpp -LC:\Qt\6.3.0\mingw_64\lib -IC:\Qt\6.3.0\mingw_64\include -lQt6Gui -lQt6Core -lQt6Widgets

int main(int argc, char* argv[]) 
{
    qputenv("QT_PLUGIN_PATH", "C:/Qt/6.3.0/mingw_64/plugins");
    QApplication app(argc,argv);

    QWidget *main = new QWidget();
    main->setGeometry(100,100,1000,500);
    QVBoxLayout *vlay = new QVBoxLayout;
    QGridLayout *grid = new QGridLayout(main);
    QHBoxLayout *hlay = new QHBoxLayout;

    QLabel *fl = new QLabel("Name , Surname, Specialization");
    QLabel *sl = new QLabel("Label2");
    
    hlay->addWidget(fl);
    hlay->addWidget(sl);

    QSpacerItem *spacer = new QSpacerItem(1,1,QSizePolicy::Minimum);

    vlay->addSpacerItem(spacer);


    grid->addLayout(hlay,0,0);
    grid->addLayout(vlay,0,0);
    for(int i = 0; i < 3;  i++)
    {
        QLabel *l = new QLabel("Item");
        grid->addWidget(l,1,i);
    }

    QComboBox *comb = new QComboBox();
    QStringList list;
    list << "Item 1 " << "Item 2" << "Item 3";
    comb->addItems(list);
    
    main->show();

    return app.exec();
}
