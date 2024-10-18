# 从Web抓取信息

- webbrowser模块
    - open()函数: 启动一个浏览器打开指定URL

- requests模块: 从web上下载文件
    - get() 接收一个要下载的URL字符串，返回值是一个Response的对象
        - 请求成功，下载页面保存在Response对象的text变量中
        - 请求失败，显示错误消息
    - 通过检查Response的对象的status_code属性来判断下载是否成功，通过调用Response的对象的raise_for_status()方法一样可以
    - 将下载文件保存到硬盘
        - 写二进制模式(wb)打开文件
        - 循环Response的对象的iter_content() 返回一段bytes数据类型

- Beautiful Soup模块: 用于从HTML页面提取信息
    - BeautifulSoup() 返回一个BeautifulSoup对象
        - 参数1: Response对象的text属性、File对象
        - 参数2: 解析器 默认html.parser、lxml
    - select() 传入一个字符串作为CSS选择器 返回一个列表