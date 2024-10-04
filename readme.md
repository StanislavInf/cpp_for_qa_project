# Домашнее задание 1

## Обзор

Минимальное работоспособное решение первого домащнего задания с понятной архитектурой, юнит тестами, бенчмарками и автоматической генерацией документации.

## Архитектура
```
|--- cpp_for_qa_home_work
|----- include
|         |
|         |--- signal_processing
|                 |--- strategy_engine.hpp
|
|----- src
|         |
|         |--- signal_processing
|                 |--- strategy_engine.cpp
|
|----- tests
|         |
|         |--- signal_processing
|                 |--- strategy_engine_test.cpp
|                 |
|                 |--- data
|
|----- benchmarks
|         |
|         |--- signal_processing
|                 |--- strategy_engine_benchmark.cpp
|
|----- CMakeLists.txt

|----- README.md

```
### 