import re

# 定义正则表达式来匹配 DD/MM/YYYY 格式的日期
date_pattern = re.compile(r'^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/(1[0-9]{3}|2[0-9]{3})$')

# 测试日期字符串
date_str = "31/04/2021"

# 尝试匹配日期
match = date_pattern.match(date_str)
if match:
    day, month, year = match.groups()
    day = int(day)
    month = int(month)
    year = int(year)

    # 检测是否为有效日期
    is_leap_year = (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)
    valid_days = {
        1: 31, 2: 29 if is_leap_year else 28, 3: 31, 4: 30, 5: 31, 6: 30,
        7: 31, 8: 31, 9: 30, 10: 31, 11: 30, 12: 31
    }

    if 1 <= month <= 12 and 1 <= day <= valid_days[month]:
        print(f"{date_str} 是有效日期")
    else:
        print(f"{date_str} 不是有效日期")
else:
    print(f"{date_str} 不符合 DD/MM/YYYY 格式")