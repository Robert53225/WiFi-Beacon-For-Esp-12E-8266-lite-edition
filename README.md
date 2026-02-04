# WiFi-Beacon-For-Esp-12E-8266-lite-edition
ESP8266单片机WiFi 多信标帧广播克隆程序。/ESP8266 microcontroller's WiFi multi-beacon frame broadcast cloning program.
## 文件结构
| LICENSE.txt
| README.md
| WiFi Beacon.c  <-- .C源文件
| WiFi_Beacon.mix  <-- Mixly(米思奇)保存后源文件
## 部署流程
打开你的Arudino IDE或者Mixly、其他IDE
1.打开.c/.mixly文件
2.对程序进行编译(如果是Arduino IDE可省去)
3.确保微控制器连接到电脑，上传到你的ESP 8266
## 程序概括
这是一个基于 ESP8266 微控制器的 WiFi 信号发射程序，用于模拟各种常见类型的 WiFi 热点（AP），并定期更换网络名称（SSID）。
### 功能特性
#### 1. SSID 模拟
| 模拟多种常见 WiFi 网络类型 |
| --- | --- |
| 家用路由器 | TP-LINK、Xiaomi、HUAWEI |
| 个人热点 | MiFi、DESKTOP、WIN|
| 企业网络 | iKuai、OpenWrt、Network |
| 商业场所 | 网吧、饭店、旅馆、酒吧、KTV |
#### 2. 动态 SSID 生成
每个 SSID 后附加随机数字（1200-9999）
示例生成的 SSID："TP-LINK_5689"、"饭店_7423"
#### 3. 定时切换机制
每 950 毫秒更换一次 SSID
14 个预设 SSID 循环使用
#### 4. 系统稳定性
30 秒自动重启机制，防止系统卡死
使用 ESP.restart() 确保程序持续运行
### 硬件需求
主控芯片：ESP8266（如 NodeMCU、Wemos D1 mini）
连接：GPIO 2 连接 LED（用于状态指示）
## 许可证
本项目采用 MIT 许可证 - 查看 [LICENSE](LICENSE) 文件了解详情。
