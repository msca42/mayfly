# 配置环境

## 安装基础软件

- 代码编辑器
  - VS Code
- 代码编辑器
  - 基于内核
    - Chromium: Chrome、Opera、Brave、Edge、Vivaldi
    - Gecko: Firfox
    - Webkit: Safari
- 本地 Web 服务器
  - 在 VSCode 中安装插件 Live Preview
- 图形编辑器
  - 浏览图片：Windows 的照片，MacOS 的预览
  - 编辑图片： Photoshop
- 版本控制系统
  - Git 可与 GitHub 和 GitLab 一起托管
- 网站部署应用
  - 将应用部署到 Web 服务器
  - Github Pages
  - Netlify

## 浏览互联网

- 网页: 一份能够显示在 Web 浏览器上的文档，也称为 page 页面，使用 HTML 编写，可以插入不同类型的资源
- 网站: 一个由许多网页组合在一起的集合，网页以各种方式相互连接，通常称为 site 站点，共享唯一的域名
- Web 服务器: 一个在互联网上托管网站的计算机
  - 托管表示所有网页和支持文件在计算机中可用
- 搜索引擎:帮助你查找其他网页的网络服务
  - Google、Bing、Yahoo、DuckDuckGo
- Web 是如何工作的
  - 浏览器从 Web 服务器中通过 HTTP 协议请求资源
  - 请求成功，Web 服务器将包含所需资源的 HTTP 响应返回给浏览器
  - 当所有资源请求完成后，Web 浏览器按照要求解析和渲染，并展示给用户
- 使用 AI
  - chatgpt、gemini、copilot、deepseek、kimi

## 代码编辑器

- 推荐使用 VS Code
- 常见功能
  - 打开和编辑文件
  - 语法高亮
  - 代码补全/建议
  - 调试帮助
  - 搜索和替换
- 通过插件增强代码编辑器
  - 安装 Prettier - Code formatter
    - 每次保存时格式化代码

## 处理文件

- 网站应该保存在何处
  - 一个单独的文件夹保存所有网站项目
  - 在这个文件夹中创建存放网站的文件夹
  - 文件夹呈现为一个规定的结构
- 关于大小写和空格
  - 建议文件名使用连字符而不是下划线作为单词的分隔
  - 规范
    - 文件夹名和文件名使用小写、不带空格、用连字符分隔单词
- 网站使用的结构
  - index.html 主页内容
  - images 文件夹 图片文件夹
  - styles 样式代码文件夹
  - scripts 脚本文件夹

## 命令行速成课

- 推荐使用 Windows 的 WSL 安装 Linux 系统
- 基本命令
  - cd、ls、mkdir、touch、cp、mv、rm、curl、grep、wc
- 可以在 glitch.com 上测试命令
- 关于特定终端命令的的网站 tldr.sh 类似 MDN
- 安装 node
  - 执行 npm -v 时注意 powershell 的执行策略
- 安装 prettier
