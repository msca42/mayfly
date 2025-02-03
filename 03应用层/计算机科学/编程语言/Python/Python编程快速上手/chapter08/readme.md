# 输入验证
## PyInputPlus模块
- 函数
    - inputStr() 类似input()，可以将自定义验证函数传递
    - inputNum() 确保输入数字并返回int或float
    - inputChoice() 确保输入是系统提供的选项
    - inputMenu() 提供一个带有数字或字母选项的菜单
    - inputDatetime() 确保用户输入日期和时间
    - inputYesNo() 确保用户输入yes或no
    - inputBool() 确保用户输入True或False
    - inputEmail() 确保用户输入有效Email地址
    - inputFilepath() 确保用户输入有效文件路径和文件名，并检查是否存在文件
    - inputPassword() 输入时显示*
- 关键字参数
    - min、max、greaterThan、lessThan
    - blank
    - limit、timeout、default
    - allowRegexes、blockRegexes
- 将自定义验证函数传递给inputCustom()
    - 将函数名作为参数传递给函数
## 项目: 如何让人忙几个小时
## 项目: 乘法测验
## 小结
## 习题
- 第三方库
- 因为模块名太长可以缩写
- 一个是整数，一个是浮点数
- 使用min和max参数
- 正则表达式
- 输入结束
- 默认输入hello
## 实践项目
- 三明治机
- 乘法测验