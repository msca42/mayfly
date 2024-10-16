# 读写文件
- 文件的组成: 文件路径、文件名、扩展名
- 标准库
    - pathlib模块
        - Path函数:显示提供的文件路径和文件名,返回一个Path对象
    - os.path模块
    - shelve模块
        - 二进制保存模块
- 当前工作目录
    - Path.cwd() 获取
    - os.chdir() 修改
- 主目录
    - Path.home()获取
- 创建文件夹
    - os.makedirs()  可以创建多个子目录
    - Path对象 mkdir() 只能创建一个文件夹
- 绝对路径和相对路径
    - 绝对路径 = 主目录 + 目标路径 通过/的方式进行拼接
    - Path对象 is_absolute() 判断绝对路径
    - os.path.abspath(path) 将返回参数的绝对路径的字符串
    - os.path.isabs(path) 绝对路径返回True 相对路径返回False
    - os.path.relpath(path,start) 返回从start开始到path位置的相对路径
- 拆解Path对象
    - 锚点: 根目录(也可以称为驱动器) 
        - Path.anchor 
        - Path.drive
    - 父文件夹: 包含该文件的文件夹
    - 文件名: 主干名 + 后缀名
        - Path.name
        - Path.stem
        - Path.suffix
- 查看文件大小和文件夹内容
    - 查看文件大小
        - os.path.getsize()
    - 查看文件夹内容
        - os.listdir()
- 修改文件列表
    - Path对象 glob()方法
- 检查路径有效性
    - Path对象 exists()方法 路径存在返回True
    - Path对象 is_file()方法 路径是文件返回True
    - Path对象 is_dir()方法 路径是文件夹返回True
- 文件分类
    - 纯文本文件
        - pathlib模块 
            - read_text()方法 返回文本文件全部内容的字符串
            - write_text()方法 利用传递的字符串创建一个新的文本文件
    - 二进制文件
        - 通过shelve模块可以将变量保存为二进制
        - 步骤
            - shelve.open(文件名) 返回shelve对象
            - 
------
- 常见文件操作
    - open()打开文件 返回一个File对象
        - 参数1: 文件名
        - 参数2: 读写方式r、w、a
    - read()读取内容 将文件内容读取为一个字符串值
    - readlines() 读取一个字符串列表，每一行就是一个字符串
    - write() w表示覆盖写入，a表示追加写入
    - close() 关闭文件