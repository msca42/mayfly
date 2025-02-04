# 读写文件
## 文件与文件路径
- 文件属性: 文件名和路径
- pathlib模块的Path函数可以很好的处理Windows、MacOS
和Linux上的路径问题
    - 建议导入格式from pathlib import Path
    - 返回类型WindowsPath或PosixPath对象，可以使用str()获取字符串
- 连接路径符: / 
- 当前工作目录
    - 获取: Path.cwd()、os.getcwd()
    - 修改: os.chdir()
- 主目录
    - 所有用户在计算机上都有一个用于存放自己文件的文件夹
    - Windows: C:\Users
    - MacOS: /Users
    - Linux: /home
- 相对路径和绝对路径
    - 绝对路径: 从根文件夹开始
    - 相对路径: 相对于当前工作目录
    - 处理
        - is_absolute() 如果是绝对路径返回True
        - abspath(path) 返回参数的绝对路径字符串
        - isabs(path) 绝对路径返回True 相对路径返回False
        - relpath(path,start) 返回从开始路径到path的相对路径字符串
- 创建新文件夹
    - os.makedirs(path) 可以同时创建多级目录
    - Path(r'path').mkdir() 一次只能创建一个目录
- 解析Path对象
    - 锚点anchor: 根文件夹
    - 驱动器drive: Windows上的物理硬件或其他存储设备
    - 父文件夹parent: 包含该文件的文件夹
    - 文件名name: 主干名stem + 扩展名suffix
- 查看文件大小和文件夹内容
    - 查看文件字节数: os.path.getsize(path)
    - 查看文件夹文件名列表: os.listdir(path)
- 修改文件列表
    - Path对象的glob()方法
- 检查路径的有效性
    - exists() 检测路径是否存在
    - is_file() 是否是一个文件
    - is_dir() 是否是一个文件夹
## 文件读写过程
- 文件可以分为纯文本文件和二进制文件
- 二进制文件使用shelve模块处理
- pathlib模块
## 用shelve模块保存变量
## 用pprint.pformat()函数保存变量
## 项目: 生成随机的测验试卷文件
## 项目: 创建可更新的多重粘贴板
## 小结
## 习题
## 实践项目