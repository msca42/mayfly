# 调试
- 处理异常的方式
    - try-except 捕获异常并处理
    - raise 抛出异常
- 如果只有抛出，没有捕获，程序还是会崩溃
- 回溯: Python遇到错误，生成的错误信息
    - 通过调用traceback.format_ exc()得到字符串形式，继而可以通过文件写入的形式，记录日志
- 断言: 健全性检查，通过assert语句执行
    - assert  条件 逗号 当条件为False时显示的字符串
    - 断言的意义在与检查程序员的错误，快速失败，生产环境中通常会禁用断言

- 日志
    - logging模块
        - 禁用日志: logging.disable (logging. CRITICAL)
        - 日志级别:
            - DEBUG
            - INFO
            - WARNING
            - ERROR
            - CRITICAL
        - 日志写入文件
            - logging.basicConfig(filename = '')
```python
# 模板
import logging
logging.basicConfig(level=logging.DEBUG, format=' %(asctime)s - %(levelname)
s - %(message)s')
```
- 调试提示
    - continue: 程序正常执行
    - step in: 执行下一行代码，然后再次暂停。如果下一行代码是函数，进入函数并跳转函数第一行代码
    - step over: 执行下一行代码，然后再次暂停。如果下一行代码是函数，跳过该函数的代码，函数的代码全速执行。
    - step out: 全速执行代码行，直到从当前函数返回为止
    - stop: 立即终止程序
- 断点
    - 设置在特定的代码行，当程序执行到该行，暂停调试