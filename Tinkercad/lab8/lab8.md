# Лабораторная работа 8
## Название работы: Двумерный статический массив

### Цель работы
Разработать программу управления RGB-светодиодом с использованием двумерного статического массива, где:
1. Для объявления пинов красного, зелёного и синего цветов используется перечисляемый тип enum;
2. Создаётся двумерный массив с несколькими вложенными массивами, где в первом вложенном массиве под индексом 0 располагаются подключенные пины, а в остальных располагаются байтовые значения для передачи их на RGB светодиод.
3. Необходимо создать функции:
   - в которые в качестве аргумента передаётся пин соответствующий цвету RGB-светодиода;
   - разработать две функции по плавному включению и выключению светодиода.
   - параметры плавного включения в байт должны браться из индексов массива, отличных от 0.
4. Вызвать разработанные функции в void loop.

![image](https://github.com/belvasevg/Programming-of-microcontrollers-SUAI-/assets/62217397/fd830bf7-9bd7-4c95-8e8b-3cb9c9f4db70)

### Пример выполнения лабораторной работы
[Пример](https://www.tinkercad.com/things/1WSYlp2k42C-laboratornaya-8-dvumernyj-massiv/editel?sharecode=Tez2qLyhyWZXFkvhuBVUfjLnfE9ksH-hFYVsuEA2CM4/ "ссылка на платформу Tinkercad")
