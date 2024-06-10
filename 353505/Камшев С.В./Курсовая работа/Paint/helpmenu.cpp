#include "helpmenu.h"

HelpMenu::HelpMenu() {
    textEdit = new QTextEdit(this);
    this->setFixedSize(1000, 500);
    this->setWindowTitle("Справка");
    textEdit->setGeometry(0, 20, 1000, 480);
    textEdit->setReadOnly(true);
    QFont font;
    font.setPointSize(14);
    textEdit->setFont(font);
    textEdit->setText("Для выхода из меню справки нажмите любую клавишу или функциональнкую кнопку закрытия\n"
                      "Функциональные клавиши:\n"
                      "Ctrl + N - новый файл\n"
                      "Ctrl + O - открыть файл\n"
                      "Ctrl + S - сохранение\n"
                      "Ctrl + R - подключение библиотеки\n"
                      "Ctrl + E - создание библиотеки\n"
                      "Ctrl + C - Скопировать выделенную область\n"
                      "Ctrl + V - вставить выделенную область\n"
                      "Ctrl + Z - отменяет последнее действие\n"
                      "Ctrl + Esc - выйти из меню создания dll\n"
                      "F1 - вызов справки\n"
                      "\n"
                      "Подключение dll:\n"
                      "1 Вызовите функцию подключения dll;\n"
                      "2 Выберите в файловом менеджере необходимую директорию;\n"
                      "3 Пользуйтесь подключенными фигурами.\n"
                      "\n"
                      "Режимы работы программы:\n"
                      "В левой части экрана есть текствовое поле, которое отображент режим работы программы:"
                      "1 Paint - программа находится в режиме создания изображений;\n"
                      "2 Libary -  программа находится в режиме создания изображения для библиотеки."
                      "\n"
                      "Функциональные кнопки:"
                      "1 Список выбора инструмента - позволяет выбирать инструмент для работы. Ели подключены dll, то появляется еще да списка. В первом находятся подключенные библиотеки, а во втором файлы из выбранной библиотеки.\n"
                      "2 Спискок выбора ширины пера - позволяет менять ширину пера.\n"
                      "3 Кнопка выбора цвета пера - позволяет менять цвет пера\n"
                      "4 ChechBox 'Заливка' - включает и выключает заливку внутренней области рисуемой фигуры.\n"
                      "5 Кнопка выбора цвета заливки - устанавливает цыет заливки рисуемой фигуры.\n"
                      "\n"
                      "Инструменты рисования:\n"
                      "1 Карандаш - при зажатой ЛКМ проводит кривую по траектории движения курсора.\n"
                      "2 Эллипс - при зажатой ЛКМ рисует эллипс в соответствии с движением курсора. При зажатой клавише 'Shift' рисует круг.\n"
                      "3 Стерка - при зажатой ЛКМ стриет нарисованное изображение по траектории движения курсора.\n"
                      "4 Прямоугольник - при зажатой ЛКМ рисует прямоугольник в соответствии с движением курсора. При зажатой клавише 'Shift' рисует квадрат.\n"
                      "5 Линия - при зажатой ЛКМ рисует линию в соответствии с движением курсора. При зажатой клавише 'Shift' рисует вертикальную или горизонтальную линию.\n"
                      "6 Треугольник - при зажатой ЛКМ рисует равнобедренный треугольник в соответствии с движением курсора. При зажатой клавише 'Shift' рисует равносторонний треугольник.\n"
                      "7 Полигон:\n"
                      "    1) При первом нажатии ЛКМ сохраняет точку нажатия;\n"
                      "    2) При повторном нажатии ЛКМ соединяет предыдущую точку с точкой под курсором прямой линией;\n"
                      "    3) При двойном щелчке ЛКМ соединяет начальную и конечную точки полигона.\n"
                      "8 Выделение области:\n"
                      "    1) При зажатой ЛКМ выделяет прямогульную область в соответствии с положнием курсора.\n"
                      "    2) Если нажать Ctrl + C выделеная область скопируется. После её можно будет вставить с помощью Ctrl+V.\n"
                      "    3) Иначе область можно просто двигать двигая мыш с зажатой ЛКМ.\n"
                      "9 Заливка - заливает некоторую небольшую область начиная с точки, в которой находился курсор при нажатии ЛКМ.\n"
                      "10 Файл из библиотеки:\n"
                      "    1 Поялвется после открытия хотя бы одной библиотеки;\n"
                      "    2 Содержит подсписки для выбора библиотеки и конретного изображения;\n"
                      "    3 Рисуется при зажатой ЛКМ.");
}

void HelpMenu::keyPressEvent(QKeyEvent *event)
{
    this->hide();
}
