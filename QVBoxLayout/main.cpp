#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget wgt;

    QPushButton* pcmdA = new QPushButton("A");
    QPushButton* pcmdB = new QPushButton("B");
    QPushButton* pcmdC = new QPushButton("C");

    QVBoxLayout* phbxLayout = new QVBoxLayout;
    phbxLayout->setContentsMargins(100, 100, 100, 100);
    phbxLayout->setSpacing(100);
    phbxLayout->addWidget(pcmdA);
    phbxLayout->addWidget(pcmdB);
    phbxLayout->addWidget(pcmdC);
    wgt.setLayout(phbxLayout);

    wgt.show();

    return app.exec();
}
