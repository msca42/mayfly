# 多媒体与嵌入

## 图片

- img 元素将图片插入网页

  - src 属性指向图像的 URL 地址
  - alt 属性是图片的文本描述

- 媒体资源和许可

  - 在使用图像之前，请确保拥有该图像的所有权，获得使用许可或遵守所有者的许可条件
  - 常见许可类型
    - 版权所有
    - 自由许可
    - 公共领域

- 通过为图片搭配说明文字解释图片

  - figure 元素 提供语义容器
  - figcaption 元素 描述元素的内容

- 通过 CSS 的 background 属性嵌入背景图片

- 网页上其他常见的图形
  - Canvas、SVG、WebGL、WebRTC

## 视频和音频

- 最早的音视频解决方案是基于插件的 Flash，现在的解决方案是原生 HTML，包括 video 和 audio 以及控制它们的 JavaScript API
- video 元素/ audio 元素
  - 作用: 嵌入视频/ 视频
  - src 属性:指定视频来源
  - controls: 控制视频和音频的播放
- 容器格式:类似 MP3、MP4 还有 WebM，定义构成媒体文件的音频轨道和视频轨道的存储结构，其中还包含描述这个媒体文件的元数据，以及使用什么编解码器对其通道进行编码等
  - WebM 容器包括 Vorbis 或 Opus 音频和 VP8/VP9 视频
  - MP4 容器包括 AAC 或 MP3 音频和 H.264 视频
  - Ogg 容器倾向于使用 Vorbis 音频和 Theora 视频
  - MP3 文件实际存储在 MPEG 或 MPEG-2 容器中的音频轨道上

## 其他嵌入技术
- 历史
  - 最早使用框架来搭建HTML页面
  - 后来插件技术流行，例如Java Applet和Flash,嵌入技术通过object元素和embed元素实现
  - 最后，iframe元素出现
- iframe
  - 作用: 将其他Web文档嵌入当当前文档中
  - 存在安全隐患: 点击劫持


## 矢量图像

## 响应式图片
