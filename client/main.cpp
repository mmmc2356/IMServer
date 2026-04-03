#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    QWidget window;
    window.setWindowTitle("IM Client");
    window.resize(400, 300);
    
    QVBoxLayout *layout = new QVBoxLayout(&window);
    QLabel *label = new QLabel("IM Client", &window);
    label->setAlignment(Qt::AlignCenter);
    layout->addWidget(label);
    
    window.show();
    
    return app.exec();
}
