# 声音

## 从 Pygame 模块中寻求更多帮助

- 使用 pygame.mixer 模块

## 制造声音与播放声音

- 声音来源
  - 程序本身生成或合成
  - 提前录制好的声音

## 播放声音

- 常见声音文件
  - 波形文件: wav
  - MP3 文件: mp3
  - WMA 文件: wma
  - Ogg Vorbis 文件: ogg 文件
- 使用 pygame.mixer
  - 针对不同类型的声音，使用不同的策略
    - 音效或声音片段，类型 wav，使用 Sound 对象
    - 音乐，类型 mp3、wma、ogg,使用 mixer.music 模块

## 控制音量

- set_volume()方法，音量区间 0~1

## 播放背景音乐

- get_busy(): 判断是否播放完成,返回值为布尔类型

## 重复播放音乐

- play(次数)
  - 参数为-1 时，重复播放

## 在 PyPong 游戏中添加声音

- 更多声音

## 在 PyPong 游戏中添加音乐
