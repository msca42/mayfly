# PyInputPlus 模块
# inputStr()、inputNum()、inputChoice()
# inputMenu()、inputDatetime()、inputYesNo()
# inputBool()、inputEmail()、inputFilepath()
# inputPassword()
# =========
# 关键字参数 min最小值、max最大值、greaterThan必大于、lessThan 必小于
# 关键字参数 blank=True 允许输入空格字符
# 关键字参数 limit 放弃之前尝试接收有效输入次数
# 关键字参数 timeout 确定用户在多少秒之内必须提供有效输入
# 关键字参数 default 返回默认值，不引发异常
# 关键字参数 allowRegexes和blockRegexes 使用正则表达式确定输入内容
import pyinputplus as pyip

response = pyip.inputNum('Enter num: ', limit=2, default='N/A')
print(response)
