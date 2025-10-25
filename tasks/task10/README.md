## Задача 10. Разработка UML-диаграммы классов

### Требование

Разработать **UML-диаграмму классов** для системы фигур, включающую:

1. **Базовый класс `Figure`**
   - Поля:
     - `Point* parr` — массив точек
     - `int size` — максимальное количество точек
     - `int count` — текущее количество точек
   - Методы:
     - `virtual void print()`
     - `virtual double getArea()`
     - `void addPoint(const Point&)`
     - Методы для Observer:
       - `addObserver(IFigureObserver*)`
       - `removeObserver(IFigureObserver*)`
       - `notifyObservers()`

2. **Класс `Point`**
   - Поля:
     - `int x, y`
   - Методы:
     - Конструкторы (по умолчанию, с параметрами, копирования, перемещения)
     - Операторы присваивания
     - `void print()`

3. **Классы-наследники `Square`, `Rectangle`, `Trapezoid`**
   - Наследуются от `Figure`
   - Переопределяют:
     - `print()`
     - `getArea()`
     - `clone()`

4. **Паттерны**
   - **Observer**:
     - Интерфейс `IFigureObserver` с методом `onFigureChanged(Figure*)`
     - Конкретные наблюдатели: `ConsoleLogger`, `AreaTracker`
   - **Factory**:
     - `FigureFactory::create(std::string type)`

5. **Связи**
   - Наследование: `Square`, `Rectangle`, `Trapezoid` → `Figure`
   - Ассоциации: `Figure` содержит список `IFigureObserver*`
   - Композиция/агрегация: `Figure` содержит массив `Point* parr`

### Рекомендации по построению UML

- Использовать стандартные нотации:
  - `+` — public
  - `-` — private
  - `#` — protected
- Показать методы и поля с типами.
- Отметить виртуальные методы (`{abstract}` или `{virtual}`) для `print()` и `getArea()`.
- Для паттернов можно добавить отдельный блок или аннотацию возле классов.

---