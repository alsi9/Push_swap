### push_swap (insertion sort) 94%

### Основная часть

Цель проекта - отсортировать стек по возрастанию при помощи ограниченного набора инструкций, при этом необходимо использовать минимальное количество операций.

Программа принимает на вход целочисленные аргументы и выводит последовательность команд наименьшей длины, которой можно отсортировать входные данные
[подробное описание задачи тут](/push-swap.pdf).

Для сортировки в проекте разрешается использовать только 2 стека и следующий набор команд:

| Команда       | Описание  |
|:-------------:|---------------|
| sa            | swap first two elements of stack A |
| sb            | swap first two elements of stack B |
| ss            | sa and sb at the same time |
| pa            | pops the first elememt on B and puts it on top of A |
| pb            | pops the first elememt on A and puts it on top of B |
| ra            | rotates stuck A up by one|
| rb            | rotates stuck B up by one |
| rr            | rotates both A and B up by one |
| rra           | rotates stuck A down by one |
| rrb           | rotates stuck B down by one |
| rrr           | rotates both A and B down by one |

Для сортировки стека был использован алгоритм сортировки вставками (+ оптимизация). Подробное описание алгоритма в рамках данного проекта представлено по ссылке: https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a . 

Для компиляции основной части программы необходимо запустить команду \
```make all```  <br>

Пример запуска программы:
```bash
$> ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa

$> ./push_swap "1 3 2"
sa
ra
```
После запуска программа поместит все переданные числа в стек,
отсортирует их и выведет набор команд для сортировки исходного стека.