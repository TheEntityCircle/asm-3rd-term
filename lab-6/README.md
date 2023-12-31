# Лабораторная 6: Изнанка С++


### Вступительное слово

Мы наконец добрались до основной цели этого курса. Вы уже немного освоились с ассемблером, в целом запомнили терминологию и научились разбирать то, что имел в виду компилятор. В этой лабораторной вам нужно посмотреть, как выглядят базовые механики C++ с изнанки.

Отдельной теоретической вводной по этой лабе нет. Как разбирать листинг и пользоваться основными инструментами (консоль, g++, objdump) вы уже знаете, основы плюсов либо и так помните с прошлого семестра, либо вспомните по ходу дела.

### Отчётность и формальные моменты

Формат сдачи -- отчет текстом с картинками в **свободной** форме. Необязательно **дотошно** расписывать выполнение всех заданий, как в первых лабах.

## Задания

### Нулевой раздел. Базовый функционал.

1. Как выглядят методы и поля классов? Постарайтесь разобраться в том, как формируются их названия. Можете сразу аккуратно записывать и структурировать ваши выводы: это упростит вам выполнение следующих заданий. Совет: называйте ваши методы не a, b, c, а длинно и странно -- так вы быстрее будете находить их в листинге.
2. Как вызывается метод для конкретного объекта? Как этот метод, узнает, к полям какого объекта ему надо обращаться? Он ведь выглядит как обычная функция.
3. Что же такое this?
4. Конструкторы/деструкторы. Где и когда они вызываются для глобальных переменных-экземпляров класса, где для локальных (в функциях, циклах, условиях), а где для созданных в куче?

### "Хочу слышать три главных слова..."

5. **Инкапсуляция**. Как будут отличаться приватные и пабликовые поля и методы?
6. **Наследование**. Проанализируйте, как вызываются конструкторы и инициализируются поля при наследовании. Например, возьмите три класса (Animal, Predator, Cat), добавьте всем по 2-3 поля и подробно рассмотрите, как происходит инициализация. Данные для инициализации тоже берите странные, чтобы быстрее находить их глазами в листинге.
7. **Полиморфизм**. Вы уже даже без дополнительного кода можете ответить, откуда берется полиморфизм в С++. 

### Grand finale! 

8. Как выглядят статиковые поля (static)? Почему статиковые методы не могут обращаться к нестатиковым полям (в терминах ассемблера)?
9. Как выглядит листинг перекрытого оператора (например, operator+) и его вызова?
10. Котогенерация шаблонов. Как работает шаблонизация функций и классов?
11. Rvalue-ссылки. Если не смотрели их в третьей лабе, посмотрите сейчас.
12. А еще посмотрите enum.
