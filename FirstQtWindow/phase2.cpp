#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create the main window
    QWidget window;
    window.setWindowTitle("My First Qt Window");
    window.resize(400, 250);

    // Create a label and button
    QLabel *label = new QLabel("Hello, Qt!");
    QPushButton *button = new QPushButton("Click Me");

    // Arrange widgets vertically
    QVBoxLayout *layout = new QVBoxLayout(&window);
    layout->addWidget(label);
    layout->addWidget(button);

    // Connect the button signal to an action
    QObject::connect(button, &QPushButton::clicked,
                     [label]() {
                         label->setText("Button Clicked!");
                     });

    // Display the window
    window.show();

    return app.exec();
 }