## Задача 8. Применение паттернов проектирования  - Factory Method

1. **Реализовать паттерн Factory Method**  
   - Создать класс `FigureFactory`, содержащий метод `Figure* create(const std::string& type)`.  
   - В зависимости от `type`, должен создаваться `Square`, `Rectangle` или `Trapezoid`.  
   - В `main()` заменить прямое создание объектов на вызов фабрики.
