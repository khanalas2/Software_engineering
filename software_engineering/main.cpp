#include <QCoreApplication>
#include <QFile>
#include <QTextStream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFile file("se.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return 0;
    QTextStream se(&file);
    QTextStream s(stdin);
    QString value = s.readLine();
    se << value <<endl;

    return a.exec();
}
