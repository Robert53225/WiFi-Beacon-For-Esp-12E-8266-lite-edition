#include <ESP8266WiFi.h>

String ssidList[] = {
  // 普通SSID
  "TP-LINK_",
  "Xiaomi_",
  "HUAWEI_",
  // 热点SSID
  "MiFi-",
  "DESKTOP-",
  "WIN-",
  // 企业SSID
  "iKuai-",
  "OpenWrt_",
  "Network-",
  // 商业SSID
  "网吧",
  "饭店",
  "旅馆",
  "酒吧",
  "KTV-"
}; 
// 初始化
int sy = 0;
String networkname;
unsigned long runthetime = 0;
void setup(){
  pinMode(2,OUTPUT);
  WiFi.mode(WIFI_AP);
}
void loop(){
  // 防止单片机溢出卡死
  if (millis() - runthetime > 30000){
    ESP.restart();
  } else if (millis() - runthetime > 950){
    // 主程序
    int ssidid = random(1200, 10000);
    runthetime = millis();
    sy = (sy + 1) % 14;  // 索引计算
    WiFi.softAPdisconnect(true); 
    networkname = ssidList[sy] + String(ssidid);
    WiFi.softAP(networkname.c_str());
  };
  // 没用的闪烁awa
  digitalWrite(2,LOW);
  delay(100);
  digitalWrite(2,HIGH);
}